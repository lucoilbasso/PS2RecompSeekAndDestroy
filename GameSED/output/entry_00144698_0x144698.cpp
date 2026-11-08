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

// Function: entry_00144698
// Address: 0x144698 - 0x1446bc
void entry_00144698_0x144698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144698_0x144698");
#endif

    switch (ctx->pc) {
        case 0x1446a0u: goto label_1446a0;
        case 0x1446b0u: goto label_1446b0;
        case 0x1446b8u: goto label_1446b8;
        default: break;
    }

    ctx->pc = 0x144698u;

    // 0x144698: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x144698u;
    SET_GPR_U32(ctx, 31, 0x1446A0u);
    ctx->pc = 0x14469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144698u;
    // 0x14469c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x144698u, 0x1446A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1446A0u;
label_1446a0:
    // 0x1446a0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1446a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1446a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1446a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1446a8: 0xc067392  jal         func_19CE48
    ctx->pc = 0x1446A8u;
    SET_GPR_U32(ctx, 31, 0x1446B0u);
    ctx->pc = 0x1446ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1446A8u;
    // 0x1446ac: 0x24a5d2c8  addiu       $a1, $a1, -0x2D38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x1446A8u, 0x1446B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1446B0u;
label_1446b0:
    // 0x1446b0: 0xc060a02  jal         func_182808
    ctx->pc = 0x1446B0u;
    SET_GPR_U32(ctx, 31, 0x1446B8u);
    ctx->pc = 0x1446B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1446B0u;
    // 0x1446b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182808u, 0x1446B0u, 0x1446B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1446B8u;
label_1446b8:
    // 0x1446b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1446b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1446bcu;
}
