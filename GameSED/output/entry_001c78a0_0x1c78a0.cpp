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

// Function: entry_001c78a0
// Address: 0x1c78a0 - 0x1c78c8
void entry_001c78a0_0x1c78a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c78a0_0x1c78a0");
#endif

    switch (ctx->pc) {
        case 0x1c78c0u: goto label_1c78c0;
        default: break;
    }

    ctx->pc = 0x1c78a0u;

    // 0x1c78a0: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x1c78a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1c78a4: 0xfc940000  sd          $s4, 0x0($a0)
    ctx->pc = 0x1c78a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 20));
    // 0x1c78a8: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C78A8u;
    {
        const bool branch_taken_0x1c78a8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c78a8) {
            ctx->pc = 0x1C78C8u;
            return;
        }
    }
    ctx->pc = 0x1C78B0u;
    // 0x1c78b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c78b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c78b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78b8: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C78B8u;
    SET_GPR_U32(ctx, 31, 0x1C78C0u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C78B8u, 0x1C78C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78C0u;
label_1c78c0:
    // 0x1c78c0: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x1c78c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1c78c4: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x1c78c4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1c78c8u;
}
