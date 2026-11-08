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

// Function: entry_001ad418
// Address: 0x1ad418 - 0x1ad4c8
void entry_001ad418_0x1ad418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad418_0x1ad418");
#endif

    switch (ctx->pc) {
        case 0x1ad448u: goto label_1ad448;
        case 0x1ad464u: goto label_1ad464;
        case 0x1ad47cu: goto label_1ad47c;
        case 0x1ad488u: goto label_1ad488;
        case 0x1ad490u: goto label_1ad490;
        case 0x1ad49cu: goto label_1ad49c;
        case 0x1ad4acu: goto label_1ad4ac;
        default: break;
    }

    ctx->pc = 0x1ad418u;

label_1ad418:
    // 0x1ad418: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x1ad418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x1ad41c: 0x34636024  ori         $v1, $v1, 0x6024
    ctx->pc = 0x1ad41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24612);
    // 0x1ad420: 0x34846024  ori         $a0, $a0, 0x6024
    ctx->pc = 0x1ad420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24612);
    // 0x1ad424: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1ad424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1ad428: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x1ad428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1ad42c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ad42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ad430: 0x38900  sll         $s1, $v1, 4
    ctx->pc = 0x1ad430u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ad434: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x1ad434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1ad438: 0x3b18021  addu        $s0, $sp, $s1
    ctx->pc = 0x1ad438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x1ad43c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ad43cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ad440: 0xc06ba48  jal         func_1AE920
    ctx->pc = 0x1AD440u;
    SET_GPR_U32(ctx, 31, 0x1AD448u);
    ctx->pc = 0x1AD444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD440u;
    // 0x1ad444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE920u, 0x1AD440u, 0x1AD448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD448u;
label_1ad448:
    // 0x1ad448: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1ad448u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad44c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ad44cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad450: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1ad450u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad458: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ad458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad45c: 0xc06b8a0  jal         func_1AE280
    ctx->pc = 0x1AD45Cu;
    SET_GPR_U32(ctx, 31, 0x1AD464u);
    ctx->pc = 0x1AD460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD45Cu;
    // 0x1ad460: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE280u, 0x1AD45Cu, 0x1AD464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD464u;
label_1ad464:
    // 0x1ad464: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ad464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ad468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad46c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ad470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad474: 0xc06ba80  jal         func_1AEA00
    ctx->pc = 0x1AD474u;
    SET_GPR_U32(ctx, 31, 0x1AD47Cu);
    ctx->pc = 0x1AD478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD474u;
    // 0x1ad478: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEA00u, 0x1AD474u, 0x1AD47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD47Cu;
label_1ad47c:
    // 0x1ad47c: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x1ad47cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x1ad480: 0xc06ba4c  jal         func_1AE930
    ctx->pc = 0x1AD480u;
    SET_GPR_U32(ctx, 31, 0x1AD488u);
    ctx->pc = 0x1AD484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD480u;
    // 0x1ad484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE930u, 0x1AD480u, 0x1AD488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD488u;
label_1ad488:
    // 0x1ad488: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1AD488u;
    SET_GPR_U32(ctx, 31, 0x1AD490u);
    ctx->pc = 0x1AD48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD488u;
    // 0x1ad48c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1AD488u, 0x1AD490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD490u;
label_1ad490:
    // 0x1ad490: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ad490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad494: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x1AD494u;
    SET_GPR_U32(ctx, 31, 0x1AD49Cu);
    ctx->pc = 0x1AD498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD494u;
    // 0x1ad498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x1AD494u, 0x1AD49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD49Cu;
label_1ad49c:
    // 0x1ad49c: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x1ad49cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1ad4a0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1ad4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4a4: 0xc06b14e  jal         func_1AC538
    ctx->pc = 0x1AD4A4u;
    SET_GPR_U32(ctx, 31, 0x1AD4ACu);
    ctx->pc = 0x1AD4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD4A4u;
    // 0x1ad4a8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC538u, 0x1AD4A4u, 0x1AD4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4ACu;
label_1ad4ac:
    // 0x1ad4ac: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1ad4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1ad4b0: 0x34636020  ori         $v1, $v1, 0x6020
    ctx->pc = 0x1ad4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24608);
    // 0x1ad4b4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1ad4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1ad4b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ad4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ad4bc: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x1ad4bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ad4c0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1AD4C0u;
    {
        const bool branch_taken_0x1ad4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4C0u;
        // 0x1ad4c4: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad4c0) {
            ctx->pc = 0x1AD418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad418;
        }
    }
    ctx->pc = 0x1AD4C8u;
}
