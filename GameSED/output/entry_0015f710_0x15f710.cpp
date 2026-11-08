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

// Function: entry_0015f710
// Address: 0x15f710 - 0x15f868
void entry_0015f710_0x15f710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f710_0x15f710");
#endif

    switch (ctx->pc) {
        case 0x15f728u: goto label_15f728;
        case 0x15f730u: goto label_15f730;
        case 0x15f750u: goto label_15f750;
        case 0x15f758u: goto label_15f758;
        case 0x15f784u: goto label_15f784;
        case 0x15f790u: goto label_15f790;
        case 0x15f7acu: goto label_15f7ac;
        default: break;
    }

    ctx->pc = 0x15f710u;

label_15f710:
    // 0x15f710: 0x26a2000c  addiu       $v0, $s5, 0xC
    ctx->pc = 0x15f710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_15f714:
    // 0x15f714: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15f714u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15f718:
    // 0x15f718: 0x579821  addu        $s3, $v0, $s7
    ctx->pc = 0x15f718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_15f71c:
    // 0x15f71c: 0x8c710024  lw          $s1, 0x24($v1)
    ctx->pc = 0x15f71cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15f720:
    // 0x15f720: 0xc06bd28  jal         func_1AF4A0
label_15f724:
    if (ctx->pc == 0x15F724u) {
        ctx->pc = 0x15F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F720u;
        // 0x15f724: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F728u;
        goto label_15f728;
    }
    ctx->pc = 0x15F720u;
    SET_GPR_U32(ctx, 31, 0x15F728u);
    ctx->pc = 0x15F724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F720u;
    // 0x15f724: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15F720u, 0x15F728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F728u;
label_15f728:
    // 0x15f728: 0xc06bd20  jal         func_1AF480
label_15f72c:
    if (ctx->pc == 0x15F72Cu) {
        ctx->pc = 0x15F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F728u;
        // 0x15f72c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F730u;
        goto label_15f730;
    }
    ctx->pc = 0x15F728u;
    SET_GPR_U32(ctx, 31, 0x15F730u);
    ctx->pc = 0x15F72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F728u;
    // 0x15f72c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15F728u, 0x15F730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F730u;
label_15f730:
    // 0x15f730: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15f730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15f734:
    // 0x15f734: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15f734u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15f738:
    // 0x15f738: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f73c:
    // 0x15f73c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f740:
    // 0x15f740: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15f740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15f744:
    // 0x15f744: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15f744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15f748:
    // 0x15f748: 0xc0682b2  jal         func_1A0AC8
label_15f74c:
    if (ctx->pc == 0x15F74Cu) {
        ctx->pc = 0x15F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F748u;
        // 0x15f74c: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F750u;
        goto label_15f750;
    }
    ctx->pc = 0x15F748u;
    SET_GPR_U32(ctx, 31, 0x15F750u);
    ctx->pc = 0x15F74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F748u;
    // 0x15f74c: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15F748u, 0x15F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F750u;
label_15f750:
    // 0x15f750: 0xc0682b6  jal         func_1A0AD8
label_15f754:
    if (ctx->pc == 0x15F754u) {
        ctx->pc = 0x15F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F750u;
        // 0x15f754: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F758u;
        goto label_15f758;
    }
    ctx->pc = 0x15F750u;
    SET_GPR_U32(ctx, 31, 0x15F758u);
    ctx->pc = 0x15F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F750u;
    // 0x15f754: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15F750u, 0x15F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F758u;
label_15f758:
    // 0x15f758: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x15f758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_15f75c:
    // 0x15f75c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15f75cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f760:
    // 0x15f760: 0x246301c0  addiu       $v1, $v1, 0x1C0
    ctx->pc = 0x15f760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
label_15f764:
    // 0x15f764: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x15f764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_15f768:
    // 0x15f768: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15f768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15f76c:
    // 0x15f76c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15f76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f770:
    // 0x15f770: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15f770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f774:
    // 0x15f774: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15f774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f778:
    // 0x15f778: 0x26860008  addiu       $a2, $s4, 0x8
    ctx->pc = 0x15f778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15f77c:
    // 0x15f77c: 0xc062cb0  jal         func_18B2C0
label_15f780:
    if (ctx->pc == 0x15F780u) {
        ctx->pc = 0x15F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F77Cu;
        // 0x15f780: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F784u;
        goto label_15f784;
    }
    ctx->pc = 0x15F77Cu;
    SET_GPR_U32(ctx, 31, 0x15F784u);
    ctx->pc = 0x15F780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F77Cu;
    // 0x15f780: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15F77Cu, 0x15F784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F784u;
