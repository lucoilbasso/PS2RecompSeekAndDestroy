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

// Function: entry_001a60f8
// Address: 0x1a60f8 - 0x1a6104
void entry_001a60f8_0x1a60f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a60f8_0x1a60f8");
#endif

    switch (ctx->pc) {
        case 0x1a6100u: goto label_1a6100;
        default: break;
    }

    ctx->pc = 0x1a60f8u;

    // 0x1a60f8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A60F8u;
    SET_GPR_U32(ctx, 31, 0x1A6100u);
    ctx->pc = 0x1A60FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A60F8u;
    // 0x1a60fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A60F8u, 0x1A6100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6100u;
label_1a6100:
    // 0x1a6100: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a6104u;
}
