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

// Function: entry_001540d4
// Address: 0x1540d4 - 0x154148
void entry_001540d4_0x1540d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001540d4_0x1540d4");
#endif

    ctx->pc = 0x1540d4u;

    // 0x1540d4: 0xc6200860  lwc1        $f0, 0x860($s1)
    ctx->pc = 0x1540d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1540d8: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x1540d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1540dc: 0xe6200864  swc1        $f0, 0x864($s1)
    ctx->pc = 0x1540dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2148), bits); }
    // 0x1540e0: 0x8c8201e8  lw          $v0, 0x1E8($a0)
    ctx->pc = 0x1540e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x1540e4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1540e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1540e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1540e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1540ec: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1540ECu;
    {
        const bool branch_taken_0x1540ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1540F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540ECu;
        // 0x1540f0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1540ec) {
            ctx->pc = 0x154254u;
            return;
        }
    }
    ctx->pc = 0x1540F4u;
    // 0x1540f4: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x1540f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1540f8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1540f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1540fc: 0x54400056  bnel        $v0, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x1540FCu;
    {
        const bool branch_taken_0x1540fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1540fc) {
            ctx->pc = 0x154100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1540FCu;
            // 0x154100: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154258u;
            return;
        }
    }
    ctx->pc = 0x154104u;
    // 0x154104: 0x8e230690  lw          $v1, 0x690($s1)
    ctx->pc = 0x154104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x154108: 0x8c840164  lw          $a0, 0x164($a0)
    ctx->pc = 0x154108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 356)));
    // 0x15410c: 0x246301d0  addiu       $v1, $v1, 0x1D0
    ctx->pc = 0x15410cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 464));
    // 0x154110: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x154110u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x154114: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x154114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x154118: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x154118u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15411c: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x15411cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x154120: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x154120u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x154124: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x154124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x154128: 0xc481015c  lwc1        $f1, 0x15C($a0)
    ctx->pc = 0x154128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15412c: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x15412cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
    // 0x154130: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x154130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154134: 0x46011502  mul.s       $f20, $f2, $f1
    ctx->pc = 0x154134u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x154138: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x154138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15413c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x15413Cu;
    {
        const bool branch_taken_0x15413c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x154140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15413Cu;
        // 0x154140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15413c) {
            ctx->pc = 0x154148u;
            return;
        }
    }
    ctx->pc = 0x154144u;
    // 0x154144: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x154144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x154148u;
}
