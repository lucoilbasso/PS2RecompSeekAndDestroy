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

// Function: _ResetTankState__7ApcTank
// Address: 0x1d98d0 - 0x1d9900
void ps2__ResetTankState__7ApcTank_0x1d98d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ResetTankState__7ApcTank_0x1d98d0");
#endif

    ctx->pc = 0x1d98d0u;

    // 0x1d98d0: 0x24850260  addiu       $a1, $a0, 0x260
    ctx->pc = 0x1d98d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 608));
    // 0x1d98d4: 0x248403b0  addiu       $a0, $a0, 0x3B0
    ctx->pc = 0x1d98d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 944));
    // 0x1d98d8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1d98d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d98dc: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x1d98dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x1d98e0: 0x346377ff  ori         $v1, $v1, 0x77FF
    ctx->pc = 0x1d98e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30719);
    // 0x1d98e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d98e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d98e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d98e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d98ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d98ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d98f0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1d98f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1d98f4: 0xe48002d4  swc1        $f0, 0x2D4($a0)
    ctx->pc = 0x1d98f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 724), bits); }
    // 0x1d98f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D98F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D98F8u;
        // 0x1d98fc: 0xac8002d0  sw          $zero, 0x2D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 720), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D98F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9900u;
}
