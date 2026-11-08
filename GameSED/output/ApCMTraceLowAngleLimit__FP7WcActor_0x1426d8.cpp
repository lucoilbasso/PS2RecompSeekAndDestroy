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

// Function: ApCMTraceLowAngleLimit__FP7WcActor
// Address: 0x1426d8 - 0x142738
void ApCMTraceLowAngleLimit__FP7WcActor_0x1426d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCMTraceLowAngleLimit__FP7WcActor_0x1426d8");
#endif

    switch (ctx->pc) {
        case 0x1426f4u: goto label_1426f4;
        default: break;
    }

    ctx->pc = 0x1426d8u;

    // 0x1426d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1426d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1426dc: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1426dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1426e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1426e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1426e4: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x1426e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x1426e8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1426e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1426ec: 0xc061a46  jal         func_186918
    ctx->pc = 0x1426ECu;
    SET_GPR_U32(ctx, 31, 0x1426F4u);
    ctx->pc = 0x1426F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1426ECu;
    // 0x1426f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x1426ECu, 0x1426F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1426F4u;
label_1426f4:
    // 0x1426f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1426f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1426f8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1426F8u;
    {
        const bool branch_taken_0x1426f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1426FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1426F8u;
        // 0x1426fc: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1426f8) {
            ctx->pc = 0x142718u;
            goto label_142718;
        }
    }
    ctx->pc = 0x142700u;
    // 0x142700: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x142700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x142704: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x142704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x142708: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x142708u;
    {
        const bool branch_taken_0x142708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x142708) {
            ctx->pc = 0x14270Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142708u;
            // 0x14270c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14271Cu;
            goto label_14271c;
        }
    }
    ctx->pc = 0x142710u;
    // 0x142710: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x142710u;
    {
        const bool branch_taken_0x142710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142710u;
        // 0x142714: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142710) {
            ctx->pc = 0x14271Cu;
            goto label_14271c;
        }
    }
    ctx->pc = 0x142718u;
label_142718:
    // 0x142718: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x142718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14271c:
    // 0x14271c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x14271cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x142720: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x142720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x142724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142728: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14272c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x14272cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x142730: 0x3e00008  jr          $ra
    ctx->pc = 0x142730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142730u;
        // 0x142734: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142738u;
}
