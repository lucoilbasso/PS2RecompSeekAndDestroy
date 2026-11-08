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

// Function: entry_001c6c98
// Address: 0x1c6c98 - 0x1c6ca8
void entry_001c6c98_0x1c6c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6c98_0x1c6c98");
#endif

    switch (ctx->pc) {
        case 0x1c6ca0u: goto label_1c6ca0;
        default: break;
    }

    ctx->pc = 0x1c6c98u;

    // 0x1c6c98: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6C98u;
    SET_GPR_U32(ctx, 31, 0x1C6CA0u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6C98u, 0x1C6CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6CA0u;
label_1c6ca0:
    // 0x1c6ca0: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x1c6ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x1c6ca4: 0x161023  negu        $v0, $s6
    ctx->pc = 0x1c6ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
    ctx->pc = 0x1c6ca8u;
}
