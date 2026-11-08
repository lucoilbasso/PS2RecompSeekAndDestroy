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

// Function: WCdManStatusThreadProgram__FP8BcThread
// Address: 0x1785e8 - 0x178620
void WCdManStatusThreadProgram__FP8BcThread_0x1785e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WCdManStatusThreadProgram__FP8BcThread_0x1785e8");
#endif

    switch (ctx->pc) {
        case 0x178600u: goto label_178600;
        case 0x178608u: goto label_178608;
        case 0x178610u: goto label_178610;
        case 0x178618u: goto label_178618;
        default: break;
    }

    ctx->pc = 0x1785e8u;

    // 0x1785e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1785e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1785ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1785ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1785f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1785f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1785f4: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x1785f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x1785f8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1785f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1785fc: 0x8c500024  lw          $s0, 0x24($v0)
    ctx->pc = 0x1785fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_178600:
    // 0x178600: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x178600u;
    SET_GPR_U32(ctx, 31, 0x178608u);
    ctx->pc = 0x178604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178600u;
    // 0x178604: 0x8e041010  lw          $a0, 0x1010($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x178600u, 0x178608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178608u;
label_178608:
    // 0x178608: 0xc05e2e6  jal         func_178B98
    ctx->pc = 0x178608u;
    SET_GPR_U32(ctx, 31, 0x178610u);
    ctx->pc = 0x178B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B98u, 0x178608u, 0x178610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178610u;
label_178610:
    // 0x178610: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x178610u;
    SET_GPR_U32(ctx, 31, 0x178618u);
    ctx->pc = 0x178614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178610u;
    // 0x178614: 0x8e041010  lw          $a0, 0x1010($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x178610u, 0x178618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178618u;
label_178618:
    // 0x178618: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x178618u;
    {
        const bool branch_taken_0x178618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178618) {
            ctx->pc = 0x178600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178600;
        }
    }
    ctx->pc = 0x178620u;
}
