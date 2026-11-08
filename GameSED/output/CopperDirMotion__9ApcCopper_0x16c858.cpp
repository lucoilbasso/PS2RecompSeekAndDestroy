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

// Function: CopperDirMotion__9ApcCopper
// Address: 0x16c858 - 0x16cca8
void CopperDirMotion__9ApcCopper_0x16c858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopperDirMotion__9ApcCopper_0x16c858");
#endif

    switch (ctx->pc) {
        case 0x16c8f8u: goto label_16c8f8;
        case 0x16c900u: goto label_16c900;
        case 0x16c93cu: goto label_16c93c;
        case 0x16c944u: goto label_16c944;
        case 0x16c9a0u: goto label_16c9a0;
        case 0x16c9d0u: goto label_16c9d0;
        case 0x16c9e0u: goto label_16c9e0;
        case 0x16c9fcu: goto label_16c9fc;
        case 0x16ca08u: goto label_16ca08;
        case 0x16cc7cu: goto label_16cc7c;
        default: break;
    }

    ctx->pc = 0x16c858u;

    // 0x16c858: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x16c858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x16c85c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x16c85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x16c860: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16c860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c864: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x16c864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x16c868: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16c868u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c86c: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x16c86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x16c870: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x16c870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x16c874: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x16c874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x16c878: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x16c878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x16c87c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x16c87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x16c880: 0xe7b500b0  swc1        $f21, 0xB0($sp)
    ctx->pc = 0x16c880u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x16c884: 0xe7b400a8  swc1        $f20, 0xA8($sp)
    ctx->pc = 0x16c884u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x16c888: 0x8e2301e0  lw          $v1, 0x1E0($s1)
    ctx->pc = 0x16c888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x16c88c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x16c88cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x16c890: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x16C890u;
    {
        const bool branch_taken_0x16c890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C890u;
        // 0x16c894: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c890) {
            ctx->pc = 0x16C974u;
            goto label_16c974;
        }
    }
    ctx->pc = 0x16C898u;
    // 0x16c898: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16c898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16c89c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x16c8a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c8a4: 0x8c637460  lw          $v1, 0x7460($v1)
    ctx->pc = 0x16c8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29792)));
    // 0x16c8a8: 0x600008  jr          $v1
    ctx->pc = 0x16C8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C8B0u: goto label_16c8b0;
            case 0x16C8B8u: goto label_16c8b8;
            case 0x16C8C0u: goto label_16c8c0;
            case 0x16C910u: goto label_16c910;
            case 0x16C974u: goto label_16c974;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C8A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16C8B0u;
label_16c8b0:
    // 0x16c8b0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x16C8B0u;
    {
        const bool branch_taken_0x16c8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8B0u;
        // 0x16c8b4: 0x263501f0  addiu       $s5, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c8b0) {
            ctx->pc = 0x16C974u;
            goto label_16c974;
        }
    }
    ctx->pc = 0x16C8B8u;
label_16c8b8:
    // 0x16c8b8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x16C8B8u;
    {
        const bool branch_taken_0x16c8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8B8u;
        // 0x16c8bc: 0x263301f0  addiu       $s3, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c8b8) {
            ctx->pc = 0x16C974u;
            goto label_16c974;
        }
    }
    ctx->pc = 0x16C8C0u;
label_16c8c0:
    // 0x16c8c0: 0x8e2201e4  lw          $v0, 0x1E4($s1)
    ctx->pc = 0x16c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x16c8c4: 0x8c500074  lw          $s0, 0x74($v0)
    ctx->pc = 0x16c8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x16c8c8: 0x5200002a  beql        $s0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x16C8C8u;
    {
        const bool branch_taken_0x16c8c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c8c8) {
            ctx->pc = 0x16C8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C8C8u;
            // 0x16c8cc: 0xae2001e0  sw          $zero, 0x1E0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C974u;
            goto label_16c974;
        }
    }
    ctx->pc = 0x16C8D0u;
    // 0x16c8d0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x16c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16c8d4: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x16c8d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16c8d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16c8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c8dc: 0x24920020  addiu       $s2, $a0, 0x20
    ctx->pc = 0x16c8dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x16c8e0: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x16c8e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x16c8e4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16c8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x16c8e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C8E8u;
    {
        const bool branch_taken_0x16c8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8E8u;
        // 0x16c8ec: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c8e8) {
            ctx->pc = 0x16C8F8u;
            goto label_16c8f8;
        }
    }
    ctx->pc = 0x16C8F0u;
    // 0x16c8f0: 0xc061920  jal         func_186480
    ctx->pc = 0x16C8F0u;
    SET_GPR_U32(ctx, 31, 0x16C8F8u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16C8F0u, 0x16C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C8F8u;
label_16c8f8:
    // 0x16c8f8: 0xc061422  jal         func_185088
    ctx->pc = 0x16C8F8u;
    SET_GPR_U32(ctx, 31, 0x16C900u);
    ctx->pc = 0x16C8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8F8u;
    // 0x16c8fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x16C8F8u, 0x16C900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C900u;
label_16c900:
    // 0x16c900: 0x268300e0  addiu       $v1, $s4, 0xE0
    ctx->pc = 0x16c900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x16c904: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16C904u;
    {
        const bool branch_taken_0x16c904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C904u;
        // 0x16c908: 0x260200a0  addiu       $v0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c904) {
            ctx->pc = 0x16C94Cu;
            goto label_16c94c;
        }
    }
    ctx->pc = 0x16C90Cu;
    // 0x16c90c: 0x0  nop
    ctx->pc = 0x16c90cu;
    // NOP
