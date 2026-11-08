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

// Function: entry_0015d6d8
// Address: 0x15d6d8 - 0x15d890
void entry_0015d6d8_0x15d6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d6d8_0x15d6d8");
#endif

    switch (ctx->pc) {
        case 0x15d70cu: goto label_15d70c;
        case 0x15d73cu: goto label_15d73c;
        case 0x15d750u: goto label_15d750;
        case 0x15d758u: goto label_15d758;
        case 0x15d778u: goto label_15d778;
        case 0x15d780u: goto label_15d780;
        case 0x15d7acu: goto label_15d7ac;
        case 0x15d7b8u: goto label_15d7b8;
        case 0x15d7d4u: goto label_15d7d4;
        default: break;
    }

    ctx->pc = 0x15d6d8u;

label_15d6d8:
    // 0x15d6d8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15d6d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d6dc:
    // 0x15d6dc: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15d6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15d6e0:
    // 0x15d6e0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15d6e4:
    // 0x15d6e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d6e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d6e8:
    // 0x15d6e8: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x15d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15d6ec:
    // 0x15d6ec: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x15d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_15d6f0:
    // 0x15d6f0: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15d6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15d6f4:
    // 0x15d6f4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15d6f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15d6f8:
    // 0x15d6f8: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x15d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
label_15d6fc:
    // 0x15d6fc: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x15d6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
label_15d700:
    // 0x15d700: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15d700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15d704:
    // 0x15d704: 0x40f809  jalr        $v0
label_15d708:
    if (ctx->pc == 0x15D708u) {
        ctx->pc = 0x15D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D704u;
        // 0x15d708: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D70Cu;
        goto label_15d70c;
    }
    ctx->pc = 0x15D704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D70Cu);
        ctx->pc = 0x15D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D704u;
        // 0x15d708: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D704u, 0x15D70Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D70Cu;
label_15d70c:
    // 0x15d70c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15d710:
    // 0x15d710: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15d710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15d714:
    // 0x15d714: 0x2402fef8  addiu       $v0, $zero, -0x108
    ctx->pc = 0x15d714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967032));
label_15d718:
    // 0x15d718: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x15d718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15d71c:
    // 0x15d71c: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15d71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15d720:
    // 0x15d720: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15d720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15d724:
    // 0x15d724: 0x3c63021  addu        $a2, $fp, $a2
    ctx->pc = 0x15d724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
label_15d728:
    // 0x15d728: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x15d728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15d72c:
    // 0x15d72c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x15d72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15d730:
    // 0x15d730: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x15d730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_15d734:
    // 0x15d734: 0xe0f809  jalr        $a3
label_15d738:
    if (ctx->pc == 0x15D738u) {
        ctx->pc = 0x15D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D734u;
        // 0x15d738: 0x26d400c8  addiu       $s4, $s6, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D73Cu;
        goto label_15d73c;
    }
    ctx->pc = 0x15D734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x15D73Cu);
        ctx->pc = 0x15D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D734u;
        // 0x15d738: 0x26d400c8  addiu       $s4, $s6, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D734u, 0x15D73Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D73Cu;
label_15d73c:
    // 0x15d73c: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x15d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_15d740:
    // 0x15d740: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15d740u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15d744:
    // 0x15d744: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x15d744u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_15d748:
    // 0x15d748: 0xc06bd28  jal         func_1AF4A0
label_15d74c:
    if (ctx->pc == 0x15D74Cu) {
        ctx->pc = 0x15D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D748u;
        // 0x15d74c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D750u;
        goto label_15d750;
    }
    ctx->pc = 0x15D748u;
    SET_GPR_U32(ctx, 31, 0x15D750u);
    ctx->pc = 0x15D74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D748u;
    // 0x15d74c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15D748u, 0x15D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D750u;
label_15d750:
    // 0x15d750: 0xc06bd20  jal         func_1AF480
label_15d754:
    if (ctx->pc == 0x15D754u) {
        ctx->pc = 0x15D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D750u;
        // 0x15d754: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D758u;
        goto label_15d758;
    }
    ctx->pc = 0x15D750u;
    SET_GPR_U32(ctx, 31, 0x15D758u);
    ctx->pc = 0x15D754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D750u;
    // 0x15d754: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15D750u, 0x15D758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D758u;
label_15d758:
    // 0x15d758: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15d758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15d75c:
    // 0x15d75c: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15d75cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15d760:
    // 0x15d760: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15d760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15d764:
    // 0x15d764: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15d764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15d768:
    // 0x15d768: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15d768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15d76c:
    // 0x15d76c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15d76cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15d770:
    // 0x15d770: 0xc0682b2  jal         func_1A0AC8
label_15d774:
    if (ctx->pc == 0x15D774u) {
        ctx->pc = 0x15D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D770u;
        // 0x15d774: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D778u;
        goto label_15d778;
    }
    ctx->pc = 0x15D770u;
    SET_GPR_U32(ctx, 31, 0x15D778u);
    ctx->pc = 0x15D774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D770u;
    // 0x15d774: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15D770u, 0x15D778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D778u;
label_15d778:
    // 0x15d778: 0xc0682b6  jal         func_1A0AD8
label_15d77c:
    if (ctx->pc == 0x15D77Cu) {
        ctx->pc = 0x15D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D778u;
        // 0x15d77c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D780u;
        goto label_15d780;
    }
    ctx->pc = 0x15D778u;
    SET_GPR_U32(ctx, 31, 0x15D780u);
    ctx->pc = 0x15D77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D778u;
    // 0x15d77c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15D778u, 0x15D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D780u;
