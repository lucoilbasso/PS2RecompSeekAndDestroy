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

// Function: entry_001ccacc
// Address: 0x1ccacc - 0x1ccad8
void entry_001ccacc_0x1ccacc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccacc_0x1ccacc");
#endif

    ctx->pc = 0x1ccaccu;

label_1ccacc:
    // 0x1ccacc: 0x8c43de0c  lw          $v1, -0x21F4($v0)
    ctx->pc = 0x1ccaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958604)));
label_1ccad0:
    // 0x1ccad0: 0x60f809  jalr        $v1
label_1ccad4:
    if (ctx->pc == 0x1CCAD4u) {
        ctx->pc = 0x1CCAD8u;
        goto label_fallthrough_0x1ccad0;
    }
    ctx->pc = 0x1CCAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CCAD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCAD0u, 0x1CCAD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1ccad0:
    ctx->pc = 0x1CCAD8u;
}
