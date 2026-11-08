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

// Function: entry_001cca74
// Address: 0x1cca74 - 0x1cca7c
void entry_001cca74_0x1cca74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cca74_0x1cca74");
#endif

    ctx->pc = 0x1cca74u;

label_1cca74:
    // 0x1cca74: 0x8c43de10  lw          $v1, -0x21F0($v0)
    ctx->pc = 0x1cca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958608)));
label_1cca78:
    // 0x1cca78: 0x60f809  jalr        $v1
    ctx->pc = 0x1CCA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CCA80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCA78u, 0x1CCA80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCA80u;
}
