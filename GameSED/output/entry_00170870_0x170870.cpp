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

// Function: entry_00170870
// Address: 0x170870 - 0x1708e8
void entry_00170870_0x170870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170870_0x170870");
#endif

    switch (ctx->pc) {
        case 0x17087cu: goto label_17087c;
        case 0x17088cu: goto label_17088c;
        case 0x170894u: goto label_170894;
        case 0x17089cu: goto label_17089c;
        case 0x1708a4u: goto label_1708a4;
        case 0x1708acu: goto label_1708ac;
        case 0x1708b4u: goto label_1708b4;
        case 0x1708c0u: goto label_1708c0;
        case 0x1708c8u: goto label_1708c8;
        case 0x1708d4u: goto label_1708d4;
        case 0x1708dcu: goto label_1708dc;
        default: break;
    }

    ctx->pc = 0x170870u;

    // 0x170870: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x170870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x170874: 0xc05c330  jal         func_170CC0
    ctx->pc = 0x170874u;
    SET_GPR_U32(ctx, 31, 0x17087Cu);
    ctx->pc = 0x170878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170874u;
    // 0x170878: 0x3c100041  lui         $s0, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170CC0u, 0x170874u, 0x17087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17087Cu;
label_17087c:
    // 0x17087c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x17087cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x170880: 0x248412a8  addiu       $a0, $a0, 0x12A8
    ctx->pc = 0x170880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4776));
    // 0x170884: 0xc05cf54  jal         func_173D50
    ctx->pc = 0x170884u;
    SET_GPR_U32(ctx, 31, 0x17088Cu);
    ctx->pc = 0x170888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170884u;
    // 0x170888: 0x26101368  addiu       $s0, $s0, 0x1368 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x170884u, 0x17088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17088Cu;
label_17088c:
    // 0x17088c: 0xc06bcac  jal         func_1AF2B0
    ctx->pc = 0x17088Cu;
    SET_GPR_U32(ctx, 31, 0x170894u);
    ctx->pc = 0x170890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17088Cu;
    // 0x170890: 0x8f84919c  lw          $a0, -0x6E64($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939036)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF2B0u, 0x17088Cu, 0x170894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170894u;
label_170894:
    // 0x170894: 0xc06bc9c  jal         func_1AF270
    ctx->pc = 0x170894u;
    SET_GPR_U32(ctx, 31, 0x17089Cu);
    ctx->pc = 0x170898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170894u;
    // 0x170898: 0x8f84919c  lw          $a0, -0x6E64($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939036)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF270u, 0x170894u, 0x17089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17089Cu;
label_17089c:
    // 0x17089c: 0xc06bcac  jal         func_1AF2B0
    ctx->pc = 0x17089Cu;
    SET_GPR_U32(ctx, 31, 0x1708A4u);
    ctx->pc = 0x1708A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17089Cu;
    // 0x1708a0: 0x8f849198  lw          $a0, -0x6E68($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939032)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF2B0u, 0x17089Cu, 0x1708A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1708A4u;
label_1708a4:
    // 0x1708a4: 0xc06bc9c  jal         func_1AF270
    ctx->pc = 0x1708A4u;
    SET_GPR_U32(ctx, 31, 0x1708ACu);
    ctx->pc = 0x1708A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1708A4u;
    // 0x1708a8: 0x8f849198  lw          $a0, -0x6E68($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939032)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF270u, 0x1708A4u, 0x1708ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1708ACu;
label_1708ac:
    // 0x1708ac: 0xc06bfd0  jal         func_1AFF40
    ctx->pc = 0x1708ACu;
    SET_GPR_U32(ctx, 31, 0x1708B4u);
    ctx->pc = 0x1708B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1708ACu;
    // 0x1708b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF40u, 0x1708ACu, 0x1708B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1708B4u;
label_1708b4:
    // 0x1708b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1708b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1708b8: 0xc06bc58  jal         func_1AF160
    ctx->pc = 0x1708B8u;
    SET_GPR_U32(ctx, 31, 0x1708C0u);
    ctx->pc = 0x1708BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1708B8u;
    // 0x1708bc: 0x8e0500b0  lw          $a1, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF160u, 0x1708B8u, 0x1708C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1708C0u;
label_1708c0:
    // 0x1708c0: 0xc06bfd0  jal         func_1AFF40
    ctx->pc = 0x1708C0u;
    SET_GPR_U32(ctx, 31, 0x1708C8u);
    ctx->pc = 0x1708C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1708C0u;
    // 0x1708c4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF40u, 0x1708C0u, 0x1708C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1708C8u;
label_1708c8:
    // 0x1708c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1708c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1708cc: 0xc06bc58  jal         func_1AF160
    ctx->pc = 0x1708CCu;
    SET_GPR_U32(ctx, 31, 0x1708D4u);
    ctx->pc = 0x1708D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1708CCu;
    // 0x1708d0: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF160u, 0x1708CCu, 0x1708D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1708D4u;
label_1708d4:
    // 0x1708d4: 0xc05c5ec  jal         func_1717B0
    ctx->pc = 0x1708D4u;
    SET_GPR_U32(ctx, 31, 0x1708DCu);
    ctx->pc = 0x1708D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1708D4u;
    // 0x1708d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717B0u, 0x1708D4u, 0x1708DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1708DCu;
label_1708dc:
    // 0x1708dc: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1708dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1708e0: 0xc05c3b4  jal         func_170ED0
    ctx->pc = 0x1708E0u;
    SET_GPR_U32(ctx, 31, 0x1708E8u);
    ctx->pc = 0x1708E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1708E0u;
    // 0x1708e4: 0x24841308  addiu       $a0, $a0, 0x1308 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170ED0u, 0x1708E0u, 0x1708E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1708E8u;
}
