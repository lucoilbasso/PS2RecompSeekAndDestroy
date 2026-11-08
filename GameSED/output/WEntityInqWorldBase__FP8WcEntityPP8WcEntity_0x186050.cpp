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

// Function: WEntityInqWorldBase__FP8WcEntityPP8WcEntity
// Address: 0x186050 - 0x1860a8
void WEntityInqWorldBase__FP8WcEntityPP8WcEntity_0x186050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WEntityInqWorldBase__FP8WcEntityPP8WcEntity_0x186050");
#endif

    switch (ctx->pc) {
        case 0x186078u: goto label_186078;
        default: break;
    }

    ctx->pc = 0x186050u;

    // 0x186050: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x186050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x186054: 0x50c00012  beql        $a2, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x186054u;
    {
        const bool branch_taken_0x186054 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x186054) {
            ctx->pc = 0x186058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186054u;
            // 0x186058: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1860A0u;
            goto label_1860a0;
        }
    }
    ctx->pc = 0x18605Cu;
    // 0x18605c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x18605cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x186060: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x186060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x186064: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x186064u;
    {
        const bool branch_taken_0x186064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x186064) {
            ctx->pc = 0x186068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186064u;
            // 0x186068: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1860A0u;
            goto label_1860a0;
        }
    }
    ctx->pc = 0x18606Cu;
    // 0x18606c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x18606cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x186070: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x186070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186074: 0x0  nop
    ctx->pc = 0x186074u;
    // NOP
label_186078:
    // 0x186078: 0x8cc60014  lw          $a2, 0x14($a2)
    ctx->pc = 0x186078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x18607c: 0x50c00008  beql        $a2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18607Cu;
    {
        const bool branch_taken_0x18607c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x18607c) {
            ctx->pc = 0x186080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18607Cu;
            // 0x186080: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1860A0u;
            goto label_1860a0;
        }
    }
    ctx->pc = 0x186084u;
    // 0x186084: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x186084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x186088: 0x0  nop
    ctx->pc = 0x186088u;
    // NOP
    // 0x18608c: 0x0  nop
    ctx->pc = 0x18608cu;
    // NOP
    // 0x186090: 0x0  nop
    ctx->pc = 0x186090u;
    // NOP
    // 0x186094: 0x5443fff8  bnel        $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x186094u;
    {
        const bool branch_taken_0x186094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x186094) {
            ctx->pc = 0x186098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186094u;
            // 0x186098: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186078;
        }
    }
    ctx->pc = 0x18609Cu;
    // 0x18609c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x18609cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_1860a0:
    // 0x1860a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1860A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1860A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860A0u;
        // 0x1860a4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1860A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1860A8u;
}
