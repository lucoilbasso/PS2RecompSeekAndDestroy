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

// Function: entry_001bb990
// Address: 0x1bb990 - 0x1bb9ac
void entry_001bb990_0x1bb990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb990_0x1bb990");
#endif

    switch (ctx->pc) {
        case 0x1bb9a8u: goto label_1bb9a8;
        default: break;
    }

    ctx->pc = 0x1bb990u;

    // 0x1bb990: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bb990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bb994: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bb994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bb998: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1bb998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1bb99c: 0x8c64c0a8  lw          $a0, -0x3F58($v1)
    ctx->pc = 0x1bb99cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x24C0A8u));
    // 0x1bb9a0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BB9A0u;
    SET_GPR_U32(ctx, 31, 0x1BB9A8u);
    ctx->pc = 0x1BB9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB9A0u;
    // 0x1bb9a4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BB9A0u, 0x1BB9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB9A8u;
label_1bb9a8:
    // 0x1bb9a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bb9a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bb9acu;
}
