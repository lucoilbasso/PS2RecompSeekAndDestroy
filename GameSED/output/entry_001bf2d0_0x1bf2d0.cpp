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

// Function: entry_001bf2d0
// Address: 0x1bf2d0 - 0x1bf2e4
void entry_001bf2d0_0x1bf2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf2d0_0x1bf2d0");
#endif

    switch (ctx->pc) {
        case 0x1bf2e0u: goto label_1bf2e0;
        default: break;
    }

    ctx->pc = 0x1bf2d0u;

    // 0x1bf2d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf2d4: 0x24a5b498  addiu       $a1, $a1, -0x4B68
    ctx->pc = 0x1bf2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947992));
    // 0x1bf2d8: 0xc06f892  jal         func_1BE248
    ctx->pc = 0x1BF2D8u;
    SET_GPR_U32(ctx, 31, 0x1BF2E0u);
    ctx->pc = 0x1BF2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF2D8u;
    // 0x1bf2dc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE248u, 0x1BF2D8u, 0x1BF2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF2E0u;
label_1bf2e0:
    // 0x1bf2e0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1bf2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1bf2e4u;
}
