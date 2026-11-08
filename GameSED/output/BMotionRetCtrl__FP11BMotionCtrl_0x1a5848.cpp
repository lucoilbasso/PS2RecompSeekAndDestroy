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

// Function: BMotionRetCtrl__FP11BMotionCtrl
// Address: 0x1a5848 - 0x1a5894
void BMotionRetCtrl__FP11BMotionCtrl_0x1a5848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionRetCtrl__FP11BMotionCtrl_0x1a5848");
#endif

    switch (ctx->pc) {
        case 0x1a5864u: goto label_1a5864;
        case 0x1a5884u: goto label_1a5884;
        default: break;
    }

    ctx->pc = 0x1a5848u;

    // 0x1a5848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a5848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a584c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a584cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5854: 0x8f84918c  lw          $a0, -0x6E74($gp)
    ctx->pc = 0x1a5854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
    // 0x1a5858: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a5858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a585c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1A585Cu;
    SET_GPR_U32(ctx, 31, 0x1A5864u);
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1A585Cu, 0x1A5864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5864u;
label_1a5864:
    // 0x1a5864: 0x8f83917c  lw          $v1, -0x6E84($gp)
    ctx->pc = 0x1a5864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939004)));
    // 0x1a5868: 0x8f829184  lw          $v0, -0x6E7C($gp)
    ctx->pc = 0x1a5868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939012)));
    // 0x1a586c: 0x8f84918c  lw          $a0, -0x6E74($gp)
    ctx->pc = 0x1a586cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
    // 0x1a5870: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1a5870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1a5874: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a5874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a5878: 0xaf90917c  sw          $s0, -0x6E84($gp)
    ctx->pc = 0x1a5878u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939004), GPR_U32(ctx, 16));
    // 0x1a587c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1A587Cu;
    SET_GPR_U32(ctx, 31, 0x1A5884u);
    ctx->pc = 0x1A5880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A587Cu;
    // 0x1a5880: 0xaf829184  sw          $v0, -0x6E7C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939012), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1A587Cu, 0x1A5884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5884u;
label_1a5884:
    // 0x1a5884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5888: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a5888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a588c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A588Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A588Cu;
        // 0x1a5890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A588Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5894u;
}
