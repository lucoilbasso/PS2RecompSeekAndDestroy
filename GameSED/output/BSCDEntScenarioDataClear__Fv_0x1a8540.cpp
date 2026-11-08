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

// Function: BSCDEntScenarioDataClear__Fv
// Address: 0x1a8540 - 0x1a859c
void BSCDEntScenarioDataClear__Fv_0x1a8540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntScenarioDataClear__Fv_0x1a8540");
#endif

    switch (ctx->pc) {
        case 0x1a8550u: goto label_1a8550;
        case 0x1a8578u: goto label_1a8578;
        default: break;
    }

    ctx->pc = 0x1a8540u;

    // 0x1a8540: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1a8540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1a8544: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a8544u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8548: 0x2444fb30  addiu       $a0, $v0, -0x4D0
    ctx->pc = 0x1a8548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966064));
    // 0x1a854c: 0x0  nop
    ctx->pc = 0x1a854cu;
    // NOP
label_1a8550:
    // 0x1a8550: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a8550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a8554: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a8554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a8558: 0x2c620060  sltiu       $v0, $v1, 0x60
    ctx->pc = 0x1a8558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
    // 0x1a855c: 0x0  nop
    ctx->pc = 0x1a855cu;
    // NOP
    // 0x1a8560: 0x0  nop
    ctx->pc = 0x1a8560u;
    // NOP
    // 0x1a8564: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A8564u;
    {
        const bool branch_taken_0x1a8564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8564u;
        // 0x1a8568: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8564) {
            ctx->pc = 0x1A8550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8550;
        }
    }
    ctx->pc = 0x1A856Cu;
    // 0x1a856c: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1a856cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1a8570: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a8570u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8574: 0x2444fcb0  addiu       $a0, $v0, -0x350
    ctx->pc = 0x1a8574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
label_1a8578:
    // 0x1a8578: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a8578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a857c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a857cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a8580: 0x2c620200  sltiu       $v0, $v1, 0x200
    ctx->pc = 0x1a8580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1a8584: 0x0  nop
    ctx->pc = 0x1a8584u;
    // NOP
    // 0x1a8588: 0x0  nop
    ctx->pc = 0x1a8588u;
    // NOP
    // 0x1a858c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A858Cu;
    {
        const bool branch_taken_0x1a858c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A858Cu;
        // 0x1a8590: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a858c) {
            ctx->pc = 0x1A8578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8578;
        }
    }
    ctx->pc = 0x1A8594u;
    // 0x1a8594: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A859Cu;
}
