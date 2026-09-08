        .include "common.i"

        .extern gcd     #gcd is defined in an external module

        .start

        GetInt  askn, rdi
        GetInt  askn, rsi

        sub     rsp, 16
        mov     [rsp], rdi
        mov     [rsp+8], rsi

        call    gcd
        mov     rcx, rax

        mov     rdi, [rsp]
        mov     rsi, [rsp+8]
        add     rsp, 16         #unwinding stack

        mov     rax, rdi
        mul     rsi
        div     rcx

        PutInt  tell

        .stop

askn:   .string "Positive Integer: "
tell:   .string "L.C.M = "

        .end
