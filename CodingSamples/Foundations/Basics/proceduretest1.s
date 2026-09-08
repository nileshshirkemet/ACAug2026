        .include "common.i"

compute: #procedure to calculate sum of integers from 1 to N (rax)
        mov     rcx, rax
        add     rcx, 1
        mul     rcx
        shr     rax, 1  
        ret     #mov rip, [rsp] ; add rsp, 8

        .start

        GetInt  askl, rdi
        GetInt  asku, rsi

        cmp     rdi, rsi
        jg      over

        mov     rax, rsi
        call    compute         #sub rsp, 8 ; mov [rsp], rip ; lea rip, compute
        mov     rsi, rax
        mov     rax, rdi
        sub     rax, 1
        call    compute
        sub     rsi, rax

        PutInt  tell, rsi
over:   PutStr  done

        .stop

askl:   .string "Lower Limit: "
asku:   .string "Upper Limit: "
tell:   .string "Result = "
done:   .string "Goodbye!\n"

        .end
