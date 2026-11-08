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

// Function: entry_001c3fa8
// Address: 0x1c3fa8 - 0x1c3fbc
void entry_001c3fa8_0x1c3fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3fa8_0x1c3fa8");
#endif

    switch (ctx->pc) {
        case 0x1c3fb8u: goto label_1c3fb8;
        default: break;
    }

    ctx->pc = 0x1c3fa8u;

    // 0x1c3fa8: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1c3fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1c3fac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c3facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fb0: 0xc070eb6  jal         func_1C3AD8
    ctx->pc = 0x1C3FB0u;
    SET_GPR_U32(ctx, 31, 0x1C3FB8u);
    ctx->pc = 0x1C3FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FB0u;
    // 0x1c3fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AD8u, 0x1C3FB0u, 0x1C3FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FB8u;
label_1c3fb8:
    // 0x1c3fb8: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x1c3fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    ctx->pc = 0x1c3fbcu;
}
