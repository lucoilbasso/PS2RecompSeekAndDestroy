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

// Function: entry_0016e240
// Address: 0x16e240 - 0x16e2b4
void entry_0016e240_0x16e240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e240_0x16e240");
#endif

    switch (ctx->pc) {
        case 0x16e248u: goto label_16e248;
        default: break;
    }

    ctx->pc = 0x16e240u;

    // 0x16e240: 0xc061422  jal         func_185088
    ctx->pc = 0x16E240u;
    SET_GPR_U32(ctx, 31, 0x16E248u);
    ctx->pc = 0x16E244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E240u;
    // 0x16e244: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x16E240u, 0x16E248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E248u;
label_16e248:
    // 0x16e248: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x16e248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x16e24c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16e24cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e250: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x16e250u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16e254: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x16e254u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16e258: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x16e258u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x16e25c: 0xfa640000  sqc2        $vf4, 0x0($s3)
    ctx->pc = 0x16e25cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16e260: 0xfa650010  sqc2        $vf5, 0x10($s3)
    ctx->pc = 0x16e260u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16e264: 0xfa660020  sqc2        $vf6, 0x20($s3)
    ctx->pc = 0x16e264u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16e268: 0xfa670030  sqc2        $vf7, 0x30($s3)
    ctx->pc = 0x16e268u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x16e26c: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x16e26cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x16e270: 0xe7b40044  swc1        $f20, 0x44($sp)
    ctx->pc = 0x16e270u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x16e274: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x16e274u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x16e278: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x16e278u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e27c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x16e27cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16e280: 0xda650010  lqc2        $vf5, 0x10($s3)
    ctx->pc = 0x16e280u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x16e284: 0xda660020  lqc2        $vf6, 0x20($s3)
    ctx->pc = 0x16e284u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x16e288: 0xda670030  lqc2        $vf7, 0x30($s3)
    ctx->pc = 0x16e288u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x16e28c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16e28cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16e290: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16e290u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16e294: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16e294u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16e298: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x16e298u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16e29c: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x16e29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x16e2a0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x16e2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e2a4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16e2a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e2a8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16E2A8u;
    {
        const bool branch_taken_0x16e2a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2A8u;
        // 0x16e2ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e2a8) {
            ctx->pc = 0x16E2B4u;
            return;
        }
    }
    ctx->pc = 0x16E2B0u;
    // 0x16e2b0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x16e2b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16e2b4u;
}
