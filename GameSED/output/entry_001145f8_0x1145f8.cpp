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

// Function: entry_001145f8
// Address: 0x1145f8 - 0x11462c
void entry_001145f8_0x1145f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001145f8_0x1145f8");
#endif

    ctx->pc = 0x1145f8u;

label_1145f8:
    // 0x1145f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1145f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1145fc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1145fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x114600: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x114600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x114604: 0x0  nop
    ctx->pc = 0x114604u;
    // NOP
    // 0x114608: 0x0  nop
    ctx->pc = 0x114608u;
    // NOP
    // 0x11460c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11460Cu;
    {
        const bool branch_taken_0x11460c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x114610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11460Cu;
        // 0x114610: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11460c) {
            ctx->pc = 0x1145F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1145f8;
        }
    }
    ctx->pc = 0x114614u;
    // 0x114614: 0x8f829124  lw          $v0, -0x6EDC($gp)
    ctx->pc = 0x114614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938916)));
    // 0x114618: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x114618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x11461c: 0x24844248  addiu       $a0, $a0, 0x4248
    ctx->pc = 0x11461cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16968));
    // 0x114620: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x114620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x114624: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x114624u;
    SET_GPR_U32(ctx, 31, 0x11462Cu);
    ctx->pc = 0x114628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114624u;
    // 0x114628: 0xaf829124  sw          $v0, -0x6EDC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x114624u, 0x11462Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11462Cu;
}
