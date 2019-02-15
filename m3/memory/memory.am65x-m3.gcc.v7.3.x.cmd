OUTPUT_FORMAT("elf32-littlearm")
OUTPUT_ARCH(arm)
ENTRY(_c_int00)

IRQ_STACK_SIZE = 0x100;
FIQ_STACK_SIZE = 0x100;
ABT_STACK_SIZE = 0x100;
UND_STACK_SIZE = 0x100;
SVC_STACK_SIZE = 0x100;
USR_STACK_SIZE = 0x1000;

MEMORY
{

    /**
     * 32KB Tightly-Coupled Memory A of R5F.
     */
/*  MCU_ATCM            : o = 0x41400000, l = 0x00008000 */

    /**
     * 32KB Tightly-Coupled Memories B0 and B1 of R5F.
     */
/*  MCU_BTCM            : o = 0x41410000, l = 0x00008000 */

    /**
     * 512KB R5F SRAM.
     */

    /* 352KB Memory for a user application and is free for boot image */
/*  MCU_MSRAM0_CODE     : o = 0x41C00000, l = 0x00080000 - 0x00028000 */

    /* Memory Reserved by ROM Code */
/*  MCU_MSRAM0_RBL      : o = 0x41C58000, l = 0x00028000 - 0x00001500 */

    /* Global Memory Addresses Used by ROM Code (RBL) */
/*  MCU_MSRAM0_RBL_GLOB : o = 0x41C7EB00, l = 0x00001500 */

    /**
     * 2GB DDR RAM
     */
/*  MCU_DDR0            : o = 0x80000000, l = 0x80000000 */

    /**
     * Debug memory
     */
    DMSC_MEM            : o = 0x70000000, l = 0x00040000

}

SECTIONS
{
  	.hwi : {
        *( .text.hwi )
    } > DMSC_MEM

    .text : {
        *( .text )
    } > DMSC_MEM

    .ctors : {
        KEEP (*crtbegin.o(.ctors))
        KEEP (*(EXCLUDE_FILE (*crtend.o ) .ctors))
        KEEP (*(SORT(.ctors.*)))
        KEEP (*(.ctors))
    } > DMSC_MEM

    .dtors : {
        KEEP (*crtbegin.o(.dtors))
        KEEP (*(EXCLUDE_FILE (*crtend.o ) .dtors))
        KEEP (*(SORT(.dtors.*)))
        KEEP (*(.dtors))
    } > DMSC_MEM

    . = ALIGN(4);
    .init_array :
    {
        __init_array_start = .;
        KEEP (*(.init_array*))
        __init_array_end = .;
    } > DMSC_MEM

    .data : {
        *( .data )
    } > DMSC_MEM

    .bss : {
        __bss_start__ = .;
        *( .bss )        
        . = ALIGN(8);        
        __bss_end__ = . ;	
        end = . ;
        __end__ = . ;        
    } > DMSC_MEM
    
    .stack : {
        __stack_start__ = .;    
    
        . += IRQ_STACK_SIZE;
        . = ALIGN(8);        
        __irq_stack_top__ = . ;

        . += FIQ_STACK_SIZE;
        . = ALIGN(8);        
        __fiq_stack_top__ = . ;

        . += ABT_STACK_SIZE;
        . = ALIGN(8);        
        __abt_stack_top__ = . ;

        . += UND_STACK_SIZE;
        . = ALIGN(8);        
        __und_stack_top__ = . ;

        . += SVC_STACK_SIZE;
        . = ALIGN(8);        
        __svc_stack_top__ = . ;

        . += USR_STACK_SIZE;
        . = ALIGN(8);        
        __usr_stack_top__ = . ;
        
        __stack_end__ = .;

    } > DMSC_MEM
    
    /* The section containing information for unwinding the stack */
    .ARM.exidx : { 
        __exidx_start = .;    
        *(.ARM.exidx* .gnu.linkonce.armexidx.*) 
        __exidx_end = .;              
    } > DMSC_MEM
  
    /* The section is for a Build ID that is a unique identification 160-bit SHA-1 string */
    .note.gnu.build-id : {
        *( .note.gnu.build-id )
    } > DMSC_MEM
}
