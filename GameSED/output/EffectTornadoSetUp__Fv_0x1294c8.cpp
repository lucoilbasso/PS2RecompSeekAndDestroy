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

// Function: EffectTornadoSetUp__Fv
// Address: 0x1294c8 - 0x1295ac
void EffectTornadoSetUp__Fv_0x1294c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectTornadoSetUp__Fv_0x1294c8");
#endif

    switch (ctx->pc) {
        case 0x129528u: goto label_129528;
        case 0x129534u: goto label_129534;
        default: break;
    }

    ctx->pc = 0x1294c8u;

    // 0x1294c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1294c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1294cc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1294ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1294d0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1294d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1294d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1294d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1294d8: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1294d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x1294dc: 0x24425d50  addiu       $v0, $v0, 0x5D50
    ctx->pc = 0x1294dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23888));
    // 0x1294e0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1294e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1294e4: 0x24120027  addiu       $s2, $zero, 0x27
    ctx->pc = 0x1294e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1294e8: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1294e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x1294ec: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x1294ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1294f0: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1294f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1294f4: 0x24147fff  addiu       $s4, $zero, 0x7FFF
    ctx->pc = 0x1294f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1294f8: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x1294f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x1294fc: 0x24150888  addiu       $s5, $zero, 0x888
    ctx->pc = 0x1294fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2184));
    // 0x129500: 0xe7b40088  swc1        $f20, 0x88($sp)
    ctx->pc = 0x129500u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x129504: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x129504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x129508: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x129508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x12950c: 0x247191c0  addiu       $s1, $v1, -0x6E40
    ctx->pc = 0x12950cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939072));
    // 0x129510: 0xc794810c  lwc1        $f20, -0x7EF4($gp)
    ctx->pc = 0x129510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x129514: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x129514u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x255D58u));
    // 0x129518: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x129518u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x255D50u));
    // 0x12951c: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x12951cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x129520: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x129520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x129524: 0x0  nop
    ctx->pc = 0x129524u;
    // NOP
label_129528:
    // 0x129528: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x129528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12952c: 0xc067b12  jal         func_19EC48
    ctx->pc = 0x12952Cu;
    SET_GPR_U32(ctx, 31, 0x129534u);
    ctx->pc = 0x129530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12952Cu;
    // 0x129530: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC48u, 0x12952Cu, 0x129534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129534u;
label_129534:
    // 0x129534: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x129534u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129538: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x129538u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12953c: 0xda650010  lqc2        $vf5, 0x10($s3)
    ctx->pc = 0x12953cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x129540: 0xda660020  lqc2        $vf6, 0x20($s3)
    ctx->pc = 0x129540u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x129544: 0xda670030  lqc2        $vf7, 0x30($s3)
    ctx->pc = 0x129544u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x129548: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x129548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12954c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12954cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x129550: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x129550u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x129554: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x129554u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x129558: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x129558u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12955c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x12955cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129560: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x129560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x129564: 0x290182a  slt         $v1, $s4, $s0
    ctx->pc = 0x129564u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x129568: 0x26028000  addiu       $v0, $s0, -0x8000
    ctx->pc = 0x129568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934528));
    // 0x12956c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x12956cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x129570: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x129570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x129574: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x129574u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x129578: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x129578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12957c: 0x641ffea  bgez        $s2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x12957Cu;
    {
        const bool branch_taken_0x12957c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x129580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12957Cu;
        // 0x129580: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12957c) {
            ctx->pc = 0x129528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129528;
        }
    }
    ctx->pc = 0x129584u;
    // 0x129584: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x129584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129588: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x129588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12958c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x12958cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x129590: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x129590u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x129594: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x129594u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x129598: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x129598u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12959c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x12959cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1295a0: 0xc7b40088  lwc1        $f20, 0x88($sp)
    ctx->pc = 0x1295a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1295a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1295A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1295A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295A4u;
        // 0x1295a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1295A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1295ACu;
}
