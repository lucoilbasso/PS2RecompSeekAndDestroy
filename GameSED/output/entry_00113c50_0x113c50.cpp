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

// Function: entry_00113c50
// Address: 0x113c50 - 0x113c84
void entry_00113c50_0x113c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113c50_0x113c50");
#endif

    ctx->pc = 0x113c50u;

label_113c50:
    // 0x113c50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x113c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x113c54: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x113c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x113c58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x113c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x113c5c: 0x0  nop
    ctx->pc = 0x113c5cu;
    // NOP
    // 0x113c60: 0x0  nop
    ctx->pc = 0x113c60u;
    // NOP
    // 0x113c64: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113C64u;
    {
        const bool branch_taken_0x113c64 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x113C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C64u;
        // 0x113c68: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c64) {
            ctx->pc = 0x113C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113c50;
        }
    }
    ctx->pc = 0x113C6Cu;
    // 0x113c6c: 0x8f829124  lw          $v0, -0x6EDC($gp)
    ctx->pc = 0x113c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938916)));
    // 0x113c70: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x113c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x113c74: 0x24844248  addiu       $a0, $a0, 0x4248
    ctx->pc = 0x113c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16968));
    // 0x113c78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x113c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x113c7c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x113C7Cu;
    SET_GPR_U32(ctx, 31, 0x113C84u);
    ctx->pc = 0x113C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C7Cu;
    // 0x113c80: 0xaf829124  sw          $v0, -0x6EDC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x113C7Cu, 0x113C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C84u;
}