label_15f784:
    // 0x15f784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f788:
    // 0x15f788: 0xc06825c  jal         func_1A0970
label_15f78c:
    if (ctx->pc == 0x15F78Cu) {
        ctx->pc = 0x15F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F788u;
        // 0x15f78c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F790u;
        goto label_15f790;
    }
    ctx->pc = 0x15F788u;
    SET_GPR_U32(ctx, 31, 0x15F790u);
    ctx->pc = 0x15F78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F788u;
    // 0x15f78c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15F788u, 0x15F790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F790u;
label_15f790:
    // 0x15f790: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f794:
    // 0x15f794: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15f794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f798:
    // 0x15f798: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15f798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15f79c:
    // 0x15f79c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f79cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f7a0:
    // 0x15f7a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f7a4:
    // 0x15f7a4: 0x60f809  jalr        $v1
label_15f7a8:
    if (ctx->pc == 0x15F7A8u) {
        ctx->pc = 0x15F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7A4u;
        // 0x15f7a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F7ACu;
        goto label_15f7ac;
    }
    ctx->pc = 0x15F7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F7ACu);
        ctx->pc = 0x15F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7A4u;
        // 0x15f7a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F7A4u, 0x15F7ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F7ACu;
label_15f7ac:
    // 0x15f7ac: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15f7acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15f7b0:
    // 0x15f7b0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_15f7b4:
    if (ctx->pc == 0x15F7B4u) {
        ctx->pc = 0x15F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7B0u;
        // 0x15f7b4: 0x26070150  addiu       $a3, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F7B8u;
        goto label_15f7b8;
    }
    ctx->pc = 0x15F7B0u;
    {
        const bool branch_taken_0x15f7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7B0u;
        // 0x15f7b4: 0x26070150  addiu       $a3, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f7b0) {
            ctx->pc = 0x15F868u;
            return;
        }
    }
    ctx->pc = 0x15F7B8u;
label_15f7b8:
    // 0x15f7b8: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15f7b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15f7bc:
    // 0x15f7bc: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15f7bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15f7c0:
    // 0x15f7c0: 0x26080180  addiu       $t0, $s0, 0x180
    ctx->pc = 0x15f7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15f7c4:
    // 0x15f7c4: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15f7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15f7c8:
    // 0x15f7c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15f7cc:
    // 0x15f7cc: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15f7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15f7d0:
    // 0x15f7d0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15f7d4:
    // 0x15f7d4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15f7d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15f7d8:
    // 0x15f7d8: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15f7d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15f7dc:
    // 0x15f7dc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15f7e0:
    // 0x15f7e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f7e4:
    // 0x15f7e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15f7e8:
    // 0x15f7e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15f7e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15f7ec:
    // 0x15f7ec: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15f7f0:
    // 0x15f7f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15f7f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15f7f4:
    // 0x15f7f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15f7f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15f7f8:
    // 0x15f7f8: 0xa4e2000e  sh          $v0, 0xE($a3)
    ctx->pc = 0x15f7f8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 2));
label_15f7fc:
    // 0x15f7fc: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x15f7fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_15f800:
    // 0x15f800: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15f800u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15f804:
    // 0x15f804: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x15f804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
label_15f808:
    // 0x15f808: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15f808u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15f80c:
    // 0x15f80c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15f80cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f810:
    // 0x15f810: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15f810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f814:
    // 0x15f814: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x15f814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f818:
    // 0x15f818: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f81c:
    // 0x15f81c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f81cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f820:
    // 0x15f820: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f820u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f824:
    // 0x15f824: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f824u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f828:
    // 0x15f828: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x15f828u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
label_15f82c:
    // 0x15f82c: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15f82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15f830:
    // 0x15f830: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x15f830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15f834:
    // 0x15f834: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x15f834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15f838:
    // 0x15f838: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15f838u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f83c:
    // 0x15f83c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15f83cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f840:
    // 0x15f840: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x15f840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f844:
    // 0x15f844: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f848:
    // 0x15f848: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f848u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f84c:
    // 0x15f84c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f84cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f850:
    // 0x15f850: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f850u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f854:
    // 0x15f854: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15f854u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15f858:
    // 0x15f858: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f858u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15f85c:
    // 0x15f85c: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x15f85cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_15f860:
    // 0x15f860: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15f860u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15f864:
    // 0x15f864: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f864u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x15f868u;
}
