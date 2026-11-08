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

// Function: sceDread
// Address: 0x1b42b8 - 0x1b4410
void sceDread_0x1b42b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDread_0x1b42b8");
#endif

    switch (ctx->pc) {
        case 0x1b42e0u: goto label_1b42e0;
        case 0x1b42ecu: goto label_1b42ec;
        case 0x1b4304u: goto label_1b4304;
        case 0x1b4328u: goto label_1b4328;
        case 0x1b4350u: goto label_1b4350;
        case 0x1b439cu: goto label_1b439c;
        case 0x1b43acu: goto label_1b43ac;
        case 0x1b43b4u: goto label_1b43b4;
        case 0x1b43c8u: goto label_1b43c8;
        case 0x1b43d8u: goto label_1b43d8;
        case 0x1b43e8u: goto label_1b43e8;
        case 0x1b43f0u: goto label_1b43f0;
        default: break;
    }

    ctx->pc = 0x1b42b8u;

    // 0x1b42b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b42b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b42bc: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1b42bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1b42c0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1b42c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1b42c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b42c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b42c8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1b42c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1b42cc: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x1b42ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x1b42d0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1b42d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1b42d4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b42d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1b42d8: 0xc06c81a  jal         func_1B2068
    ctx->pc = 0x1B42D8u;
    SET_GPR_U32(ctx, 31, 0x1B42E0u);
    ctx->pc = 0x1B42DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B42D8u;
    // 0x1b42dc: 0x26729a80  addiu       $s2, $s3, -0x6580 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2068u, 0x1B42D8u, 0x1B42E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42E0u;
label_1b42e0:
    // 0x1b42e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b42e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b42e4: 0xc06c92c  jal         func_1B24B0
    ctx->pc = 0x1B42E4u;
    SET_GPR_U32(ctx, 31, 0x1B42ECu);
    ctx->pc = 0x1B42E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B42E4u;
    // 0x1b42e8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24B0u, 0x1B42E4u, 0x1B42ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42ECu;
label_1b42ec:
    // 0x1b42ec: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b42ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b42f0: 0x8c43aa04  lw          $v1, -0x55FC($v0)
    ctx->pc = 0x1b42f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24AA04u));
    // 0x1b42f4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B42F4u;
    {
        const bool branch_taken_0x1b42f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b42f4) {
            ctx->pc = 0x1B430Cu;
            goto label_1b430c;
        }
    }
    ctx->pc = 0x1B42FCu;
    // 0x1b42fc: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B42FCu;
    SET_GPR_U32(ctx, 31, 0x1B4304u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B42FCu, 0x1B4304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4304u;
label_1b4304:
    // 0x1b4304: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1B4304u;
    {
        const bool branch_taken_0x1b4304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4304u;
        // 0x1b4308: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4304) {
            ctx->pc = 0x1B43F4u;
            goto label_1b43f4;
        }
    }
    ctx->pc = 0x1B430Cu;
label_1b430c:
    // 0x1b430c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B430Cu;
    {
        const bool branch_taken_0x1b430c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b430c) {
            ctx->pc = 0x1B4320u;
            goto label_1b4320;
        }
    }
    ctx->pc = 0x1B4314u;
    // 0x1b4314: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b4314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b4318: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4318u;
    {
        const bool branch_taken_0x1b4318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4318) {
            ctx->pc = 0x1B431Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4318u;
            // 0x1b431c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4330u;
            goto label_1b4330;
        }
    }
    ctx->pc = 0x1B4320u;
label_1b4320:
    // 0x1b4320: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4320u;
    SET_GPR_U32(ctx, 31, 0x1B4328u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4320u, 0x1B4328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4328u;
label_1b4328:
    // 0x1b4328: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1B4328u;
    {
        const bool branch_taken_0x1b4328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4328u;
        // 0x1b432c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4328) {
            ctx->pc = 0x1B43F4u;
            goto label_1b43f4;
        }
    }
    ctx->pc = 0x1B4330u;
label_1b4330:
    // 0x1b4330: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b4330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4334: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x1b4334u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x1b4338: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b433c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1b433cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1b4340: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1b4340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1b4344: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b4344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b4348: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B4348u;
    SET_GPR_U32(ctx, 31, 0x1B4350u);
    ctx->pc = 0x1B434Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4348u;
    // 0x1b434c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B4348u, 0x1B4350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4350u;