label_16c910:
    // 0x16c910: 0x8e3401e4  lw          $s4, 0x1E4($s1)
    ctx->pc = 0x16c910u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x16c914: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x16c914u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16c918: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x16c918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x16c91c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16c91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c920: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x16c920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x16c924: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x16c924u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x16c928: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16c928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x16c92c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C92Cu;
    {
        const bool branch_taken_0x16c92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C92Cu;
        // 0x16c930: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c92c) {
            ctx->pc = 0x16C93Cu;
            goto label_16c93c;
        }
    }
    ctx->pc = 0x16C934u;
    // 0x16c934: 0xc061920  jal         func_186480
    ctx->pc = 0x16C934u;
    SET_GPR_U32(ctx, 31, 0x16C93Cu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16C934u, 0x16C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C93Cu;
label_16c93c:
    // 0x16c93c: 0xc061422  jal         func_185088
    ctx->pc = 0x16C93Cu;
    SET_GPR_U32(ctx, 31, 0x16C944u);
    ctx->pc = 0x16C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C93Cu;
    // 0x16c940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x16C93Cu, 0x16C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C944u;
label_16c944:
    // 0x16c944: 0x264300e0  addiu       $v1, $s2, 0xE0
    ctx->pc = 0x16c944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x16c948: 0x268200a0  addiu       $v0, $s4, 0xA0
    ctx->pc = 0x16c948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
label_16c94c:
    // 0x16c94c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x16c94cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c950: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16c950u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c954: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x16c954u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16c958: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x16c958u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16c95c: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x16c95cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x16c960: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16c960u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16c964: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16c964u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16c968: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16c968u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16c96c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x16c96cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16c970: 0xfa6c0000  sqc2        $vf12, 0x0($s3)
    ctx->pc = 0x16c970u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_16c974:
    // 0x16c974: 0x12600024  beqz        $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x16C974u;
    {
        const bool branch_taken_0x16c974 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c974) {
            ctx->pc = 0x16CA08u;
            goto label_16ca08;
        }
    }
    ctx->pc = 0x16C97Cu;
    // 0x16c97c: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x16c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x16c980: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x16c980u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c984: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x16c984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x16c988: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x16c988u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c98c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16c98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16c990: 0x8e240154  lw          $a0, 0x154($s1)
    ctx->pc = 0x16c990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x16c994: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16c994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c998: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x16C998u;
    SET_GPR_U32(ctx, 31, 0x16C9A0u);
    ctx->pc = 0x16C99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C998u;
    // 0x16c99c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1853D8u, 0x16C998u, 0x16C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C9A0u;
