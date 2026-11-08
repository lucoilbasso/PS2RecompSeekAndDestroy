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

// Function: entry_001ba7b8
// Address: 0x1ba7b8 - 0x1ba7d0
void entry_001ba7b8_0x1ba7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba7b8_0x1ba7b8");
#endif

    switch (ctx->pc) {
        case 0x1ba7ccu: goto label_1ba7cc;
        default: break;
    }

    ctx->pc = 0x1ba7b8u;

    // 0x1ba7b8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1ba7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1ba7bc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1ba7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1ba7c0: 0x8c64c0a8  lw          $a0, -0x3F58($v1)
    ctx->pc = 0x1ba7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951080)));
    // 0x1ba7c4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BA7C4u;
    SET_GPR_U32(ctx, 31, 0x1BA7CCu);
    ctx->pc = 0x1BA7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA7C4u;
    // 0x1ba7c8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BA7C4u, 0x1BA7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA7CCu;
label_1ba7cc:
    // 0x1ba7cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ba7ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ba7d0u;
}
