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

// Function: entry_00182e58
// Address: 0x182e58 - 0x182e64
void entry_00182e58_0x182e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182e58_0x182e58");
#endif

    ctx->pc = 0x182e58u;

    // 0x182e58: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x182e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182e5c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x182E5Cu;
    {
        const bool branch_taken_0x182e5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182E5Cu;
        // 0x182e60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182e5c) {
            ctx->pc = 0x182E68u;
            return;
        }
    }
    ctx->pc = 0x182E64u;
}