label_16c9a0:
    // 0x16c9a0: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x16c9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16c9a4: 0x46006045  abs.s       $f1, $f12
    ctx->pc = 0x16c9a4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[12]);
    // 0x16c9a8: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x16c9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16c9ac: 0x46006805  abs.s       $f0, $f13
    ctx->pc = 0x16c9acu;
    ctx->f[0] = FPU_ABS_S(ctx->f[13]);
    // 0x16c9b0: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x16c9b0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16c9b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16c9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16c9b8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x16c9b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x16c9bc: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x16c9bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c9c0: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x16C9C0u;
    {
        const bool branch_taken_0x16c9c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c9c0) {
            ctx->pc = 0x16C9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C9C0u;
            // 0x16c9c4: 0xc7ac0024  lwc1        $f12, 0x24($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C9E0u;
            goto label_16c9e0;
        }
    }
    ctx->pc = 0x16C9C8u;
    // 0x16c9c8: 0xc067a02  jal         func_19E808
    ctx->pc = 0x16C9C8u;
    SET_GPR_U32(ctx, 31, 0x16C9D0u);
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x16C9C8u, 0x16C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C9D0u;
label_16c9d0:
    // 0x16c9d0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x16c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16c9d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c9d8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x16c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x16c9dc: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x16c9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16c9e0:
    // 0x16c9e0: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x16c9e0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
    // 0x16c9e4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x16c9e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x16c9e8: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x16c9e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c9ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16C9ECu;
    {
        const bool branch_taken_0x16c9ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c9ec) {
            ctx->pc = 0x16CA08u;
            goto label_16ca08;
        }
    }
    ctx->pc = 0x16C9F4u;
    // 0x16c9f4: 0xc067a02  jal         func_19E808
    ctx->pc = 0x16C9F4u;
    SET_GPR_U32(ctx, 31, 0x16C9FCu);
    ctx->pc = 0x16C9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C9F4u;
    // 0x16c9f8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x16C9F4u, 0x16C9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C9FCu;
