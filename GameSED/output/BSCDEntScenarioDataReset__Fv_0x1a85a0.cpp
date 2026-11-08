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

// Function: BSCDEntScenarioDataReset__Fv
// Address: 0x1a85a0 - 0x1a8604
void BSCDEntScenarioDataReset__Fv_0x1a85a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntScenarioDataReset__Fv_0x1a85a0");
#endif

    switch (ctx->pc) {
        case 0x1a85b0u: goto label_1a85b0;
        case 0x1a85d8u: goto label_1a85d8;
        default: break;
    }

    ctx->pc = 0x1a85a0u;

    // 0x1a85a0: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1a85a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1a85a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a85a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85a8: 0x2444fb30  addiu       $a0, $v0, -0x4D0
    ctx->pc = 0x1a85a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966064));
    // 0x1a85ac: 0x0  nop
    ctx->pc = 0x1a85acu;
    // NOP
label_1a85b0:
    // 0x1a85b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a85b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a85b4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a85b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a85b8: 0x2c620060  sltiu       $v0, $v1, 0x60
    ctx->pc = 0x1a85b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
    // 0x1a85bc: 0x0  nop
    ctx->pc = 0x1a85bcu;
    // NOP
    // 0x1a85c0: 0x0  nop
    ctx->pc = 0x1a85c0u;
    // NOP
    // 0x1a85c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A85C4u;
    {
        const bool branch_taken_0x1a85c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A85C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85C4u;
        // 0x1a85c8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85c4) {
            ctx->pc = 0x1A85B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a85b0;
        }
    }
    ctx->pc = 0x1A85CCu;
    // 0x1a85cc: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1a85ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1a85d0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a85d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85d4: 0x2444fcb0  addiu       $a0, $v0, -0x350
    ctx->pc = 0x1a85d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
label_1a85d8:
    // 0x1a85d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a85d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a85dc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a85dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a85e0: 0x2c620200  sltiu       $v0, $v1, 0x200
    ctx->pc = 0x1a85e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1a85e4: 0x0  nop
    ctx->pc = 0x1a85e4u;
    // NOP
    // 0x1a85e8: 0x0  nop
    ctx->pc = 0x1a85e8u;
    // NOP
    // 0x1a85ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A85ECu;
    {
        const bool branch_taken_0x1a85ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A85F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85ECu;
        // 0x1a85f0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85ec) {
            ctx->pc = 0x1A85D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a85d8;
        }
    }
    ctx->pc = 0x1A85F4u;
    // 0x1a85f4: 0x278290e0  addiu       $v0, $gp, -0x6F20
    ctx->pc = 0x1a85f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938848));
    // 0x1a85f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a85f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a85fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A85FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85FCu;
        // 0x1a8600: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A85FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8604u;
}
