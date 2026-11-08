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

// Function: entry_001b04a8
// Address: 0x1b04a8 - 0x1b04c0
void entry_001b04a8_0x1b04a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b04a8_0x1b04a8");
#endif

    switch (ctx->pc) {
        case 0x1b04b4u: goto label_1b04b4;
        default: break;
    }

    ctx->pc = 0x1b04a8u;

label_1b04a8:
    // 0x1b04a8: 0x8e247ed0  lw          $a0, 0x7ED0($s1)
    ctx->pc = 0x1b04a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32464)));
    // 0x1b04ac: 0xc06ddf2  jal         func_1B77C8
    ctx->pc = 0x1B04ACu;
    SET_GPR_U32(ctx, 31, 0x1B04B4u);
    ctx->pc = 0x1B77C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B77C8u, 0x1B04ACu, 0x1B04B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04B4u;
label_1b04b4:
    // 0x1b04b4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b04b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b04b8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B04B8u;
    {
        const bool branch_taken_0x1b04b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b04b8) {
            ctx->pc = 0x1B04A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b04a8;
        }
    }
    ctx->pc = 0x1B04C0u;
}
