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

// Function: BMotionScalerDataBezier__FP11BMotionCtrlP11BMotionWorki
// Address: 0x1a3830 - 0x1a3918
void BMotionScalerDataBezier__FP11BMotionCtrlP11BMotionWorki_0x1a3830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionScalerDataBezier__FP11BMotionCtrlP11BMotionWorki_0x1a3830");
#endif

    switch (ctx->pc) {
        case 0x1a3830u: goto label_1a3830;
        case 0x1a3834u: goto label_1a3834;
        case 0x1a3838u: goto label_1a3838;
        case 0x1a383cu: goto label_1a383c;
        case 0x1a3840u: goto label_1a3840;
        case 0x1a3844u: goto label_1a3844;
        case 0x1a3848u: goto label_1a3848;
        case 0x1a384cu: goto label_1a384c;
        case 0x1a3850u: goto label_1a3850;
        case 0x1a3854u: goto label_1a3854;
        case 0x1a3858u: goto label_1a3858;
        case 0x1a385cu: goto label_1a385c;
        case 0x1a3860u: goto label_1a3860;
        case 0x1a3864u: goto label_1a3864;
        case 0x1a3868u: goto label_1a3868;
        case 0x1a386cu: goto label_1a386c;
        case 0x1a3870u: goto label_1a3870;
        case 0x1a3874u: goto label_1a3874;
        case 0x1a3878u: goto label_1a3878;
        case 0x1a387cu: goto label_1a387c;
        case 0x1a3880u: goto label_1a3880;
        case 0x1a3884u: goto label_1a3884;
        case 0x1a3888u: goto label_1a3888;
        case 0x1a388cu: goto label_1a388c;
        case 0x1a3890u: goto label_1a3890;
        case 0x1a3894u: goto label_1a3894;
        case 0x1a3898u: goto label_1a3898;
        case 0x1a389cu: goto label_1a389c;
        case 0x1a38a0u: goto label_1a38a0;
        case 0x1a38a4u: goto label_1a38a4;
        case 0x1a38a8u: goto label_1a38a8;
        case 0x1a38acu: goto label_1a38ac;
        case 0x1a38b0u: goto label_1a38b0;
        case 0x1a38b4u: goto label_1a38b4;
        case 0x1a38b8u: goto label_1a38b8;
        case 0x1a38bcu: goto label_1a38bc;
        case 0x1a38c0u: goto label_1a38c0;
        case 0x1a38c4u: goto label_1a38c4;
        case 0x1a38c8u: goto label_1a38c8;
        case 0x1a38ccu: goto label_1a38cc;
        case 0x1a38d0u: goto label_1a38d0;
        case 0x1a38d4u: goto label_1a38d4;
        case 0x1a38d8u: goto label_1a38d8;
        case 0x1a38dcu: goto label_1a38dc;
        case 0x1a38e0u: goto label_1a38e0;
        case 0x1a38e4u: goto label_1a38e4;
        case 0x1a38e8u: goto label_1a38e8;
        case 0x1a38ecu: goto label_1a38ec;
        case 0x1a38f0u: goto label_1a38f0;
        case 0x1a38f4u: goto label_1a38f4;
        case 0x1a38f8u: goto label_1a38f8;
        case 0x1a38fcu: goto label_1a38fc;
        case 0x1a3900u: goto label_1a3900;
        case 0x1a3904u: goto label_1a3904;
        case 0x1a3908u: goto label_1a3908;
        case 0x1a390cu: goto label_1a390c;
        case 0x1a3910u: goto label_1a3910;
        case 0x1a3914u: goto label_1a3914;
        default: break;
    }

    ctx->pc = 0x1a3830u;

label_1a3830:
    // 0x1a3830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a3834:
    // 0x1a3834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a3838:
    // 0x1a3838: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a3838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a383c:
    // 0x1a383c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a383cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3840:
    // 0x1a3840: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a3844:
    // 0x1a3844: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1a3844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a3848:
    // 0x1a3848: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x1a3848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_1a384c:
    // 0x1a384c: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1a384cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a3850:
    // 0x1a3850: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1a3854:
    if (ctx->pc == 0x1A3854u) {
        ctx->pc = 0x1A3854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3850u;
        // 0x1a3854: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3858u;
        goto label_1a3858;
    }
    ctx->pc = 0x1A3850u;
    {
        const bool branch_taken_0x1a3850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3850u;
        // 0x1a3854: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3850) {
            ctx->pc = 0x1A3864u;
            goto label_1a3864;
        }
    }
    ctx->pc = 0x1A3858u;
