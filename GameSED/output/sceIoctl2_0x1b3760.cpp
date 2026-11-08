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

// Function: sceIoctl2
// Address: 0x1b3760 - 0x1b393c
void sceIoctl2_0x1b3760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceIoctl2_0x1b3760");
#endif

    switch (ctx->pc) {
        case 0x1b37a8u: goto label_1b37a8;
        case 0x1b37b4u: goto label_1b37b4;
        case 0x1b37ccu: goto label_1b37cc;
        case 0x1b37e8u: goto label_1b37e8;
        case 0x1b3808u: goto label_1b3808;
        case 0x1b382cu: goto label_1b382c;
        case 0x1b3858u: goto label_1b3858;
        case 0x1b3884u: goto label_1b3884;
        case 0x1b38b8u: goto label_1b38b8;
        case 0x1b38c8u: goto label_1b38c8;
        case 0x1b38d0u: goto label_1b38d0;
        case 0x1b38e4u: goto label_1b38e4;
        case 0x1b38f4u: goto label_1b38f4;
        case 0x1b3904u: goto label_1b3904;
        case 0x1b390cu: goto label_1b390c;
        default: break;
    }

    ctx->pc = 0x1b3760u;

    // 0x1b3760: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1b3760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1b3764: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1b3764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1b3768: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1b3768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1b376c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1b376cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3770: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1b3770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1b3774: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b3774u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3778: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1b3778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1b377c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1b377cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3780: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1b3780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1b3784: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1b3784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3788: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1b3788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1b378c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b378cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3790: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1b3790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1b3794: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1b3794u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1b3798: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1b3798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1b379c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1b379cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1b37a0: 0xc06c81a  jal         func_1B2068
    ctx->pc = 0x1B37A0u;
    SET_GPR_U32(ctx, 31, 0x1B37A8u);
    ctx->pc = 0x1B37A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B37A0u;
    // 0x1b37a4: 0x26d19a80  addiu       $s1, $s6, -0x6580 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2068u, 0x1B37A0u, 0x1B37A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37A8u;
label_1b37a8:
    // 0x1b37a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b37a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b37ac: 0xc06c92c  jal         func_1B24B0
    ctx->pc = 0x1B37ACu;
    SET_GPR_U32(ctx, 31, 0x1B37B4u);
    ctx->pc = 0x1B37B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B37ACu;
    // 0x1b37b0: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24B0u, 0x1B37ACu, 0x1B37B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37B4u;
label_1b37b4:
    // 0x1b37b4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b37b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b37b8: 0x8c43aa04  lw          $v1, -0x55FC($v0)
    ctx->pc = 0x1b37b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24AA04u));
    // 0x1b37bc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B37BCu;
    {
        const bool branch_taken_0x1b37bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b37bc) {
            ctx->pc = 0x1B37CCu;
            goto label_1b37cc;
        }
    }
    ctx->pc = 0x1B37C4u;
    // 0x1b37c4: 0xc06c96e  jal         func_1B25B8
    ctx->pc = 0x1B37C4u;
    SET_GPR_U32(ctx, 31, 0x1B37CCu);
    ctx->pc = 0x1B25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B25B8u, 0x1B37C4u, 0x1B37CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37CCu;
label_1b37cc:
    // 0x1b37cc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B37CCu;
    {
        const bool branch_taken_0x1b37cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b37cc) {
            ctx->pc = 0x1B37E0u;
            goto label_1b37e0;
        }
    }
    ctx->pc = 0x1B37D4u;
    // 0x1b37d4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b37d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B37D8u;
    {
        const bool branch_taken_0x1b37d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B37DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37D8u;
        // 0x1b37dc: 0x2e620401  sltiu       $v0, $s3, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b37d8) {
            ctx->pc = 0x1B37F0u;
            goto label_1b37f0;
        }
    }
    ctx->pc = 0x1B37E0u;
