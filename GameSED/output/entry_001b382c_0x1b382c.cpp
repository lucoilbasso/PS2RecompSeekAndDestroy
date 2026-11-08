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

// Function: entry_001b382c
// Address: 0x1b382c - 0x1b38d8
void entry_001b382c_0x1b382c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b382c_0x1b382c");
#endif

    switch (ctx->pc) {
        case 0x1b3858u: goto label_1b3858;
        case 0x1b3884u: goto label_1b3884;
        case 0x1b38b8u: goto label_1b38b8;
        case 0x1b38c8u: goto label_1b38c8;
        case 0x1b38d0u: goto label_1b38d0;
        default: break;
    }

    ctx->pc = 0x1b382cu;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1B38D8u;
}
