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

// Function: entry_0019f084
// Address: 0x19f084 - 0x19f0a0
void entry_0019f084_0x19f084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f084_0x19f084");
#endif

    ctx->pc = 0x19f084u;

    // 0x19f084: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x19f084u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f088: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19F088u;
    {
        const bool branch_taken_0x19f088 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F088u;
        // 0x19f08c: 0x46006086  mov.s       $f2, $f12 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f088) {
            ctx->pc = 0x19F0A0u;
            return;
        }
    }
    ctx->pc = 0x19F090u;
    // 0x19f090: 0x460d6329  min.s       $f12, $f12, $f13
    ctx->pc = 0x19f090u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[13]);
    // 0x19f094: 0x46006807  neg.s       $f0, $f13
    ctx->pc = 0x19f094u;
    ctx->f[0] = FPU_NEG_S(ctx->f[13]);
    // 0x19f098: 0x46006328  max.s       $f12, $f12, $f0
    ctx->pc = 0x19f098u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[0]);
    // 0x19f09c: 0x46006086  mov.s       $f2, $f12
    ctx->pc = 0x19f09cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x19f0a0u;
}
