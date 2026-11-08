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

// Function: entry_0017a140
// Address: 0x17a140 - 0x17a160
void entry_0017a140_0x17a140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a140_0x17a140");
#endif

    switch (ctx->pc) {
        case 0x17a148u: goto label_17a148;
        case 0x17a15cu: goto label_17a15c;
        default: break;
    }

    ctx->pc = 0x17a140u;

label_17a140:
    // 0x17a140: 0xc06bd30  jal         func_1AF4C0
    ctx->pc = 0x17A140u;
    SET_GPR_U32(ctx, 31, 0x17A148u);
    ctx->pc = 0x17A144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A140u;
    // 0x17a144: 0x8f848d0c  lw          $a0, -0x72F4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4C0u, 0x17A140u, 0x17A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A148u;
label_17a148:
    // 0x17a148: 0x8f848d0c  lw          $a0, -0x72F4($gp)
    ctx->pc = 0x17a148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937868)));
    // 0x17a14c: 0x1044fffc  beq         $v0, $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17A14Cu;
    {
        const bool branch_taken_0x17a14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x17a14c) {
            ctx->pc = 0x17A140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a140;
        }
    }
    ctx->pc = 0x17A154u;
    // 0x17a154: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x17A154u;
    SET_GPR_U32(ctx, 31, 0x17A15Cu);
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x17A154u, 0x17A15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A15Cu;
label_17a15c:
    // 0x17a15c: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x17a15cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    ctx->pc = 0x17a160u;
}
