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

// Function: SCode2ClassName__FUi
// Address: 0x1a1470 - 0x1a14b8
void SCode2ClassName__FUi_0x1a1470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SCode2ClassName__FUi_0x1a1470");
#endif

    switch (ctx->pc) {
        case 0x1a1488u: goto label_1a1488;
        default: break;
    }

    ctx->pc = 0x1a1470u;

    // 0x1a1470: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x1a1470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1a1474: 0x2463f6a8  addiu       $v1, $v1, -0x958
    ctx->pc = 0x1a1474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964904));
    // 0x1a1478: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a1478u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x23F6A8u));
    // 0x1a147c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A147Cu;
    {
        const bool branch_taken_0x1a147c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A147Cu;
        // 0x1a1480: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a147c) {
            ctx->pc = 0x1A14B0u;
            goto label_1a14b0;
        }
    }
    ctx->pc = 0x1A1484u;
    // 0x1a1484: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a1484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a1488:
    // 0x1a1488: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1488u;
    {
        const bool branch_taken_0x1a1488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a1488) {
            ctx->pc = 0x1A148Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1488u;
            // 0x1a148c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1498u;
            goto label_1a1498;
        }
    }
    ctx->pc = 0x1A1490u;
    // 0x1a1490: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1490u;
        // 0x1a1494: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1498u;
label_1a1498:
    // 0x1a1498: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a1498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a149c: 0x0  nop
    ctx->pc = 0x1a149cu;
    // NOP
    // 0x1a14a0: 0x0  nop
    ctx->pc = 0x1a14a0u;
    // NOP
    // 0x1a14a4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A14A4u;
    {
        const bool branch_taken_0x1a14a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a14a4) {
            ctx->pc = 0x1A14A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A14A4u;
            // 0x1a14a8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1488;
        }
    }
    ctx->pc = 0x1A14ACu;
    // 0x1a14ac: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1a14acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_1a14b0:
    // 0x1a14b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A14B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A14B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14B0u;
        // 0x1a14b4: 0x24428fc8  addiu       $v0, $v0, -0x7038 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938568));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A14B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A14B8u;
}
