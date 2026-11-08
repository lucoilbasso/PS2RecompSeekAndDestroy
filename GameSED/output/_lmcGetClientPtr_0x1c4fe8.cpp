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

// Function: _lmcGetClientPtr
// Address: 0x1c4fe8 - 0x1c5018
void _lmcGetClientPtr_0x1c4fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lmcGetClientPtr_0x1c4fe8");
#endif

    ctx->pc = 0x1c4fe8u;

    // 0x1c4fe8: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1c4fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1c4fec: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1c4fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1c4ff0: 0x24c60400  addiu       $a2, $a2, 0x400
    ctx->pc = 0x1c4ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x1c4ff4: 0x2442ddf8  addiu       $v0, $v0, -0x2208
    ctx->pc = 0x1c4ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958584));
    // 0x1c4ff8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1c4ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1c4ffc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c4ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1c5000: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1c5000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1c5004: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c5004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c5008: 0x8c83ddfc  lw          $v1, -0x2204($a0)
    ctx->pc = 0x1c5008u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24DDFCu));
    // 0x1c500c: 0x2442ee40  addiu       $v0, $v0, -0x11C0
    ctx->pc = 0x1c500cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962752));
    // 0x1c5010: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5010u;
        // 0x1c5014: 0xacc3003c  sw          $v1, 0x3C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5018u;
}
