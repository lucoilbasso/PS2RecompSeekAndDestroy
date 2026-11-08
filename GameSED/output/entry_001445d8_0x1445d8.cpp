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

// Function: entry_001445d8
// Address: 0x1445d8 - 0x1445fc
void entry_001445d8_0x1445d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001445d8_0x1445d8");
#endif

    switch (ctx->pc) {
        case 0x1445e0u: goto label_1445e0;
        case 0x1445f0u: goto label_1445f0;
        case 0x1445f8u: goto label_1445f8;
        default: break;
    }

    ctx->pc = 0x1445d8u;

    // 0x1445d8: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x1445D8u;
    SET_GPR_U32(ctx, 31, 0x1445E0u);
    ctx->pc = 0x1445DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445D8u;
    // 0x1445dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x1445D8u, 0x1445E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445E0u;
label_1445e0:
    // 0x1445e0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1445e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1445e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1445e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1445e8: 0xc067392  jal         func_19CE48
    ctx->pc = 0x1445E8u;
    SET_GPR_U32(ctx, 31, 0x1445F0u);
    ctx->pc = 0x1445ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445E8u;
    // 0x1445ec: 0x24a5d2c8  addiu       $a1, $a1, -0x2D38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x1445E8u, 0x1445F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445F0u;
label_1445f0:
    // 0x1445f0: 0xc060a02  jal         func_182808
    ctx->pc = 0x1445F0u;
    SET_GPR_U32(ctx, 31, 0x1445F8u);
    ctx->pc = 0x1445F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445F0u;
    // 0x1445f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182808u, 0x1445F0u, 0x1445F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445F8u;
label_1445f8:
    // 0x1445f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1445f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1445fcu;
}
