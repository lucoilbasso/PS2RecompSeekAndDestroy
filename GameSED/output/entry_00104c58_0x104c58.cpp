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

// Function: entry_00104c58
// Address: 0x104c58 - 0x104ca4
void entry_00104c58_0x104c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104c58_0x104c58");
#endif

    switch (ctx->pc) {
        case 0x104c60u: goto label_104c60;
        case 0x104c6cu: goto label_104c6c;
        case 0x104ca0u: goto label_104ca0;
        default: break;
    }

    ctx->pc = 0x104c58u;

    // 0x104c58: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x104C58u;
    SET_GPR_U32(ctx, 31, 0x104C60u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x104C58u, 0x104C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C60u;
label_104c60:
    // 0x104c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c64: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x104C64u;
    SET_GPR_U32(ctx, 31, 0x104C6Cu);
    ctx->pc = 0x104C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C64u;
    // 0x104c68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x104C64u, 0x104C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C6Cu;
label_104c6c:
    // 0x104c6c: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x104c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x104c70: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x104c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c74: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x104c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x104c78: 0x2421ef80  addiu       $at, $at, -0x1080
    ctx->pc = 0x104c78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294963072));
    // 0x104c7c: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x104c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x104c80: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x104c80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x104c84: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x104c84u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x104c88: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x104c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x104c8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x104c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c90: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x104c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x104c94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104c98: 0xc06a19a  jal         func_1A8668
    ctx->pc = 0x104C98u;
    SET_GPR_U32(ctx, 31, 0x104CA0u);
    ctx->pc = 0x104C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C98u;
    // 0x104c9c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8668u, 0x104C98u, 0x104CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104CA0u;
label_104ca0:
    // 0x104ca0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x104ca0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x104ca4u;
}