label_1b37e0:
    // 0x1b37e0: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B37E0u;
    SET_GPR_U32(ctx, 31, 0x1B37E8u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B37E0u, 0x1B37E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37E8u;
label_1b37e8:
    // 0x1b37e8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1B37E8u;
    {
        const bool branch_taken_0x1b37e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B37ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37E8u;
        // 0x1b37ec: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b37e8) {
            ctx->pc = 0x1B3910u;
            goto label_1b3910;
        }
    }
    ctx->pc = 0x1B37F0u;
label_1b37f0:
    // 0x1b37f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B37F0u;
    {
        const bool branch_taken_0x1b37f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37F0u;
        // 0x1b37f4: 0x2e820401  sltiu       $v0, $s4, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b37f0) {
            ctx->pc = 0x1B3800u;
            goto label_1b3800;
        }
    }
    ctx->pc = 0x1B37F8u;
    // 0x1b37f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B37F8u;
    {
        const bool branch_taken_0x1b37f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b37f8) {
            ctx->pc = 0x1B3810u;
            goto label_1b3810;
        }
    }
    ctx->pc = 0x1B3800u;
label_1b3800:
    // 0x1b3800: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B3800u;
    SET_GPR_U32(ctx, 31, 0x1B3808u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B3800u, 0x1B3808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3808u;
label_1b3808:
    // 0x1b3808: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1B3808u;
    {
        const bool branch_taken_0x1b3808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3808u;
        // 0x1b380c: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3808) {
            ctx->pc = 0x1B3910u;
            goto label_1b3910;
        }
    }
    ctx->pc = 0x1B3810u;
label_1b3810:
    // 0x1b3810: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3810u;
    {
        const bool branch_taken_0x1b3810 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3810u;
        // 0x1b3814: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3810) {
            ctx->pc = 0x1B3820u;
            goto label_1b3820;
        }
    }
    ctx->pc = 0x1B3818u;
    // 0x1b3818: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3818u;
    {
        const bool branch_taken_0x1b3818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3818u;
        // 0x1b381c: 0xae20041c  sw          $zero, 0x41C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3818) {
            ctx->pc = 0x1B382Cu;
            goto label_1b382c;
        }
    }
    ctx->pc = 0x1B3820u;
label_1b3820:
    // 0x1b3820: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1b3820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1b3824: 0xc074009  jal         func_1D0024
    ctx->pc = 0x1B3824u;
    SET_GPR_U32(ctx, 31, 0x1B382Cu);
    ctx->pc = 0x1B3828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3824u;
    // 0x1b3828: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x1B3824u, 0x1B382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B382Cu;
label_1b382c:
    // 0x1b382c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b382cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b3830: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3834: 0xae350010  sw          $s5, 0x10($s1)
    ctx->pc = 0x1b3834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
    // 0x1b3838: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b3838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b383c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1b383cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1b3840: 0x26d09a80  addiu       $s0, $s6, -0x6580
    ctx->pc = 0x1b3840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941312));
    // 0x1b3844: 0xae33041c  sw          $s3, 0x41C($s1)
    ctx->pc = 0x1b3844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 19));
    // 0x1b3848: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1b3848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1b384c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b384cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b3850: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B3850u;
    SET_GPR_U32(ctx, 31, 0x1B3858u);
    ctx->pc = 0x1B3854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3850u;
    // 0x1b3854: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B3850u, 0x1B3858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3858u;
label_1b3858:
    // 0x1b3858: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b3858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b385c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b385cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3860: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1b3860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3864: 0xae340418  sw          $s4, 0x418($s1)
    ctx->pc = 0x1b3864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1048), GPR_U32(ctx, 20));
    // 0x1b3868: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1b3868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1b386c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b386cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3870: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1b3870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1b3874: 0x24050420  addiu       $a1, $zero, 0x420
    ctx->pc = 0x1b3874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x1b3878: 0xae370414  sw          $s7, 0x414($s1)
    ctx->pc = 0x1b3878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 23));
    // 0x1b387c: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B387Cu;
    SET_GPR_U32(ctx, 31, 0x1B3884u);
    ctx->pc = 0x1B3880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B387Cu;
    // 0x1b3880: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B387Cu, 0x1B3884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3884u;
