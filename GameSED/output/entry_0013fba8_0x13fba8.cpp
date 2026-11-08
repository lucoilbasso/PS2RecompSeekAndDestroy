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

// Function: entry_0013fba8
// Address: 0x13fba8 - 0x13fbc4
void entry_0013fba8_0x13fba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fba8_0x13fba8");
#endif

    switch (ctx->pc) {
        case 0x13fbb4u: goto label_13fbb4;
        default: break;
    }

    ctx->pc = 0x13fba8u;

    // 0x13fba8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13fba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fbac: 0xc0618c2  jal         func_186308
    ctx->pc = 0x13FBACu;
    SET_GPR_U32(ctx, 31, 0x13FBB4u);
    ctx->pc = 0x13FBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FBACu;
    // 0x13fbb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13FBACu, 0x13FBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBB4u;
label_13fbb4:
    // 0x13fbb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13fbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fbb8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x13fbb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fbbc: 0xc0618da  jal         func_186368
    ctx->pc = 0x13FBBCu;
    SET_GPR_U32(ctx, 31, 0x13FBC4u);
    ctx->pc = 0x13FBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FBBCu;
    // 0x13fbc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13FBBCu, 0x13FBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBC4u;
}
