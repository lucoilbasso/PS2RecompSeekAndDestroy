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

// Function: SetRotMatrixX__9FMatrix32i
// Address: 0x19ebd8 - 0x19ec44
void SetRotMatrixX__9FMatrix32i_0x19ebd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRotMatrixX__9FMatrix32i_0x19ebd8");
#endif

    ctx->pc = 0x19ebd8u;

    // 0x19ebd8: 0x24a22000  addiu       $v0, $a1, 0x2000
    ctx->pc = 0x19ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8192));
    // 0x19ebdc: 0x30a57fff  andi        $a1, $a1, 0x7FFF
    ctx->pc = 0x19ebdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x19ebe0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19ebe4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x19ebe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x19ebe8: 0x2463f640  addiu       $v1, $v1, -0x9C0
    ctx->pc = 0x19ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964800));
    // 0x19ebec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x19ebecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19ebf0: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x19ebf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x19ebf4: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x19ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x19ebf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19ebfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ec00: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x19ec00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x19ec04: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x19ec04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ec08: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19ec08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ec0c: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x19ec0cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x19ec10: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x19ec10u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19ec14: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x19ec14u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19ec18: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x19ec18u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19ec1c: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x19ec1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19ec20: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x19ec20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19ec24: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x19ec24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19ec28: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x19ec28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19ec2c: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x19ec2cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x19ec30: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x19ec30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x19ec34: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x19ec34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x19ec38: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x19ec38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x19ec3c: 0x3e00008  jr          $ra
    ctx->pc = 0x19EC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC3Cu;
        // 0x19ec40: 0xe4820024  swc1        $f2, 0x24($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EC44u;
}
