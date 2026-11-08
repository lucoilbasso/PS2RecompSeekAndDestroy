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

// Function: SetupFileData__7WcImage
// Address: 0x17d6d8 - 0x17d798
void SetupFileData__7WcImage_0x17d6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetupFileData__7WcImage_0x17d6d8");
#endif

    switch (ctx->pc) {
        case 0x17d6d8u: goto label_17d6d8;
        case 0x17d6dcu: goto label_17d6dc;
        case 0x17d6e0u: goto label_17d6e0;
        case 0x17d6e4u: goto label_17d6e4;
        case 0x17d6e8u: goto label_17d6e8;
        case 0x17d6ecu: goto label_17d6ec;
        case 0x17d6f0u: goto label_17d6f0;
        case 0x17d6f4u: goto label_17d6f4;
        case 0x17d6f8u: goto label_17d6f8;
        case 0x17d6fcu: goto label_17d6fc;
        case 0x17d700u: goto label_17d700;
        case 0x17d704u: goto label_17d704;
        case 0x17d708u: goto label_17d708;
        case 0x17d70cu: goto label_17d70c;
        case 0x17d710u: goto label_17d710;
        case 0x17d714u: goto label_17d714;
        case 0x17d718u: goto label_17d718;
        case 0x17d71cu: goto label_17d71c;
        case 0x17d720u: goto label_17d720;
        case 0x17d724u: goto label_17d724;
        case 0x17d728u: goto label_17d728;
        case 0x17d72cu: goto label_17d72c;
        case 0x17d730u: goto label_17d730;
        case 0x17d734u: goto label_17d734;
        case 0x17d738u: goto label_17d738;
        case 0x17d73cu: goto label_17d73c;
        case 0x17d740u: goto label_17d740;
        case 0x17d744u: goto label_17d744;
        case 0x17d748u: goto label_17d748;
        case 0x17d74cu: goto label_17d74c;
        case 0x17d750u: goto label_17d750;
        case 0x17d754u: goto label_17d754;
        case 0x17d758u: goto label_17d758;
        case 0x17d75cu: goto label_17d75c;
        case 0x17d760u: goto label_17d760;
        case 0x17d764u: goto label_17d764;
        case 0x17d768u: goto label_17d768;
        case 0x17d76cu: goto label_17d76c;
        case 0x17d770u: goto label_17d770;
        case 0x17d774u: goto label_17d774;
        case 0x17d778u: goto label_17d778;
        case 0x17d77cu: goto label_17d77c;
        case 0x17d780u: goto label_17d780;
        case 0x17d784u: goto label_17d784;
        case 0x17d788u: goto label_17d788;
        case 0x17d78cu: goto label_17d78c;
        case 0x17d790u: goto label_17d790;
        case 0x17d794u: goto label_17d794;
        default: break;
    }

    ctx->pc = 0x17d6d8u;

label_17d6d8:
    // 0x17d6d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17d6dc:
    // 0x17d6dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17d6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17d6e0:
    // 0x17d6e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17d6e4:
    // 0x17d6e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17d6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_17d6e8:
    // 0x17d6e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17d6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17d6ec:
    // 0x17d6ec: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x17d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_17d6f0:
    // 0x17d6f0: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_17d6f4:
    if (ctx->pc == 0x17D6F4u) {
        ctx->pc = 0x17D6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D6F0u;
        // 0x17d6f4: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D6F8u;
        goto label_17d6f8;
    }
    ctx->pc = 0x17D6F0u;
    {
        const bool branch_taken_0x17d6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d6f0) {
            ctx->pc = 0x17D6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D6F0u;
            // 0x17d6f4: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D76Cu;
            goto label_17d76c;
        }
    }
    ctx->pc = 0x17D6F8u;
label_17d6f8:
    // 0x17d6f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17d6fc:
    // 0x17d6fc: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x17d6fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17d700:
    // 0x17d700: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x17d700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_17d704:
    // 0x17d704: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x17d704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_17d708:
    // 0x17d708: 0xc0686ba  jal         func_1A1AE8
label_17d70c:
    if (ctx->pc == 0x17D70Cu) {
        ctx->pc = 0x17D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D708u;
        // 0x17d70c: 0x24847c40  addiu       $a0, $a0, 0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D710u;
        goto label_17d710;
    }
    ctx->pc = 0x17D708u;
    SET_GPR_U32(ctx, 31, 0x17D710u);
    ctx->pc = 0x17D70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D708u;
    // 0x17d70c: 0x24847c40  addiu       $a0, $a0, 0x7C40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1AE8u, 0x17D708u, 0x17D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D710u;
label_17d710:
    // 0x17d710: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17d710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_17d714:
    // 0x17d714: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x17d714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_17d718:
    // 0x17d718: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17d718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17d71c:
    // 0x17d71c: 0x34425041  ori         $v0, $v0, 0x5041
    ctx->pc = 0x17d71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20545);
