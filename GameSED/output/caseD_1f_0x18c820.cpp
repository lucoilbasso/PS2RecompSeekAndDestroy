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

// Function: caseD_1f
// Address: 0x18c820 - 0x18c840
void caseD_1f_0x18c820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1f_0x18c820");
#endif

    switch (ctx->pc) {
        case 0x18c830u: goto label_18c830;
        default: break;
    }

    ctx->pc = 0x18c820u;

    // 0x18c820: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18c820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x18c824: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18c824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c828: 0xc05f238  jal         func_17C8E0
    ctx->pc = 0x18C828u;
    SET_GPR_U32(ctx, 31, 0x18C830u);
    ctx->pc = 0x18C82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C828u;
    // 0x18c82c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C8E0u, 0x18C828u, 0x18C830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C830u;
label_18c830:
    // 0x18c830: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x18c830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x18c834: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x18c834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x18c838: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x18C838u;
    {
        const bool branch_taken_0x18c838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C838u;
        // 0x18c83c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c838) {
            ctx->pc = 0x18C8E4u;
            return;
        }
    }
    ctx->pc = 0x18C840u;
}
