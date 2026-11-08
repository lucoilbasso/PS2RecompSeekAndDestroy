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

// Function: entry_00144a10
// Address: 0x144a10 - 0x144a34
void entry_00144a10_0x144a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144a10_0x144a10");
#endif

    switch (ctx->pc) {
        case 0x144a18u: goto label_144a18;
        case 0x144a28u: goto label_144a28;
        case 0x144a30u: goto label_144a30;
        default: break;
    }

    ctx->pc = 0x144a10u;

    // 0x144a10: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x144A10u;
    SET_GPR_U32(ctx, 31, 0x144A18u);
    ctx->pc = 0x144A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A10u;
    // 0x144a14: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x144A10u, 0x144A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A18u;
label_144a18:
    // 0x144a18: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x144a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x144a1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x144a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a20: 0xc067392  jal         func_19CE48
    ctx->pc = 0x144A20u;
    SET_GPR_U32(ctx, 31, 0x144A28u);
    ctx->pc = 0x144A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A20u;
    // 0x144a24: 0x24a5d2d8  addiu       $a1, $a1, -0x2D28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x144A20u, 0x144A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A28u;
label_144a28:
    // 0x144a28: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x144A28u;
    SET_GPR_U32(ctx, 31, 0x144A30u);
    ctx->pc = 0x144A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A28u;
    // 0x144a2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x144A28u, 0x144A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A30u;
label_144a30:
    // 0x144a30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144a30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144a34u;
}
