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

// Function: CoverOpenReaction__9ApcCqpart
// Address: 0x1658b8 - 0x1659ec
void CoverOpenReaction__9ApcCqpart_0x1658b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CoverOpenReaction__9ApcCqpart_0x1658b8");
#endif

    switch (ctx->pc) {
        case 0x165918u: goto label_165918;
        case 0x165938u: goto label_165938;
        case 0x165964u: goto label_165964;
        case 0x165978u: goto label_165978;
        case 0x1659a4u: goto label_1659a4;
        default: break;
    }

    ctx->pc = 0x1658b8u;

    // 0x1658b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1658b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1658bc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1658bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1658c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1658c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1658c4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1658c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1658c8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1658c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1658cc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1658ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1658d0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1658d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1658d4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1658d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1658d8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1658d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1658dc: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1658dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1658e0: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1658e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1658e4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1658e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1658e8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1658e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1658ec: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x1658ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
    // 0x1658f0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1658F0u;
    {
        const bool branch_taken_0x1658f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1658F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1658F0u;
        // 0x1658f4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1658f0) {
            ctx->pc = 0x1659BCu;
            goto label_1659bc;
        }
    }
    ctx->pc = 0x1658F8u;
    // 0x1658f8: 0x18400030  blez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1658F8u;
    {
        const bool branch_taken_0x1658f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1658FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1658F8u;
        // 0x1658fc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1658f8) {
            ctx->pc = 0x1659BCu;
            goto label_1659bc;
        }
    }
    ctx->pc = 0x165900u;
    // 0x165900: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x165900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x165904: 0x265511b0  addiu       $s5, $s2, 0x11B0
    ctx->pc = 0x165904u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4528));
    // 0x165908: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x165908u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16590c: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x16590cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x165910: 0x265411a0  addiu       $s4, $s2, 0x11A0
    ctx->pc = 0x165910u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4512));
    // 0x165914: 0x265311c4  addiu       $s3, $s2, 0x11C4
    ctx->pc = 0x165914u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4548));
label_165918:
    // 0x165918: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x165918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16591c: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x16591cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x165920: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x165920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x165924: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x165924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x165928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16592c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x16592cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165930: 0xc06164c  jal         func_185930
    ctx->pc = 0x165930u;
    SET_GPR_U32(ctx, 31, 0x165938u);
    ctx->pc = 0x165934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165930u;
    // 0x165934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x165930u, 0x165938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165938u;
label_165938:
    // 0x165938: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x165938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16593c: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x16593cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x165940: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x165940u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x165944: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x165944u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x165948: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x165948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16594c: 0xc78d8364  lwc1        $f13, -0x7C9C($gp)
    ctx->pc = 0x16594cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x165950: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x165950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165958: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x165958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16595c: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x16595Cu;
    SET_GPR_U32(ctx, 31, 0x165964u);
    ctx->pc = 0x165960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16595Cu;
    // 0x165960: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x16595Cu, 0x165964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165964u;
label_165964:
    // 0x165964: 0xaf9e9074  sw          $fp, -0x6F8C($gp)
    ctx->pc = 0x165964u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 30));
    // 0x165968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16596c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16596cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165970: 0xc0693b2  jal         func_1A4EC8
    ctx->pc = 0x165970u;
    SET_GPR_U32(ctx, 31, 0x165978u);
    ctx->pc = 0x165974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165970u;
    // 0x165974: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4EC8u, 0x165970u, 0x165978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165978u;
label_165978:
    // 0x165978: 0xaf9e9074  sw          $fp, -0x6F8C($gp)
    ctx->pc = 0x165978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 30));
    // 0x16597c: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x16597cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x165980: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x165980u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x165984: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x165984u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x165988: 0xfac20000  sqc2        $vf2, 0x0($s6)
    ctx->pc = 0x165988u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16598c: 0xc78c8368  lwc1        $f12, -0x7C98($gp)
    ctx->pc = 0x16598cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x165990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165994: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x165994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165998: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x165998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16599c: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x16599Cu;
    SET_GPR_U32(ctx, 31, 0x1659A4u);
    ctx->pc = 0x1659A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16599Cu;
    // 0x1659a0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x16599Cu, 0x1659A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1659A4u;
label_1659a4:
    // 0x1659a4: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x1659a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
    // 0x1659a8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1659a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1659ac: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x1659acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1659b0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1659B0u;
    {
        const bool branch_taken_0x1659b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1659B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659B0u;
        // 0x1659b4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1659b0) {
            ctx->pc = 0x165918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165918;
        }
    }
    ctx->pc = 0x1659B8u;
    // 0x1659b8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1659b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1659bc:
    // 0x1659bc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1659bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1659c0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1659c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1659c4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1659c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1659c8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1659c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1659cc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1659ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1659d0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1659d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1659d4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1659d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1659d8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1659d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1659dc: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1659dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1659e0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1659e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1659e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1659E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1659E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659E4u;
        // 0x1659e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1659E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1659ECu;
}