label_16c9fc:
    // 0x16c9fc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ca00: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x16ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ca04: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x16ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_16ca08:
    // 0x16ca08: 0x12a00030  beqz        $s5, . + 4 + (0x30 << 2)
    ctx->pc = 0x16CA08u;
    {
        const bool branch_taken_0x16ca08 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA08u;
        // 0x16ca0c: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca08) {
            ctx->pc = 0x16CACCu;
            goto label_16cacc;
        }
    }
    ctx->pc = 0x16CA10u;
    // 0x16ca10: 0x8e250154  lw          $a1, 0x154($s1)
    ctx->pc = 0x16ca10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x16ca14: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x16ca14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x16ca18: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x16ca18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x16ca1c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x16ca1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16ca20: 0x70431048  psubw       $v0, $v0, $v1
    ctx->pc = 0x16ca20u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16ca24: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x16ca24u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x16ca28: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x16ca28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x16ca2c: 0x8e260210  lw          $a2, 0x210($s1)
    ctx->pc = 0x16ca2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x16ca30: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x16ca30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x16ca34: 0x28834000  slti        $v1, $a0, 0x4000
    ctx->pc = 0x16ca34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x16ca38: 0x24828000  addiu       $v0, $a0, -0x8000
    ctx->pc = 0x16ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x16ca3c: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x16ca3cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x16ca40: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x16ca40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16ca44: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x16ca44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x16ca48: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x16ca48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16ca4c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x16ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x16ca50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16ca54: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x16ca54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x16ca58: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x16ca58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x16ca5c: 0x28694000  slti        $t1, $v1, 0x4000
    ctx->pc = 0x16ca5cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x16ca60: 0x24668000  addiu       $a2, $v1, -0x8000
    ctx->pc = 0x16ca60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x16ca64: 0x28474000  slti        $a3, $v0, 0x4000
    ctx->pc = 0x16ca64u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x16ca68: 0x24448000  addiu       $a0, $v0, -0x8000
    ctx->pc = 0x16ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x16ca6c: 0xc9180a  movz        $v1, $a2, $t1
    ctx->pc = 0x16ca6cu;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x16ca70: 0x87100a  movz        $v0, $a0, $a3
    ctx->pc = 0x16ca70u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x16ca74: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x16ca74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x16ca78: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x16ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x16ca7c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x16ca7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x16ca80: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x16ca80u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x16ca84: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x16ca84u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x16ca88: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x16ca88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x16ca8c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x16ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16ca90: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x16ca90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x16ca94: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x16ca94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x16ca98: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x16ca98u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ca9c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x16ca9cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x16caa0: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x16caa0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16caa4: 0x26240230  addiu       $a0, $s1, 0x230
    ctx->pc = 0x16caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x16caa8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16caa8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16caac: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x16caacu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cab0: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x16cab0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16cab4: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16cab4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16cab8: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x16cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x16cabc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16cabcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cac0: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x16cac0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16cac4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x16cac4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16cac8: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16cac8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_16cacc:
    // 0x16cacc: 0x26230220  addiu       $v1, $s1, 0x220
    ctx->pc = 0x16caccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x16cad0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16cad0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16cad4: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x16cad4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16cad8: 0x4a0002ff  vnop
    ctx->pc = 0x16cad8u;
    // NOP operation, no action needed for VU0
    // 0x16cadc: 0x4a0002ff  vnop
    ctx->pc = 0x16cadcu;
    // NOP operation, no action needed for VU0
    // 0x16cae0: 0x4a0002ff  vnop
    ctx->pc = 0x16cae0u;
    // NOP operation, no action needed for VU0
    // 0x16cae4: 0x4a0002ff  vnop
    ctx->pc = 0x16cae4u;
    // NOP operation, no action needed for VU0
    // 0x16cae8: 0x4a0002ff  vnop
    ctx->pc = 0x16cae8u;
    // NOP operation, no action needed for VU0
    // 0x16caec: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x16caecu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x16caf0: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x16caf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x16caf4: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x16caf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x16caf8: 0x50400061  beql        $v0, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x16CAF8u;
    {
        const bool branch_taken_0x16caf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16caf8) {
            ctx->pc = 0x16CAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CAF8u;
            // 0x16cafc: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CC80u;
            goto label_16cc80;
        }
    }
    ctx->pc = 0x16CB00u;
    // 0x16cb00: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x16cb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cb04: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x16cb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x16cb08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x16cb08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16cb0c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x16cb0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x16cb10: 0x460200c2  mul.s       $f3, $f0, $f2
    ctx->pc = 0x16cb10u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x16cb14: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x16cb14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16cb18: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x16CB18u;
    {
        const bool branch_taken_0x16cb18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16cb18) {
            ctx->pc = 0x16CB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CB18u;
            // 0x16cb1c: 0xc620020c  lwc1        $f0, 0x20C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CB38u;
            goto label_16cb38;
        }
    }
    ctx->pc = 0x16CB20u;
    // 0x16cb20: 0xc6200224  lwc1        $f0, 0x224($s1)
    ctx->pc = 0x16cb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cb24: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x16cb24u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x16cb28: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x16cb28u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x16cb2c: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x16cb2cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
    // 0x16cb30: 0xe6200224  swc1        $f0, 0x224($s1)
    ctx->pc = 0x16cb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    // 0x16cb34: 0xc620020c  lwc1        $f0, 0x20C($s1)
    ctx->pc = 0x16cb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16cb38:
    // 0x16cb38: 0x460200c2  mul.s       $f3, $f0, $f2
    ctx->pc = 0x16cb38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x16cb3c: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x16cb3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16cb40: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x16CB40u;
    {
        const bool branch_taken_0x16cb40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB40u;
        // 0x16cb44: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb40) {
            ctx->pc = 0x16CB70u;
            goto label_16cb70;
        }
    }
    ctx->pc = 0x16CB48u;
    // 0x16cb48: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x16cb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cb4c: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x16cb4cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
    // 0x16cb50: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x16cb50u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x16cb54: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x16cb54u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
    // 0x16cb58: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x16cb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x16cb5c: 0xc6210228  lwc1        $f1, 0x228($s1)
    ctx->pc = 0x16cb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cb60: 0x46020868  max.s       $f1, $f1, $f2
    ctx->pc = 0x16cb60u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[2]);
    // 0x16cb64: 0x46030869  min.s       $f1, $f1, $f3
    ctx->pc = 0x16cb64u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[3]);
    // 0x16cb68: 0xe6210228  swc1        $f1, 0x228($s1)
    ctx->pc = 0x16cb68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 552), bits); }
    // 0x16cb6c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16cb70:
    // 0x16cb70: 0xc7808484  lwc1        $f0, -0x7B7C($gp)
    ctx->pc = 0x16cb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cb74: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16cb74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16cb78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16cb78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16cb7c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16cb7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16cb80: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x16cb80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16cb84: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x16cb84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16cb88: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x16cb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cb8c: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x16cb8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16cb90: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16CB90u;
    {
        const bool branch_taken_0x16cb90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16cb90) {
            ctx->pc = 0x16CBACu;
            goto label_16cbac;
        }
    }
    ctx->pc = 0x16CB98u;
    // 0x16cb98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16cb98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16cb9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16cb9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16cba0: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x16cba0u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x16cba4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x16cba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x16cba8: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x16cba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16cbac:
    // 0x16cbac: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x16cbacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16cbb0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x16CBB0u;
    {
        const bool branch_taken_0x16cbb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16cbb0) {
            ctx->pc = 0x16CBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CBB0u;
            // 0x16cbb4: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CBCCu;
            goto label_16cbcc;
        }
    }
    ctx->pc = 0x16CBB8u;
    // 0x16cbb8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16cbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16cbbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16cbbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16cbc0: 0x46000829  min.s       $f0, $f1, $f0
    ctx->pc = 0x16cbc0u;
    ctx->f[0] = std::min(ctx->f[1], ctx->f[0]);
    // 0x16cbc4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x16cbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x16cbc8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x16cbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16cbcc:
    // 0x16cbcc: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x16cbccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16cbd0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x16CBD0u;
    {
        const bool branch_taken_0x16cbd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16cbd0) {
            ctx->pc = 0x16CBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CBD0u;
            // 0x16cbd4: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CBECu;
            goto label_16cbec;
        }
    }
    ctx->pc = 0x16CBD8u;
    // 0x16cbd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16cbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16cbdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16cbdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16cbe0: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x16cbe0u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x16cbe4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x16cbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x16cbe8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x16cbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16cbec:
    // 0x16cbec: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x16cbecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16cbf0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x16CBF0u;
    {
        const bool branch_taken_0x16cbf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16cbf0) {
            ctx->pc = 0x16CBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CBF0u;
            // 0x16cbf4: 0xc7a10058  lwc1        $f1, 0x58($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CC0Cu;
            goto label_16cc0c;
        }
    }
    ctx->pc = 0x16CBF8u;
    // 0x16cbf8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16cbf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16cbfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16cbfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16cc00: 0x46000829  min.s       $f0, $f1, $f0
    ctx->pc = 0x16cc00u;
    ctx->f[0] = std::min(ctx->f[1], ctx->f[0]);
    // 0x16cc04: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x16cc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x16cc08: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x16cc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16cc0c:
    // 0x16cc0c: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x16cc0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16cc10: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x16CC10u;
    {
        const bool branch_taken_0x16cc10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16cc10) {
            ctx->pc = 0x16CC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CC10u;
            // 0x16cc14: 0xc7a10058  lwc1        $f1, 0x58($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CC2Cu;
            goto label_16cc2c;
        }
    }
    ctx->pc = 0x16CC18u;
    // 0x16cc18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16cc18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16cc1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16cc1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16cc20: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x16cc20u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x16cc24: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x16cc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x16cc28: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x16cc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16cc2c:
    // 0x16cc2c: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x16cc2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16cc30: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16CC30u;
    {
        const bool branch_taken_0x16cc30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC30u;
        // 0x16cc34: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc30) {
            ctx->pc = 0x16CC4Cu;
            goto label_16cc4c;
        }
    }
    ctx->pc = 0x16CC38u;
    // 0x16cc38: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16cc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16cc3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16cc3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16cc40: 0x46000829  min.s       $f0, $f1, $f0
    ctx->pc = 0x16cc40u;
    ctx->f[0] = std::min(ctx->f[1], ctx->f[0]);
    // 0x16cc44: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x16cc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x16cc48: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x16cc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_16cc4c:
    // 0x16cc4c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x16cc4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cc50: 0x4be2117c  vftoi0.xyzw $vf2, $vf2
    ctx->pc = 0x16cc50u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16cc54: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x16cc54u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16cc58: 0x8e240154  lw          $a0, 0x154($s1)
    ctx->pc = 0x16cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x16cc5c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x16cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x16cc60: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x16cc60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16cc64: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x16cc64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cc68: 0x70431008  paddw       $v0, $v0, $v1
    ctx->pc = 0x16cc68u;
    SET_GPR_VEC(ctx, 2, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16cc6c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x16cc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x16cc70: 0x8e240154  lw          $a0, 0x154($s1)
    ctx->pc = 0x16cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x16cc74: 0xc0618da  jal         func_186368
    ctx->pc = 0x16CC74u;
    SET_GPR_U32(ctx, 31, 0x16CC7Cu);
    ctx->pc = 0x16CC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CC74u;
    // 0x16cc78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x16CC74u, 0x16CC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CC7Cu;
label_16cc7c:
    // 0x16cc7c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x16cc7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_16cc80:
    // 0x16cc80: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x16cc80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x16cc84: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x16cc84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16cc88: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x16cc88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16cc8c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x16cc8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16cc90: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x16cc90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16cc94: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x16cc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16cc98: 0xc7b500b0  lwc1        $f21, 0xB0($sp)
    ctx->pc = 0x16cc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16cc9c: 0xc7b400a8  lwc1        $f20, 0xA8($sp)
    ctx->pc = 0x16cc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16cca0: 0x3e00008  jr          $ra
    ctx->pc = 0x16CCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCA0u;
        // 0x16cca4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CCA8u;
}