label_1b3884:
    // 0x1b3884: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b3884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b3888: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b3888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b388c: 0x2451a6c0  addiu       $s1, $v0, -0x5940
    ctx->pc = 0x1b388cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944448));
    // 0x1b3890: 0x2484b180  addiu       $a0, $a0, -0x4E80
    ctx->pc = 0x1b3890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947200));
    // 0x1b3894: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b3894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3898: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b3898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b389c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1b389cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1b38a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b38a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b38a4: 0x24080420  addiu       $t0, $zero, 0x420
    ctx->pc = 0x1b38a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x1b38a8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b38a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b38ac: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b38acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b38b0: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B38B0u;
    SET_GPR_U32(ctx, 31, 0x1B38B8u);
    ctx->pc = 0x1B38B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B38B0u;
    // 0x1b38b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B38B0u, 0x1B38B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B38B8u;
label_1b38b8:
    // 0x1b38b8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B38B8u;
    {
        const bool branch_taken_0x1b38b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B38BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B38B8u;
        // 0x1b38bc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b38b8) {
            ctx->pc = 0x1B38D8u;
            goto label_1b38d8;
        }
    }
    ctx->pc = 0x1B38C0u;
    // 0x1b38c0: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B38C0u;
    SET_GPR_U32(ctx, 31, 0x1B38C8u);
    ctx->pc = 0x1B38C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B38C0u;
    // 0x1b38c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B38C0u, 0x1B38C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B38C8u;
label_1b38c8:
    // 0x1b38c8: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B38C8u;
    SET_GPR_U32(ctx, 31, 0x1B38D0u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B38C8u, 0x1B38D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B38D0u;
label_1b38d0:
    // 0x1b38d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B38D0u;
    {
        const bool branch_taken_0x1b38d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B38D0u;
        // 0x1b38d4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b38d0) {
            ctx->pc = 0x1B3910u;
            goto label_1b3910;
        }
    }
    ctx->pc = 0x1B38D8u;
label_1b38d8:
    // 0x1b38d8: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1b38d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1b38dc: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B38DCu;
    SET_GPR_U32(ctx, 31, 0x1B38E4u);
    ctx->pc = 0x1B38E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B38DCu;
    // 0x1b38e0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B38DCu, 0x1B38E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B38E4u;
label_1b38e4:
    // 0x1b38e4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B38E4u;
    {
        const bool branch_taken_0x1b38e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b38e4) {
            ctx->pc = 0x1B38FCu;
            goto label_1b38fc;
        }
    }
    ctx->pc = 0x1B38ECu;
    // 0x1b38ec: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B38ECu;
    SET_GPR_U32(ctx, 31, 0x1B38F4u);
    ctx->pc = 0x1B38F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B38ECu;
    // 0x1b38f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B38ECu, 0x1B38F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B38F4u;
label_1b38f4:
    // 0x1b38f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B38F4u;
    {
        const bool branch_taken_0x1b38f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B38F4u;
        // 0x1b38f8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b38f4) {
            ctx->pc = 0x1B3910u;
            goto label_1b3910;
        }
    }
    ctx->pc = 0x1B38FCu;
label_1b38fc:
    // 0x1b38fc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B38FCu;
    SET_GPR_U32(ctx, 31, 0x1B3904u);
    ctx->pc = 0x1B3900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B38FCu;
    // 0x1b3900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B38FCu, 0x1B3904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3904u;
label_1b3904:
    // 0x1b3904: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3904u;
    SET_GPR_U32(ctx, 31, 0x1B390Cu);
    ctx->pc = 0x1B3908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3904u;
    // 0x1b3908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3904u, 0x1B390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B390Cu;
label_1b390c:
    // 0x1b390c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b390cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b3910:
    // 0x1b3910: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1b3910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b3914: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1b3914u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b3918: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1b3918u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b391c: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1b391cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b3920: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b3920u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b3924: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b3924u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3928: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b3928u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b392c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b392cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3930: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b3930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3934: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3934u;
        // 0x1b3938: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B393Cu;
}
