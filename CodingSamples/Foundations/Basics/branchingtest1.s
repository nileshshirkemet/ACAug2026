        .include "common.i"

        .start

        GetInt  askl, rdi
        GetInt  asku, rsi

        cmp     rdi, rsi
        jg      over

        mov     rax, rsi
        mov     rcx, rax
        add     rcx, 1
        mul     rcx
        shr     rax, 1
        mov     rsi, rax
        mov     rax, rdi
        sub     rax, 1
        mov     rcx, rax
        add     rcx, 1
        mul     rcx
        shr     rax, 1
        sub     rsi, rax

        PutInt  tell, rsi
over:   PutStr  done

        .stop

askl:   .string "Lower Limit: "
asku:   .string "Upper Limit: "
tell:   .string "Result = "
done:   .string "Goodbye!\n"

        .end
