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

// Function: entry_0013e79c
// Address: 0x13e79c - 0x13e7d4
void entry_0013e79c_0x13e79c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e79c_0x13e79c");
#endif

    switch (ctx->pc) {
        case 0x13e7acu: goto label_13e7ac;
        case 0x13e7b8u: goto label_13e7b8;
        default: break;
    }

    ctx->pc = 0x13e79cu;

    // 0x13e79c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13e7a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13e7a4: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x13E7A4u;
    SET_GPR_U32(ctx, 31, 0x13E7ACu);
    ctx->pc = 0x13E7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E7A4u;
    // 0x13e7a8: 0x24041116  addiu       $a0, $zero, 0x1116 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4374));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x13E7A4u, 0x13E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E7ACu;
label_13e7ac:
    // 0x13e7ac: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x13e7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x13e7b0: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x13E7B0u;
    SET_GPR_U32(ctx, 31, 0x13E7B8u);
    ctx->pc = 0x13E7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E7B0u;
    // 0x13e7b4: 0x34840220  ori         $a0, $a0, 0x220 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)544);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x13E7B0u, 0x13E7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E7B8u;
label_13e7b8:
    // 0x13e7b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13e7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e7bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13e7bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e7c0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x13e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x13e7c4: 0x2442ecf0  addiu       $v0, $v0, -0x1310
    ctx->pc = 0x13e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962416));
    // 0x13e7c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e7cc: 0xc04f9fe  jal         func_13E7F8
    ctx->pc = 0x13E7CCu;
    SET_GPR_U32(ctx, 31, 0x13E7D4u);
    ctx->pc = 0x13E7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E7CCu;
    // 0x13e7d0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E7F8u, 0x13E7CCu, 0x13E7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E7D4u;
}
