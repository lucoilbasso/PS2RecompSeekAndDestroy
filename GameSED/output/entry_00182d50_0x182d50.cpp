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

// Function: entry_00182d50
// Address: 0x182d50 - 0x182d60
void entry_00182d50_0x182d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182d50_0x182d50");
#endif

    ctx->pc = 0x182d50u;

    // 0x182d50: 0x460c2834  c.lt.s      $f5, $f12
    ctx->pc = 0x182d50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182d54: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x182D54u;
    {
        const bool branch_taken_0x182d54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D54u;
        // 0x182d58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d54) {
            ctx->pc = 0x182D60u;
            return;
        }
    }
    ctx->pc = 0x182D5Cu;
    // 0x182d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x182d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182d60u;
}
