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

// Function: entry_0016ff04
// Address: 0x16ff04 - 0x16ff6c
void entry_0016ff04_0x16ff04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ff04_0x16ff04");
#endif

    switch (ctx->pc) {
        case 0x16ff18u: goto label_16ff18;
        case 0x16ff24u: goto label_16ff24;
        case 0x16ff2cu: goto label_16ff2c;
        case 0x16ff38u: goto label_16ff38;
        case 0x16ff40u: goto label_16ff40;
        case 0x16ff4cu: goto label_16ff4c;
        case 0x16ff58u: goto label_16ff58;
        case 0x16ff60u: goto label_16ff60;
        default: break;
    }

    ctx->pc = 0x16ff04u;

    // 0x16ff04: 0x8e270180  lw          $a3, 0x180($s1)
    ctx->pc = 0x16ff04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x16ff08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x16ff08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16ff0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff10: 0xc05bfe4  jal         func_16FF90
    ctx->pc = 0x16FF10u;
    SET_GPR_U32(ctx, 31, 0x16FF18u);
    ctx->pc = 0x16FF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF10u;
    // 0x16ff14: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FF90u, 0x16FF10u, 0x16FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF18u;
label_16ff18:
    // 0x16ff18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ff18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff1c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x16FF1Cu;
    SET_GPR_U32(ctx, 31, 0x16FF24u);
    ctx->pc = 0x16FF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF1Cu;
    // 0x16ff20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x16FF1Cu, 0x16FF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF24u;
label_16ff24:
    // 0x16ff24: 0xc05d7f8  jal         func_175FE0
    ctx->pc = 0x16FF24u;
    SET_GPR_U32(ctx, 31, 0x16FF2Cu);
    ctx->pc = 0x16FF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF24u;
    // 0x16ff28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175FE0u, 0x16FF24u, 0x16FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF2Cu;
label_16ff2c:
    // 0x16ff2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16ff2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff30: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x16FF30u;
    SET_GPR_U32(ctx, 31, 0x16FF38u);
    ctx->pc = 0x16FF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF30u;
    // 0x16ff34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x16FF30u, 0x16FF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF38u;
label_16ff38:
    // 0x16ff38: 0xc06ab72  jal         func_1AADC8
    ctx->pc = 0x16FF38u;
    SET_GPR_U32(ctx, 31, 0x16FF40u);
    ctx->pc = 0x16FF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF38u;
    // 0x16ff3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x16FF38u, 0x16FF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF40u;
label_16ff40:
    // 0x16ff40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ff40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff44: 0xc05d9ee  jal         func_1767B8
    ctx->pc = 0x16FF44u;
    SET_GPR_U32(ctx, 31, 0x16FF4Cu);
    ctx->pc = 0x16FF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF44u;
    // 0x16ff48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1767B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1767B8u, 0x16FF44u, 0x16FF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF4Cu;
label_16ff4c:
    // 0x16ff4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16ff4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff50: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x16FF50u;
    SET_GPR_U32(ctx, 31, 0x16FF58u);
    ctx->pc = 0x16FF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF50u;
    // 0x16ff54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x16FF50u, 0x16FF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF58u;
label_16ff58:
    // 0x16ff58: 0xc06ab72  jal         func_1AADC8
    ctx->pc = 0x16FF58u;
    SET_GPR_U32(ctx, 31, 0x16FF60u);
    ctx->pc = 0x16FF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF58u;
    // 0x16ff5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x16FF58u, 0x16FF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF60u;
label_16ff60:
    // 0x16ff60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ff60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff64: 0xc05d934  jal         func_1764D0
    ctx->pc = 0x16FF64u;
    SET_GPR_U32(ctx, 31, 0x16FF6Cu);
    ctx->pc = 0x16FF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF64u;
    // 0x16ff68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1764D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1764D0u, 0x16FF64u, 0x16FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF6Cu;
}
