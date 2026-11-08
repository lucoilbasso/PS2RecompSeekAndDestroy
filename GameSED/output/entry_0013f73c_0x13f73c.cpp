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

// Function: entry_0013f73c
// Address: 0x13f73c - 0x13f808
void entry_0013f73c_0x13f73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f73c_0x13f73c");
#endif

    switch (ctx->pc) {
        case 0x13f774u: goto label_13f774;
        case 0x13f7dcu: goto label_13f7dc;
        case 0x13f800u: goto label_13f800;
        default: break;
    }

    ctx->pc = 0x13f73cu;

    // 0x13f73c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13f740: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x13f740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x13f744: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x13F744u;
    {
        const bool branch_taken_0x13f744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f744) {
            ctx->pc = 0x13F748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F744u;
            // 0x13f748: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F808u;
            return;
        }
    }
    ctx->pc = 0x13F74Cu;
    // 0x13f74c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x13f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x13f750: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13f750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f754: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13f754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f758: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13f758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13f75c: 0x38420126  xori        $v0, $v0, 0x126
    ctx->pc = 0x13f75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)294);
    // 0x13f760: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x13f760u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x13f764: 0x52000028  beql        $s0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x13F764u;
    {
        const bool branch_taken_0x13f764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f764) {
            ctx->pc = 0x13F768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F764u;
            // 0x13f768: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F808u;
            return;
        }
    }
    ctx->pc = 0x13F76Cu;
    // 0x13f76c: 0xc0503e6  jal         func_140F98
    ctx->pc = 0x13F76Cu;
    SET_GPR_U32(ctx, 31, 0x13F774u);
    ctx->pc = 0x13F770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F76Cu;
    // 0x13f770: 0x262400c0  addiu       $a0, $s1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F98u, 0x13F76Cu, 0x13F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F774u;
label_13f774:
    // 0x13f774: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x13f774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13f778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f77c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x13f77cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f780: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x13f780u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f784: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x13f784u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13f788: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x13f788u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13f78c: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x13f78cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13f790: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x13f790u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13f794: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13f794u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x13f798: 0x4a0003bf  vwaitq
    ctx->pc = 0x13f798u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13f79c: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x13f79cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13f7a0: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x13f7a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x13f7a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13f7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f7a8: 0xc6020154  lwc1        $f2, 0x154($s0)
    ctx->pc = 0x13f7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13f7ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13f7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13f7b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f7b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f7b4: 0xc601020c  lwc1        $f1, 0x20C($s0)
    ctx->pc = 0x13f7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13f7b8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x13f7b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13f7bc: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x13f7bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x13f7c0: 0xc6000210  lwc1        $f0, 0x210($s0)
    ctx->pc = 0x13f7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f7c4: 0x46016328  max.s       $f12, $f12, $f1
    ctx->pc = 0x13f7c4u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[1]);
    // 0x13f7c8: 0x46006329  min.s       $f12, $f12, $f0
    ctx->pc = 0x13f7c8u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[0]);
    // 0x13f7cc: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x13f7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x13f7d0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x13f7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13f7d4: 0xc067ba2  jal         func_19EE88
    ctx->pc = 0x13F7D4u;
    SET_GPR_U32(ctx, 31, 0x13F7DCu);
    ctx->pc = 0x13F7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F7D4u;
    // 0x13f7d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE88u, 0x13F7D4u, 0x13F7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F7DCu;
label_13f7dc:
    // 0x13f7dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13f7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13f7e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13f7e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f7e4: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x13f7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13f7e8: 0x0  nop
    ctx->pc = 0x13f7e8u;
    // NOP
    // 0x13f7ec: 0x0  nop
    ctx->pc = 0x13f7ecu;
    // NOP
    // 0x13f7f0: 0x460c0843  div.s       $f1, $f1, $f12
    ctx->pc = 0x13f7f0u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
    // 0x13f7f4: 0xe60c0154  swc1        $f12, 0x154($s0)
    ctx->pc = 0x13f7f4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x13f7f8: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x13F7F8u;
    SET_GPR_U32(ctx, 31, 0x13F800u);
    ctx->pc = 0x13F7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F7F8u;
    // 0x13f7fc: 0xe601015c  swc1        $f1, 0x15C($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x13F7F8u, 0x13F800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F800u;
label_13f800:
    // 0x13f800: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x13f800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x13f804: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x13f804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->pc = 0x13f808u;
}
