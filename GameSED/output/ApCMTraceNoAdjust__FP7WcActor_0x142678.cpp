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

// Function: ApCMTraceNoAdjust__FP7WcActor
// Address: 0x142678 - 0x1426d8
void ApCMTraceNoAdjust__FP7WcActor_0x142678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCMTraceNoAdjust__FP7WcActor_0x142678");
#endif

    switch (ctx->pc) {
        case 0x142694u: goto label_142694;
        default: break;
    }

    ctx->pc = 0x142678u;

    // 0x142678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14267c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x14267cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x142680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142684: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x142684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x142688: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x142688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14268c: 0xc061a46  jal         func_186918
    ctx->pc = 0x14268Cu;
    SET_GPR_U32(ctx, 31, 0x142694u);
    ctx->pc = 0x142690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14268Cu;
    // 0x142690: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x14268Cu, 0x142694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142694u;
label_142694:
    // 0x142694: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x142694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142698: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x142698u;
    {
        const bool branch_taken_0x142698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142698u;
        // 0x14269c: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142698) {
            ctx->pc = 0x1426B8u;
            goto label_1426b8;
        }
    }
    ctx->pc = 0x1426A0u;
    // 0x1426a0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1426a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1426a4: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x1426a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x1426a8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1426A8u;
    {
        const bool branch_taken_0x1426a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1426a8) {
            ctx->pc = 0x1426ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1426A8u;
            // 0x1426ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1426BCu;
            goto label_1426bc;
        }
    }
    ctx->pc = 0x1426B0u;
    // 0x1426b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1426B0u;
    {
        const bool branch_taken_0x1426b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1426B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1426B0u;
        // 0x1426b4: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1426b0) {
            ctx->pc = 0x1426BCu;
            goto label_1426bc;
        }
    }
    ctx->pc = 0x1426B8u;
label_1426b8:
    // 0x1426b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1426b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1426bc:
    // 0x1426bc: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1426bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1426c0: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1426c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1426c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1426c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1426c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1426c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1426cc: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1426ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x1426d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1426D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1426D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1426D0u;
        // 0x1426d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1426D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1426D8u;
}
