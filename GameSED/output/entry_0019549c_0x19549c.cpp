#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0019549c
// Address: 0x19549c - 0x1954a8
void entry_0019549c_0x19549c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019549c_0x19549c");
#endif

    ctx->pc = 0x19549cu;

    // 0x19549c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19549cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1954a0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1954A0u;
    {
        const bool branch_taken_0x1954a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1954A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954A0u;
        // 0x1954a4: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954a0) {
            ctx->pc = 0x1954B0u;
            return;
        }
    }
    ctx->pc = 0x1954A8u;
}
