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

// Function: entry_0010d0b0
// Address: 0x10d0b0 - 0x10d0d0
void entry_0010d0b0_0x10d0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d0b0_0x10d0b0");
#endif

    switch (ctx->pc) {
        case 0x10d0b8u: goto label_10d0b8;
        default: break;
    }

    ctx->pc = 0x10d0b0u;

    // 0x10d0b0: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10D0B0u;
    SET_GPR_U32(ctx, 31, 0x10D0B8u);
    ctx->pc = 0x10D0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0B0u;
    // 0x10d0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10D0B0u, 0x10D0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D0B8u;
label_10d0b8:
    // 0x10d0b8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10d0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10d0bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10d0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d0c0: 0x24a53c70  addiu       $a1, $a1, 0x3C70
    ctx->pc = 0x10d0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15472));
    // 0x10d0c4: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10d0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10d0c8: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10D0C8u;
    SET_GPR_U32(ctx, 31, 0x10D0D0u);
    ctx->pc = 0x10D0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0C8u;
    // 0x10d0cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10D0C8u, 0x10D0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D0D0u;
}
