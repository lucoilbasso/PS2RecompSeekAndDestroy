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

// Function: EffectSendRyuuExplo__17ST_EffectParticlePUiUiP20ST_ParticleGenerator
// Address: 0x120130 - 0x120284
void EffectSendRyuuExplo__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x120130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSendRyuuExplo__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x120130");
#endif

    switch (ctx->pc) {
        case 0x120168u: goto label_120168;
        case 0x120208u: goto label_120208;
        default: break;
    }

    ctx->pc = 0x120130u;

    // 0x120130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x120130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x120134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x120134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120138: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x120138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12013c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12013cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x120140: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x120140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x120144: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x120144u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x120148: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x120148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12014c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12014cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x120150: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x120150u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x120154: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x120154u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x120158: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x120158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12015c: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x12015cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x120160: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x120160u;
    SET_GPR_U32(ctx, 31, 0x120168u);
    ctx->pc = 0x120164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120160u;
    // 0x120164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x120160u, 0x120168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120168u;
label_120168:
    // 0x120168: 0x8e05011c  lw          $a1, 0x11C($s0)
    ctx->pc = 0x120168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x12016c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x12016cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x120170: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120174: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x120174u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x120178: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x120178u;
    {
        const bool branch_taken_0x120178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x120178) {
            ctx->pc = 0x12017Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120178u;
            // 0x12017c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120180u;
            goto label_120180;
        }
    }
    ctx->pc = 0x120180u;
label_120180:
    // 0x120180: 0x2010  mfhi        $a0
    ctx->pc = 0x120180u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x120184: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x120184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x120188: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x120188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12018c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12018cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x120190: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x120190u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
    // 0x120194: 0x250858c0  addiu       $t0, $t0, 0x58C0
    ctx->pc = 0x120194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22720));
    // 0x120198: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x120198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x12019c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12019Cu;
    {
        const bool branch_taken_0x12019c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1201A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12019Cu;
        // 0x1201a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12019c) {
            ctx->pc = 0x1201B0u;
            goto label_1201b0;
        }
    }
    ctx->pc = 0x1201A4u;
    // 0x1201a4: 0xc7808094  lwc1        $f0, -0x7F6C($gp)
    ctx->pc = 0x1201a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1201a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1201A8u;
    {
        const bool branch_taken_0x1201a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1201ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201A8u;
        // 0x1201ac: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1201a8) {
            ctx->pc = 0x1201F0u;
            goto label_1201f0;
        }
    }
    ctx->pc = 0x1201B0u;
label_1201b0:
    // 0x1201b0: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1201B0u;
    {
        const bool branch_taken_0x1201b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1201B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201B0u;
        // 0x1201b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1201b0) {
            ctx->pc = 0x1201C8u;
            goto label_1201c8;
        }
    }
    ctx->pc = 0x1201B8u;
    // 0x1201b8: 0xc7808098  lwc1        $f0, -0x7F68($gp)
    ctx->pc = 0x1201b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1201bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1201BCu;
    {
        const bool branch_taken_0x1201bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1201C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201BCu;
        // 0x1201c0: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1201bc) {
            ctx->pc = 0x1201F0u;
            goto label_1201f0;
        }
    }
    ctx->pc = 0x1201C4u;
    // 0x1201c4: 0x0  nop
    ctx->pc = 0x1201c4u;
    // NOP
label_1201c8:
    // 0x1201c8: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1201C8u;
    {
        const bool branch_taken_0x1201c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1201CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201C8u;
        // 0x1201cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1201c8) {
            ctx->pc = 0x1201E0u;
            goto label_1201e0;
        }
    }
    ctx->pc = 0x1201D0u;
    // 0x1201d0: 0xc780809c  lwc1        $f0, -0x7F64($gp)
    ctx->pc = 0x1201d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1201d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1201D4u;
    {
        const bool branch_taken_0x1201d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1201D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201D4u;
        // 0x1201d8: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1201d4) {
            ctx->pc = 0x1201F0u;
            goto label_1201f0;
        }
    }
    ctx->pc = 0x1201DCu;
    // 0x1201dc: 0x0  nop
    ctx->pc = 0x1201dcu;
    // NOP
label_1201e0:
    // 0x1201e0: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1201E0u;
    {
        const bool branch_taken_0x1201e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1201E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201E0u;
        // 0x1201e4: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1201e0) {
            ctx->pc = 0x1201F4u;
            goto label_1201f4;
        }
    }
    ctx->pc = 0x1201E8u;
    // 0x1201e8: 0xc78080a0  lwc1        $f0, -0x7F60($gp)
    ctx->pc = 0x1201e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1201ec: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1201ecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1201f0:
    // 0x1201f0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1201f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_1201f4:
    // 0x1201f4: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1201f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1201f8: 0x244a0790  addiu       $t2, $v0, 0x790
    ctx->pc = 0x1201f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x1201fc: 0x24697250  addiu       $t1, $v1, 0x7250
    ctx->pc = 0x1201fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 29264));
    // 0x120200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120204: 0x0  nop
    ctx->pc = 0x120204u;
    // NOP
label_120208:
    // 0x120208: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x120208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12020c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12020cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x120210: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x120210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x120214: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x120214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x120218: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x120218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12021c: 0x28a6000a  slti        $a2, $a1, 0xA
    ctx->pc = 0x12021cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x120220: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x120220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120224: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x120224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x120228: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x120228u;
    {
        const bool branch_taken_0x120228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120228u;
        // 0x12022c: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120228) {
            ctx->pc = 0x12026Cu;
            goto label_12026c;
        }
    }
    ctx->pc = 0x120230u;
    // 0x120230: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x120230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120234: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x120234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x120238: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x120238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x12023c: 0xc4820078  lwc1        $f2, 0x78($a0)
    ctx->pc = 0x12023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x120240: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x120240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x120244: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x120244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x120248: 0x227102b  sltu        $v0, $s1, $a3
    ctx->pc = 0x120248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x12024c: 0x2380b  movn        $a3, $zero, $v0
    ctx->pc = 0x12024cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x120250: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x120250u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x120254: 0xe4810070  swc1        $f1, 0x70($a0)
    ctx->pc = 0x120254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x120258: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x120258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12025c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x12025cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x120260: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x120260u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x120264: 0x14c0ffe8  bnez        $a2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x120264u;
    {
        const bool branch_taken_0x120264 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x120268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120264u;
        // 0x120268: 0xe4820078  swc1        $f2, 0x78($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120264) {
            ctx->pc = 0x120208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120208;
        }
    }
    ctx->pc = 0x12026Cu;
label_12026c:
    // 0x12026c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12026cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120270: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x120270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x120274: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x120274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120278: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x120278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12027c: 0x3e00008  jr          $ra
    ctx->pc = 0x12027Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12027Cu;
        // 0x120280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12027Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120284u;
}
