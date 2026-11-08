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

// Function: entry_0010f984
// Address: 0x10f984 - 0x10fa10
void entry_0010f984_0x10f984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f984_0x10f984");
#endif

    ctx->pc = 0x10f984u;

    // 0x10f984: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x10f984u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10f988: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x10f988u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x10f98c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x10f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10f990: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x10f990u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10f994: 0x32240008  andi        $a0, $s1, 0x8
    ctx->pc = 0x10f994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
    // 0x10f998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f99c: 0x1480002c  bnez        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x10F99Cu;
    {
        const bool branch_taken_0x10f99c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F99Cu;
        // 0x10f9a0: 0xaf829120  sw          $v0, -0x6EE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f99c) {
            ctx->pc = 0x10FA50u;
            return;
        }
    }
    ctx->pc = 0x10F9A4u;
    // 0x10f9a4: 0x32220010  andi        $v0, $s1, 0x10
    ctx->pc = 0x10f9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
    // 0x10f9a8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x10f9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10f9ac: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x10f9acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x10f9b0: 0x32250040  andi        $a1, $s1, 0x40
    ctx->pc = 0x10f9b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
    // 0x10f9b4: 0x24648000  addiu       $a0, $v1, -0x8000
    ctx->pc = 0x10f9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x10f9b8: 0x85180b  movn        $v1, $a0, $a1
    ctx->pc = 0x10f9b8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x10f9bc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10f9bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10f9c0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10f9c0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10f9c4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10f9c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10f9c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10f9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10f9cc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10f9ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x10f9d0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10f9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x10f9d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10f9d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10f9d8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x10f9d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10f9dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10f9dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10f9e0: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x10f9e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10f9e4: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x10F9E4u;
    {
        const bool branch_taken_0x10f9e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9E4u;
        // 0x10f9e8: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f9e4) {
            ctx->pc = 0x10FA50u;
            return;
        }
    }
    ctx->pc = 0x10F9ECu;
    // 0x10f9ec: 0x8f83911c  lw          $v1, -0x6EE4($gp)
    ctx->pc = 0x10f9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938908)));
    // 0x10f9f0: 0x28620017  slti        $v0, $v1, 0x17
    ctx->pc = 0x10f9f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x10f9f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F9F4u;
    {
        const bool branch_taken_0x10f9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9F4u;
        // 0x10f9f8: 0xaf809120  sw          $zero, -0x6EE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f9f4) {
            ctx->pc = 0x10FA10u;
            return;
        }
    }
    ctx->pc = 0x10F9FCu;
    // 0x10f9fc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x10f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10fa00: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10fa00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10FA04u;
    {
        const bool branch_taken_0x10fa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA04u;
        // 0x10fa08: 0xaf82911c  sw          $v0, -0x6EE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa04) {
            ctx->pc = 0x10FA14u;
            return;
        }
    }
    ctx->pc = 0x10FA0Cu;
    // 0x10fa0c: 0x0  nop
    ctx->pc = 0x10fa0cu;
    // NOP
    ctx->pc = 0x10fa10u;
}
