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

// Function: entry_0019e818
// Address: 0x19e818 - 0x19e824
void entry_0019e818_0x19e818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e818_0x19e818");
#endif

    ctx->pc = 0x19e818u;

    // 0x19e818: 0x46026032  c.eq.s      $f12, $f2
    ctx->pc = 0x19e818u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e81c: 0x45010054  bc1t        . + 4 + (0x54 << 2)
    ctx->pc = 0x19E81Cu;
    {
        const bool branch_taken_0x19e81c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E81Cu;
        // 0x19e820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e81c) {
            ctx->pc = 0x19E970u;
            return;
        }
    }
    ctx->pc = 0x19E824u;
}
