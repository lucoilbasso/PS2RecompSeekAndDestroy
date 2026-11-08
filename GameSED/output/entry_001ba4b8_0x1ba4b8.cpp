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

// Function: entry_001ba4b8
// Address: 0x1ba4b8 - 0x1ba4cc
void entry_001ba4b8_0x1ba4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba4b8_0x1ba4b8");
#endif

    switch (ctx->pc) {
        case 0x1ba4c4u: goto label_1ba4c4;
        default: break;
    }

    ctx->pc = 0x1ba4b8u;

    // 0x1ba4b8: 0x8ec4c0a8  lw          $a0, -0x3F58($s6)
    ctx->pc = 0x1ba4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951080)));
    // 0x1ba4bc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BA4BCu;
    SET_GPR_U32(ctx, 31, 0x1BA4C4u);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BA4BCu, 0x1BA4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA4C4u;
label_1ba4c4:
    // 0x1ba4c4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1BA4C4u;
    {
        const bool branch_taken_0x1ba4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4C4u;
        // 0x1ba4c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4c4) {
            ctx->pc = 0x1BA584u;
            return;
        }
    }
    ctx->pc = 0x1BA4CCu;
}
