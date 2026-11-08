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

// Function: entry_001812f0
// Address: 0x1812f0 - 0x181300
void entry_001812f0_0x1812f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001812f0_0x1812f0");
#endif

    ctx->pc = 0x1812f0u;

    // 0x1812f0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1812f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1812f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1812F4u;
    {
        const bool branch_taken_0x1812f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1812F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1812F4u;
        // 0x1812f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1812f4) {
            ctx->pc = 0x181300u;
            return;
        }
    }
    ctx->pc = 0x1812FCu;
    // 0x1812fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1812fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x181300u;
}