label_17d720:
    // 0x17d720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17d724:
    // 0x17d724: 0x24a57c60  addiu       $a1, $a1, 0x7C60
    ctx->pc = 0x17d724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31840));
label_17d728:
    // 0x17d728: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_17d72c:
    if (ctx->pc == 0x17D72Cu) {
        ctx->pc = 0x17D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D728u;
        // 0x17d72c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D730u;
        goto label_17d730;
    }
    ctx->pc = 0x17D728u;
    {
        const bool branch_taken_0x17d728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D728u;
        // 0x17d72c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d728) {
            ctx->pc = 0x17D760u;
            goto label_17d760;
        }
    }
    ctx->pc = 0x17D730u;
label_17d730:
    // 0x17d730: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17d730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17d734:
    // 0x17d734: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x17d734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17d738:
    // 0x17d738: 0xc05f58c  jal         func_17D630
label_17d73c:
    if (ctx->pc == 0x17D73Cu) {
        ctx->pc = 0x17D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D738u;
        // 0x17d73c: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D740u;
        goto label_17d740;
    }
    ctx->pc = 0x17D738u;
    SET_GPR_U32(ctx, 31, 0x17D740u);
    ctx->pc = 0x17D73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D738u;
    // 0x17d73c: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x17D738u, 0x17D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D740u;
label_17d740:
    // 0x17d740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17d744:
    // 0x17d744: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17d744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17d748:
    // 0x17d748: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17d748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17d74c:
    // 0x17d74c: 0xc05f5e6  jal         func_17D798
label_17d750:
    if (ctx->pc == 0x17D750u) {
        ctx->pc = 0x17D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D74Cu;
        // 0x17d750: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D754u;
        goto label_17d754;
    }
    ctx->pc = 0x17D74Cu;
    SET_GPR_U32(ctx, 31, 0x17D754u);
    ctx->pc = 0x17D750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D74Cu;
    // 0x17d750: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D798u, 0x17D74Cu, 0x17D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D754u;
label_17d754:
    // 0x17d754: 0x10000005  b           . + 4 + (0x5 << 2)
label_17d758:
    if (ctx->pc == 0x17D758u) {
        ctx->pc = 0x17D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D754u;
        // 0x17d758: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D75Cu;
        goto label_17d75c;
    }
    ctx->pc = 0x17D754u;
    {
        const bool branch_taken_0x17d754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D754u;
        // 0x17d758: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d754) {
            ctx->pc = 0x17D76Cu;
            goto label_17d76c;
        }
    }
    ctx->pc = 0x17D75Cu;
label_17d75c:
    // 0x17d75c: 0x0  nop
    ctx->pc = 0x17d75cu;
    // NOP
label_17d760:
    // 0x17d760: 0xc068186  jal         func_1A0618
label_17d764:
    if (ctx->pc == 0x17D764u) {
        ctx->pc = 0x17D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D760u;
        // 0x17d764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D768u;
        goto label_17d768;
    }
    ctx->pc = 0x17D760u;
    SET_GPR_U32(ctx, 31, 0x17D768u);
    ctx->pc = 0x17D764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D760u;
    // 0x17d764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17D760u, 0x17D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D768u;
label_17d768:
    // 0x17d768: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x17d768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_17d76c:
    // 0x17d76c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_17d770:
    if (ctx->pc == 0x17D770u) {
        ctx->pc = 0x17D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D76Cu;
        // 0x17d770: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D774u;
        goto label_17d774;
    }
    ctx->pc = 0x17D76Cu;
    {
        const bool branch_taken_0x17d76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d76c) {
            ctx->pc = 0x17D770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D76Cu;
            // 0x17d770: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D788u;
            goto label_17d788;
        }
    }
    ctx->pc = 0x17D774u;
label_17d774:
    // 0x17d774: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x17d774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_17d778:
    // 0x17d778: 0x40f809  jalr        $v0
label_17d77c:
    if (ctx->pc == 0x17D77Cu) {
        ctx->pc = 0x17D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D778u;
        // 0x17d77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D780u;
        goto label_17d780;
    }
    ctx->pc = 0x17D778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17D780u);
        ctx->pc = 0x17D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D778u;
        // 0x17d77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D778u, 0x17D780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17D780u;
label_17d780:
    // 0x17d780: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x17d780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_17d784:
    // 0x17d784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d788:
    // 0x17d788: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17d788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17d78c:
    // 0x17d78c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17d78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17d790:
    // 0x17d790: 0x3e00008  jr          $ra
label_17d794:
    if (ctx->pc == 0x17D794u) {
        ctx->pc = 0x17D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D790u;
        // 0x17d794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D798u;
        goto label_fallthrough_0x17d790;
    }
    ctx->pc = 0x17D790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D790u;
        // 0x17d794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17d790:
    ctx->pc = 0x17D798u;
}
