        .include "common.i"

        .start

        PutStr  greet

        GetInt  asku            #input rax=N

        mov     rcx, rax        #rcx=N
        add     rcx, 1          #rcx=N+1
        mul     rcx             #rax=N*(N+1)
        shr     rax, 1          #rax=N*(N+1)/2

        PutInt  tell            #output rax

        .stop

greet:  .string "Hello World!\n"
asku:   .string "Upper Limit: "
tell:   .string "Result = "

        .end