label_1b4350:
    // 0x1b4350: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b4350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4354: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1b4354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4358: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b4358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b435c: 0xae719a80  sw          $s1, -0x6580($s3)
    ctx->pc = 0x1b435cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294941312), GPR_U32(ctx, 17));
    // 0x1b4360: 0x2450a6c0  addiu       $s0, $v0, -0x5940
    ctx->pc = 0x1b4360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944448));
    // 0x1b4364: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b4364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b4368: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b4368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b436c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1b436cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1b4370: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b4370u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b4374: 0x2484b180  addiu       $a0, $a0, -0x4E80
    ctx->pc = 0x1b4374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947200));
    // 0x1b4378: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b4378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b437c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1b437cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1b4380: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b4380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b4384: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4388: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1b4388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b438c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b438cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4390: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b4390u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4394: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B4394u;
    SET_GPR_U32(ctx, 31, 0x1B439Cu);
    ctx->pc = 0x1B4398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4394u;
    // 0x1b4398: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B4394u, 0x1B439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B439Cu;
label_1b439c:
    // 0x1b439c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B439Cu;
    {
        const bool branch_taken_0x1b439c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B439Cu;
        // 0x1b43a0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b439c) {
            ctx->pc = 0x1B43BCu;
            goto label_1b43bc;
        }
    }
    ctx->pc = 0x1B43A4u;
    // 0x1b43a4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B43A4u;
    SET_GPR_U32(ctx, 31, 0x1B43ACu);
    ctx->pc = 0x1B43A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43A4u;
    // 0x1b43a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B43A4u, 0x1B43ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43ACu;
label_1b43ac:
    // 0x1b43ac: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B43ACu;
    SET_GPR_U32(ctx, 31, 0x1B43B4u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B43ACu, 0x1B43B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43B4u;
label_1b43b4:
    // 0x1b43b4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B43B4u;
    {
        const bool branch_taken_0x1b43b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43B4u;
        // 0x1b43b8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43b4) {
            ctx->pc = 0x1B43F4u;
            goto label_1b43f4;
        }
    }
    ctx->pc = 0x1B43BCu;
label_1b43bc:
    // 0x1b43bc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b43bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1b43c0: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B43C0u;
    SET_GPR_U32(ctx, 31, 0x1B43C8u);
    ctx->pc = 0x1B43C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43C0u;
    // 0x1b43c4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B43C0u, 0x1B43C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43C8u;
label_1b43c8:
    // 0x1b43c8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B43C8u;
    {
        const bool branch_taken_0x1b43c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b43c8) {
            ctx->pc = 0x1B43E0u;
            goto label_1b43e0;
        }
    }
    ctx->pc = 0x1B43D0u;
    // 0x1b43d0: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B43D0u;
    SET_GPR_U32(ctx, 31, 0x1B43D8u);
    ctx->pc = 0x1B43D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43D0u;
    // 0x1b43d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B43D0u, 0x1B43D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43D8u;
label_1b43d8:
    // 0x1b43d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B43D8u;
    {
        const bool branch_taken_0x1b43d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B43DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43D8u;
        // 0x1b43dc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43d8) {
            ctx->pc = 0x1B43F4u;
            goto label_1b43f4;
        }
    }
    ctx->pc = 0x1B43E0u;
label_1b43e0:
    // 0x1b43e0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B43E0u;
    SET_GPR_U32(ctx, 31, 0x1B43E8u);
    ctx->pc = 0x1B43E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43E0u;
    // 0x1b43e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B43E0u, 0x1B43E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43E8u;
label_1b43e8:
    // 0x1b43e8: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B43E8u;
    SET_GPR_U32(ctx, 31, 0x1B43F0u);
    ctx->pc = 0x1B43ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43E8u;
    // 0x1b43ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B43E8u, 0x1B43F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43F0u;
label_1b43f0:
    // 0x1b43f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b43f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b43f4:
    // 0x1b43f4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b43f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b43f8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b43f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b43fc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b43fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b4400: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b4400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b4404: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b4404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b4408: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4408u;
        // 0x1b440c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4410u;
}
