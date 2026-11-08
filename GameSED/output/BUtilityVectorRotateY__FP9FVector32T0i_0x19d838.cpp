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

// Function: BUtilityVectorRotateY__FP9FVector32T0i
// Address: 0x19d838 - 0x19d940
void BUtilityVectorRotateY__FP9FVector32T0i_0x19d838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityVectorRotateY__FP9FVector32T0i_0x19d838");
#endif

    ctx->pc = 0x19d838u;

    // 0x19d838: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19d838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19d83c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x19d83cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d840: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x19d840u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19d844: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x19d844u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x19d848: 0x30c67fff  andi        $a2, $a2, 0x7FFF
    ctx->pc = 0x19d848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x19d84c: 0x10c00039  beqz        $a2, . + 4 + (0x39 << 2)
    ctx->pc = 0x19D84Cu;
    {
        const bool branch_taken_0x19d84c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D84Cu;
        // 0x19d850: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d84c) {
            ctx->pc = 0x19D934u;
            goto label_19d934;
        }
    }
    ctx->pc = 0x19D854u;
    // 0x19d854: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19D854u;
    {
        const bool branch_taken_0x19d854 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x19D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D854u;
        // 0x19d858: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d854) {
            ctx->pc = 0x19D878u;
            goto label_19d878;
        }
    }
    ctx->pc = 0x19D85Cu;
    // 0x19d85c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x19d85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d860: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x19d860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d864: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19d864u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19d868: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x19d868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x19d86c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x19D86Cu;
    {
        const bool branch_taken_0x19d86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D86Cu;
        // 0x19d870: 0xe4e00008  swc1        $f0, 0x8($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d86c) {
            ctx->pc = 0x19D934u;
            goto label_19d934;
        }
    }
    ctx->pc = 0x19D874u;
    // 0x19d874: 0x0  nop
    ctx->pc = 0x19d874u;
    // NOP
label_19d878:
    // 0x19d878: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19D878u;
    {
        const bool branch_taken_0x19d878 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x19D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D878u;
        // 0x19d87c: 0x24026000  addiu       $v0, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d878) {
            ctx->pc = 0x19D8A0u;
            goto label_19d8a0;
        }
    }
    ctx->pc = 0x19D880u;
    // 0x19d880: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x19d880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d884: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19d884u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19d888: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x19d888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x19d88c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x19d88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d890: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x19d890u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x19d894: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x19D894u;
    {
        const bool branch_taken_0x19d894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D894u;
        // 0x19d898: 0xe4e10008  swc1        $f1, 0x8($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d894) {
            ctx->pc = 0x19D934u;
            goto label_19d934;
        }
    }
    ctx->pc = 0x19D89Cu;
    // 0x19d89c: 0x0  nop
    ctx->pc = 0x19d89cu;
    // NOP
label_19d8a0:
    // 0x19d8a0: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D8A0u;
    {
        const bool branch_taken_0x19d8a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x19D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D8A0u;
        // 0x19d8a4: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d8a0) {
            ctx->pc = 0x19D8C0u;
            goto label_19d8c0;
        }
    }
    ctx->pc = 0x19D8A8u;
    // 0x19d8a8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x19d8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d8ac: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x19d8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d8b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19d8b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19d8b4: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x19d8b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x19d8b8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19D8B8u;
    {
        const bool branch_taken_0x19d8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D8B8u;
        // 0x19d8bc: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d8b8) {
            ctx->pc = 0x19D934u;
            goto label_19d934;
        }
    }
    ctx->pc = 0x19D8C0u;
label_19d8c0:
    // 0x19d8c0: 0x30c37fff  andi        $v1, $a2, 0x7FFF
    ctx->pc = 0x19d8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x19d8c4: 0x2484f640  addiu       $a0, $a0, -0x9C0
    ctx->pc = 0x19d8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964800));
    // 0x19d8c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d8cc: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x19d8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x19d8d0: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x19d8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x19d8d4: 0x24c22000  addiu       $v0, $a2, 0x2000
    ctx->pc = 0x19d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8192));
    // 0x19d8d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19d8dc: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x19d8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x19d8e0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19d8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d8e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d8e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19d8ec: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x19d8ecu;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x19d8f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19d8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d8f4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x19d8f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19d8f8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x19d8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x19d8fc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19d8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19d900: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x19d900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19d904: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x19d904u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d908: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x19d908u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d90c: 0x4be9033c  vmove.xyzw  $vf9, $vf0
    ctx->pc = 0x19d90cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x19d910: 0x4be64b3d  vmr32.xyzw  $vf6, $vf9
    ctx->pc = 0x19d910u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19d914: 0x4be5333d  vmr32.xyzw  $vf5, $vf6
    ctx->pc = 0x19d914u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19d918: 0x4aa42b3d  vmr32.yw    $vf4, $vf5
    ctx->pc = 0x19d918u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19d91c: 0x4b461b3c  vmove.xz    $vf6, $vf3
    ctx->pc = 0x19d91cu;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x19d920: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x19d920u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19d924: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x19d924u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x19d928: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x19d928u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x19d92c: 0x4bc8324a  vmaddz.xyz  $vf9, $vf6, $vf8z
    ctx->pc = 0x19d92cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x19d930: 0xf8e90000  sqc2        $vf9, 0x0($a3)
    ctx->pc = 0x19d930u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[9]));
label_19d934:
    // 0x19d934: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x19d934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d938: 0x3e00008  jr          $ra
    ctx->pc = 0x19D938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D938u;
        // 0x19d93c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D940u;
}