label_15d780:
    // 0x15d780: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x15d780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_15d784:
    // 0x15d784: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15d784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15d788:
    // 0x15d788: 0x246301c0  addiu       $v1, $v1, 0x1C0
    ctx->pc = 0x15d788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
label_15d78c:
    // 0x15d78c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x15d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_15d790:
    // 0x15d790: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15d790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15d794:
    // 0x15d794: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d798:
    // 0x15d798: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15d798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d79c:
    // 0x15d79c: 0x26c600d0  addiu       $a2, $s6, 0xD0
    ctx->pc = 0x15d79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 208));
label_15d7a0:
    // 0x15d7a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15d7a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d7a4:
    // 0x15d7a4: 0xc062cb0  jal         func_18B2C0
label_15d7a8:
    if (ctx->pc == 0x15D7A8u) {
        ctx->pc = 0x15D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7A4u;
        // 0x15d7a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7ACu;
        goto label_15d7ac;
    }
    ctx->pc = 0x15D7A4u;
    SET_GPR_U32(ctx, 31, 0x15D7ACu);
    ctx->pc = 0x15D7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D7A4u;
    // 0x15d7a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15D7A4u, 0x15D7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D7ACu;
label_15d7ac:
    // 0x15d7ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d7b0:
    // 0x15d7b0: 0xc06825c  jal         func_1A0970
label_15d7b4:
    if (ctx->pc == 0x15D7B4u) {
        ctx->pc = 0x15D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7B0u;
        // 0x15d7b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7B8u;
        goto label_15d7b8;
    }
    ctx->pc = 0x15D7B0u;
    SET_GPR_U32(ctx, 31, 0x15D7B8u);
    ctx->pc = 0x15D7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D7B0u;
    // 0x15d7b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15D7B0u, 0x15D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D7B8u;
label_15d7b8:
    // 0x15d7b8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15d7bc:
    // 0x15d7bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d7c0:
    // 0x15d7c0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15d7c4:
    // 0x15d7c4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d7c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d7c8:
    // 0x15d7c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d7cc:
    // 0x15d7cc: 0x60f809  jalr        $v1
label_15d7d0:
    if (ctx->pc == 0x15D7D0u) {
        ctx->pc = 0x15D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7CCu;
        // 0x15d7d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7D4u;
        goto label_15d7d4;
    }
    ctx->pc = 0x15D7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D7D4u);
        ctx->pc = 0x15D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7CCu;
        // 0x15d7d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D7CCu, 0x15D7D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D7D4u;
label_15d7d4:
    // 0x15d7d4: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15d7d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15d7d8:
    // 0x15d7d8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_15d7dc:
    if (ctx->pc == 0x15D7DCu) {
        ctx->pc = 0x15D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7D8u;
        // 0x15d7dc: 0x26070150  addiu       $a3, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7E0u;
        goto label_15d7e0;
    }
    ctx->pc = 0x15D7D8u;
    {
        const bool branch_taken_0x15d7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7D8u;
        // 0x15d7dc: 0x26070150  addiu       $a3, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7d8) {
            ctx->pc = 0x15D890u;
            return;
        }
    }
    ctx->pc = 0x15D7E0u;
label_15d7e0:
    // 0x15d7e0: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15d7e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15d7e4:
    // 0x15d7e4: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15d7e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15d7e8:
    // 0x15d7e8: 0x26080180  addiu       $t0, $s0, 0x180
    ctx->pc = 0x15d7e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15d7ec:
    // 0x15d7ec: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15d7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15d7f0:
    // 0x15d7f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15d7f4:
    // 0x15d7f4: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15d7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15d7f8:
    // 0x15d7f8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15d7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15d7fc:
    // 0x15d7fc: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15d7fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15d800:
    // 0x15d800: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15d800u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15d804:
    // 0x15d804: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15d808:
    // 0x15d808: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x15d808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15d80c:
    // 0x15d80c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15d810:
    // 0x15d810: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15d810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15d814:
    // 0x15d814: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15d814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15d818:
    // 0x15d818: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15d818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15d81c:
    // 0x15d81c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15d81cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15d820:
    // 0x15d820: 0xa4e4000e  sh          $a0, 0xE($a3)
    ctx->pc = 0x15d820u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 4));
label_15d824:
    // 0x15d824: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x15d824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
label_15d828:
    // 0x15d828: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15d828u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15d82c:
    // 0x15d82c: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x15d82cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_15d830:
    // 0x15d830: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15d830u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15d834:
    // 0x15d834: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15d834u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15d838:
    // 0x15d838: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15d838u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15d83c:
    // 0x15d83c: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x15d83cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15d840:
    // 0x15d840: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15d840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15d844:
    // 0x15d844: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15d844u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15d848:
    // 0x15d848: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15d848u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15d84c:
    // 0x15d84c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15d84cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15d850:
    // 0x15d850: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x15d850u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
label_15d854:
    // 0x15d854: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15d854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15d858:
    // 0x15d858: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x15d858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15d85c:
    // 0x15d85c: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x15d85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15d860:
    // 0x15d860: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15d860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15d864:
    // 0x15d864: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15d864u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15d868:
    // 0x15d868: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x15d868u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15d86c:
    // 0x15d86c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15d86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15d870:
    // 0x15d870: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15d870u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15d874:
    // 0x15d874: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15d874u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15d878:
    // 0x15d878: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15d878u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15d87c:
    // 0x15d87c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15d87cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15d880:
    // 0x15d880: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15d880u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15d884:
    // 0x15d884: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x15d884u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_15d888:
    // 0x15d888: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15d888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15d88c:
    // 0x15d88c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15d88cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x15d890u;
}