label_1a3858:
    // 0x1a3858: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1a3858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1a385c:
    // 0x1a385c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a385cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a3860:
    // 0x1a3860: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1a3860u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_1a3864:
    // 0x1a3864: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3868:
    // 0x1a3868: 0x4c20027  bltzl       $a2, . + 4 + (0x27 << 2)
label_1a386c:
    if (ctx->pc == 0x1A386Cu) {
        ctx->pc = 0x1A386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3868u;
        // 0x1a386c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3870u;
        goto label_1a3870;
    }
    ctx->pc = 0x1A3868u;
    {
        const bool branch_taken_0x1a3868 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1a3868) {
            ctx->pc = 0x1A386Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3868u;
            // 0x1a386c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3908u;
            goto label_1a3908;
        }
    }
    ctx->pc = 0x1A3870u;
label_1a3870:
    // 0x1a3870: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_1a3874:
    if (ctx->pc == 0x1A3874u) {
        ctx->pc = 0x1A3878u;
        goto label_1a3878;
    }
    ctx->pc = 0x1A3870u;
    {
        const bool branch_taken_0x1a3870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3870) {
            ctx->pc = 0x1A38F8u;
            goto label_1a38f8;
        }
    }
    ctx->pc = 0x1A3878u;
label_1a3878:
    // 0x1a3878: 0xc06a848  jal         func_1AA120
label_1a387c:
    if (ctx->pc == 0x1A387Cu) {
        ctx->pc = 0x1A387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3878u;
        // 0x1a387c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3880u;
        goto label_1a3880;
    }
    ctx->pc = 0x1A3878u;
    SET_GPR_U32(ctx, 31, 0x1A3880u);
    ctx->pc = 0x1A387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3878u;
    // 0x1a387c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA120u, 0x1A3878u, 0x1A3880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3880u;
label_1a3880:
    // 0x1a3880: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a3880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a3884:
    // 0x1a3884: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1a3888:
    if (ctx->pc == 0x1A3888u) {
        ctx->pc = 0x1A388Cu;
        goto label_1a388c;
    }
    ctx->pc = 0x1A3884u;
    {
        const bool branch_taken_0x1a3884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3884) {
            ctx->pc = 0x1A3900u;
            goto label_1a3900;
        }
    }
    ctx->pc = 0x1A388Cu;
label_1a388c:
    // 0x1a388c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a388cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a3890:
    // 0x1a3890: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a3894:
    if (ctx->pc == 0x1A3894u) {
        ctx->pc = 0x1A3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3890u;
        // 0x1a3894: 0xc62c005c  lwc1        $f12, 0x5C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3898u;
        goto label_1a3898;
    }
    ctx->pc = 0x1A3890u;
    {
        const bool branch_taken_0x1a3890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3890u;
        // 0x1a3894: 0xc62c005c  lwc1        $f12, 0x5C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3890) {
            ctx->pc = 0x1A38B0u;
            goto label_1a38b0;
        }
    }
    ctx->pc = 0x1A3898u;
label_1a3898:
    // 0x1a3898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a389c:
    // 0x1a389c: 0x40f809  jalr        $v0
label_1a38a0:
    if (ctx->pc == 0x1A38A0u) {
        ctx->pc = 0x1A38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A389Cu;
        // 0x1a38a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A38A4u;
        goto label_1a38a4;
    }
    ctx->pc = 0x1A389Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A38A4u);
        ctx->pc = 0x1A38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A389Cu;
        // 0x1a38a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A389Cu, 0x1A38A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A38A4u;
label_1a38a4:
    // 0x1a38a4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a38a8:
    if (ctx->pc == 0x1A38A8u) {
        ctx->pc = 0x1A38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38A4u;
        // 0x1a38a8: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A38ACu;
        goto label_1a38ac;
    }
    ctx->pc = 0x1A38A4u;
    {
        const bool branch_taken_0x1a38a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38A4u;
        // 0x1a38a8: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a38a4) {
            ctx->pc = 0x1A38DCu;
            goto label_1a38dc;
        }
    }
    ctx->pc = 0x1A38ACu;
label_1a38ac:
    // 0x1a38ac: 0x0  nop
    ctx->pc = 0x1a38acu;
    // NOP
