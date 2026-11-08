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

// Function: entry_001015a0
// Address: 0x1015a0 - 0x1015c8
void entry_001015a0_0x1015a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001015a0_0x1015a0");
#endif

    switch (ctx->pc) {
        case 0x1015a8u: goto label_1015a8;
        case 0x1015b8u: goto label_1015b8;
        case 0x1015c0u: goto label_1015c0;
        default: break;
    }

    ctx->pc = 0x1015a0u;

    // 0x1015a0: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x1015A0u;
    SET_GPR_U32(ctx, 31, 0x1015A8u);
    ctx->pc = 0x1015A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015A0u;
    // 0x1015a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x1015A0u, 0x1015A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015A8u;
label_1015a8:
    // 0x1015a8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1015a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1015ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1015acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1015b0: 0xc067392  jal         func_19CE48
    ctx->pc = 0x1015B0u;
    SET_GPR_U32(ctx, 31, 0x1015B8u);
    ctx->pc = 0x1015B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015B0u;
    // 0x1015b4: 0x24a5cf30  addiu       $a1, $a1, -0x30D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x1015B0u, 0x1015B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015B8u;
label_1015b8:
    // 0x1015b8: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x1015B8u;
    SET_GPR_U32(ctx, 31, 0x1015C0u);
    ctx->pc = 0x1015BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015B8u;
    // 0x1015bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x1015B8u, 0x1015C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015C0u;
label_1015c0:
    // 0x1015c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1015c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1015c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1015c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1015c8u;
}
