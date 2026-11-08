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

// Function: WDmaVIF1Callback__FiPvT1
// Address: 0x176290 - 0x1762fc
void WDmaVIF1Callback__FiPvT1_0x176290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WDmaVIF1Callback__FiPvT1_0x176290");
#endif

    switch (ctx->pc) {
        case 0x1762a4u: goto label_1762a4;
        case 0x1762c4u: goto label_1762c4;
        case 0x1762d0u: goto label_1762d0;
        case 0x1762e4u: goto label_1762e4;
        default: break;
    }

    ctx->pc = 0x176290u;

    // 0x176290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x176290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x176294: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x176294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x176298: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x176298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17629c: 0xc06bd38  jal         func_1AF4E0
    ctx->pc = 0x17629Cu;
    SET_GPR_U32(ctx, 31, 0x1762A4u);
    ctx->pc = 0x1762A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17629Cu;
    // 0x1762a0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4E0u, 0x17629Cu, 0x1762A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1762A4u;
label_1762a4:
    // 0x1762a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1762a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1762a8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1762A8u;
    {
        const bool branch_taken_0x1762a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1762ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762A8u;
        // 0x1762ac: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762a8) {
            ctx->pc = 0x1762C8u;
            goto label_1762c8;
        }
    }
    ctx->pc = 0x1762B0u;
    // 0x1762b0: 0x8f828c74  lw          $v0, -0x738C($gp)
    ctx->pc = 0x1762b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937716)));
    // 0x1762b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1762B4u;
    {
        const bool branch_taken_0x1762b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1762b4) {
            ctx->pc = 0x1762C8u;
            goto label_1762c8;
        }
    }
    ctx->pc = 0x1762BCu;
    // 0x1762bc: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x1762BCu;
    SET_GPR_U32(ctx, 31, 0x1762C4u);
    ctx->pc = 0x1762C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1762BCu;
    // 0x1762c0: 0x8f848c60  lw          $a0, -0x73A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x1762BCu, 0x1762C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1762C4u;
label_1762c4:
    // 0x1762c4: 0x8f848c68  lw          $a0, -0x7398($gp)
    ctx->pc = 0x1762c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
label_1762c8:
    // 0x1762c8: 0xc06bd38  jal         func_1AF4E0
    ctx->pc = 0x1762C8u;
    SET_GPR_U32(ctx, 31, 0x1762D0u);
    ctx->pc = 0x1762CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1762C8u;
    // 0x1762cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4E0u, 0x1762C8u, 0x1762D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1762D0u;
label_1762d0:
    // 0x1762d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1762d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1762d4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1762D4u;
    {
        const bool branch_taken_0x1762d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1762d4) {
            ctx->pc = 0x1762E4u;
            goto label_1762e4;
        }
    }
    ctx->pc = 0x1762DCu;
    // 0x1762dc: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x1762DCu;
    SET_GPR_U32(ctx, 31, 0x1762E4u);
    ctx->pc = 0x1762E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1762DCu;
    // 0x1762e0: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x1762DCu, 0x1762E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1762E4u;
label_1762e4:
    // 0x1762e4: 0xf  sync
    ctx->pc = 0x1762e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1762e8: 0x42000038  ei
    ctx->pc = 0x1762e8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1762ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1762ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1762f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1762f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1762F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1762F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762F4u;
        // 0x1762f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1762F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1762FCu;
}
