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

// Function: entry_0013a8a0
// Address: 0x13a8a0 - 0x13a8b4
void entry_0013a8a0_0x13a8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a8a0_0x13a8a0");
#endif

    switch (ctx->pc) {
        case 0x13a8b0u: goto label_13a8b0;
        default: break;
    }

    ctx->pc = 0x13a8a0u;

    // 0x13a8a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13a8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a8a4: 0x264500d0  addiu       $a1, $s2, 0xD0
    ctx->pc = 0x13a8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x13a8a8: 0xc0618c2  jal         func_186308
    ctx->pc = 0x13A8A8u;
    SET_GPR_U32(ctx, 31, 0x13A8B0u);
    ctx->pc = 0x13A8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A8A8u;
    // 0x13a8ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13A8A8u, 0x13A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A8B0u;
label_13a8b0:
    // 0x13a8b0: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x13a8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->pc = 0x13a8b4u;
}
