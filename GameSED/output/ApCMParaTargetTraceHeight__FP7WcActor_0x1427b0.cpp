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

// Function: ApCMParaTargetTraceHeight__FP7WcActor
// Address: 0x1427b0 - 0x142810
void ApCMParaTargetTraceHeight__FP7WcActor_0x1427b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCMParaTargetTraceHeight__FP7WcActor_0x1427b0");
#endif

    switch (ctx->pc) {
        case 0x1427ccu: goto label_1427cc;
        default: break;
    }

    ctx->pc = 0x1427b0u;

    // 0x1427b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1427b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1427b4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1427b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1427b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1427b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1427bc: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x1427bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x1427c0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1427c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1427c4: 0xc061a46  jal         func_186918
    ctx->pc = 0x1427C4u;
    SET_GPR_U32(ctx, 31, 0x1427CCu);
    ctx->pc = 0x1427C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1427C4u;
    // 0x1427c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x1427C4u, 0x1427CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1427CCu;
label_1427cc:
    // 0x1427cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1427ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1427d0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1427D0u;
    {
        const bool branch_taken_0x1427d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1427D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427D0u;
        // 0x1427d4: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427d0) {
            ctx->pc = 0x1427F0u;
            goto label_1427f0;
        }
    }
    ctx->pc = 0x1427D8u;
    // 0x1427d8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1427d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1427dc: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x1427dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x1427e0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1427E0u;
    {
        const bool branch_taken_0x1427e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1427e0) {
            ctx->pc = 0x1427E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1427E0u;
            // 0x1427e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1427F4u;
            goto label_1427f4;
        }
    }
    ctx->pc = 0x1427E8u;
    // 0x1427e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1427E8u;
    {
        const bool branch_taken_0x1427e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1427ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427E8u;
        // 0x1427ec: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427e8) {
            ctx->pc = 0x1427F4u;
            goto label_1427f4;
        }
    }
    ctx->pc = 0x1427F0u;
label_1427f0:
    // 0x1427f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1427f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1427f4:
    // 0x1427f4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1427f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1427f8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1427f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1427fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1427fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142800: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x142804: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x142804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x142808: 0x3e00008  jr          $ra
    ctx->pc = 0x142808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142808u;
        // 0x14280c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142810u;
}
