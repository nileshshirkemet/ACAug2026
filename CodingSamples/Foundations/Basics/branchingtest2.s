        .include "common.i"

        .start

        GetInt  askn

        mov     rbx, rax
        mov     rax, 1
        mov     rcx, 0

1:      mov     rdx, 10
        mul     rdx
        inc     rcx     #add rcx, 1

        cmp     rax, rbx
        jle     1b

        PutInt  tell, rcx

        .stop

askn:   .string "Positive Integer: "
tell:   .string "Number of Digits = "

        .end
