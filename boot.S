.section ".text.boot"

.global _start

_start:
    mrs x1, mpidr_el1
    and x1, x1, #3
    cbz x1, 2f

1: wfe  //Not on main core so loop forever
    b   1b
2: //On main core
    ldr     x1, =_start
    mov     sp, x1

    //Set stack to start below our code
    ldr     x1, =_start
    mov     sp, x1

    //Clean the BSS section
    ldr     x1, =__bss_start   //Start address
    ldr     w2, =__bss_size    //Size of the section
3:  cbz     w2, 4f             //Quit loop if 0
    str     xzr, [x1], #8
    sub     w2, w2, #1
    cbnz    w2, 3b             //Loop if non zero
4:  bl      main //Jump to C main()
b   1b           //If it accidentally returns halt master core