label_1a38b0:
    // 0x1a38b0: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a38b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_1a38b4:
    // 0x1a38b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a38b8:
    if (ctx->pc == 0x1A38B8u) {
        ctx->pc = 0x1A38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38B4u;
        // 0x1a38b8: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A38BCu;
        goto label_1a38bc;
    }
    ctx->pc = 0x1A38B4u;
    {
        const bool branch_taken_0x1a38b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38B4u;
        // 0x1a38b8: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a38b4) {
            ctx->pc = 0x1A38C8u;
            goto label_1a38c8;
        }
    }
    ctx->pc = 0x1A38BCu;
label_1a38bc:
    // 0x1a38bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a38bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a38c0:
    // 0x1a38c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a38c4:
    if (ctx->pc == 0x1A38C4u) {
        ctx->pc = 0x1A38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38C0u;
        // 0x1a38c4: 0xe44c0000  swc1        $f12, 0x0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A38C8u;
        goto label_1a38c8;
    }
    ctx->pc = 0x1A38C0u;
    {
        const bool branch_taken_0x1a38c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38C0u;
        // 0x1a38c4: 0xe44c0000  swc1        $f12, 0x0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a38c0) {
            ctx->pc = 0x1A38D8u;
            goto label_1a38d8;
        }
    }
    ctx->pc = 0x1A38C8u;
label_1a38c8:
    // 0x1a38c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a38c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a38cc:
    // 0x1a38cc: 0x24a59238  addiu       $a1, $a1, -0x6DC8
    ctx->pc = 0x1a38ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939192));
label_1a38d0:
    // 0x1a38d0: 0xc068186  jal         func_1A0618
label_1a38d4:
    if (ctx->pc == 0x1A38D4u) {
        ctx->pc = 0x1A38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38D0u;
        // 0x1a38d4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A38D8u;
        goto label_1a38d8;
    }
    ctx->pc = 0x1A38D0u;
    SET_GPR_U32(ctx, 31, 0x1A38D8u);
    ctx->pc = 0x1A38D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38D0u;
    // 0x1a38d4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A38D0u, 0x1A38D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A38D8u;
label_1a38d8:
    // 0x1a38d8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a38dc:
    // 0x1a38dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a38e0:
    if (ctx->pc == 0x1A38E0u) {
        ctx->pc = 0x1A38E4u;
        goto label_1a38e4;
    }
    ctx->pc = 0x1A38DCu;
    {
        const bool branch_taken_0x1a38dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a38dc) {
            ctx->pc = 0x1A3900u;
            goto label_1a3900;
        }
    }
    ctx->pc = 0x1A38E4u;
label_1a38e4:
    // 0x1a38e4: 0x40f809  jalr        $v0
label_1a38e8:
    if (ctx->pc == 0x1A38E8u) {
        ctx->pc = 0x1A38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38E4u;
        // 0x1a38e8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A38ECu;
        goto label_1a38ec;
    }
    ctx->pc = 0x1A38E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A38ECu);
        ctx->pc = 0x1A38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38E4u;
        // 0x1a38e8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A38E4u, 0x1A38ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A38ECu;
label_1a38ec:
    // 0x1a38ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a38f0:
    if (ctx->pc == 0x1A38F0u) {
        ctx->pc = 0x1A38F4u;
        goto label_1a38f4;
    }
    ctx->pc = 0x1A38ECu;
    {
        const bool branch_taken_0x1a38ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a38ec) {
            ctx->pc = 0x1A3900u;
            goto label_1a3900;
        }
    }
    ctx->pc = 0x1A38F4u;
label_1a38f4:
    // 0x1a38f4: 0x0  nop
    ctx->pc = 0x1a38f4u;
    // NOP
label_1a38f8:
    // 0x1a38f8: 0xc06881e  jal         func_1A2078
label_1a38fc:
    if (ctx->pc == 0x1A38FCu) {
        ctx->pc = 0x1A3900u;
        goto label_1a3900;
    }
    ctx->pc = 0x1A38F8u;
    SET_GPR_U32(ctx, 31, 0x1A3900u);
    ctx->pc = 0x1A2078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2078u, 0x1A38F8u, 0x1A3900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3900u;
label_1a3900:
    // 0x1a3900: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3904:
    // 0x1a3904: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3908:
    // 0x1a3908: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a3908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a390c:
    // 0x1a390c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a390cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3910:
    // 0x1a3910: 0x3e00008  jr          $ra
label_1a3914:
    if (ctx->pc == 0x1A3914u) {
        ctx->pc = 0x1A3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3910u;
        // 0x1a3914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3918u;
        goto label_fallthrough_0x1a3910;
    }
    ctx->pc = 0x1A3910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3910u;
        // 0x1a3914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a3910:
    ctx->pc = 0x1A3918u;
}
