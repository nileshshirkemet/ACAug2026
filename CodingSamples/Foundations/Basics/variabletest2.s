        .include "common.i"

        .start

        GetInt  askm, rdi               #rdi=month

        mov     rbx, count              #direct addressing: rbx=first-day-amount
        lea     rsi, count              #rsi=address-linked-to-count-label
        mov     rax, [rsi+8*rdi]        #indirect addressing: rax=number-of-days
        mov     rcx, rax
        add     rcx, 1
        mul     rcx
        shr     rax, 1
        imul    rbx, rax

        PutInt  tell, rbx

        .stop

askm:   .string "Month[1-12]: "
tell:   .string "Total Collection = "
count:  .quad   5, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31

        .end
