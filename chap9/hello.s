.intel_syntax noprefix

.section .text

.globl _main
_main:
        enter 0, 0

        // welcome message
        push    OFFSET s_HelloWorld
        call    _printf
        pop     ax

        // add three numbers
        push    2
        push    4
        push    5
        call    _addThree
        add     esp, 3 * 4

        // print returned value
        push    ax
        push    OFFSET s_PercentD
        call    _printf
        add     esp, 2 * 4

        xor     ax, ax
        leave
        ret

// Add three numbers
_addThree:
       enter    0, 0
       //mov     ax, DWORD PTR [ebp + 8]
       //add      ax, DWORD PTR [ebp + 12]
       //add      ax, DWORD PTR [ebp + 16]
       leave
       ret

.section .rdata

s_HelloWorld:
       .ascii  "Hello, world.\n\0"
s_PercentD:
       .asciz "%d\n"

