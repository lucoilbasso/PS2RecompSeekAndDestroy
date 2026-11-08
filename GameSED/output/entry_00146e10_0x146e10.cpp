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

// Function: entry_00146e10
// Address: 0x146e10 - 0x146eac
void entry_00146e10_0x146e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146e10_0x146e10");
#endif

    ctx->pc = 0x146e10u;

    // 0x146e10: 0x25040010  addiu       $a0, $t0, 0x10
    ctx->pc = 0x146e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x146e14: 0xc4e0fffc  lwc1        $f0, -0x4($a3)
    ctx->pc = 0x146e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146e18: 0x25030020  addiu       $v1, $t0, 0x20
    ctx->pc = 0x146e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x146e1c: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x146e1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x146e20: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x146e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x146e24: 0xe5020008  swc1        $f2, 0x8($t0)
    ctx->pc = 0x146e24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x146e28: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x146e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x146e2c: 0xfc8d0008  sd          $t5, 0x8($a0)
    ctx->pc = 0x146e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 13));
    // 0x146e30: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x146e30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x146e34: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x146e34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x146e38: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x146e38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146e3c: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x146e3cu;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x146e40: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x146e40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x146e44: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x146e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x146e48: 0x25040030  addiu       $a0, $t0, 0x30
    ctx->pc = 0x146e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x146e4c: 0xac6b0008  sw          $t3, 0x8($v1)
    ctx->pc = 0x146e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 11));
    // 0x146e50: 0x25030050  addiu       $v1, $t0, 0x50
    ctx->pc = 0x146e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x146e54: 0x25050040  addiu       $a1, $t0, 0x40
    ctx->pc = 0x146e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x146e58: 0x25260010  addiu       $a2, $t1, 0x10
    ctx->pc = 0x146e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x146e5c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x146e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146e60: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x146e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146e64: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x146e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x146e68: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x146e68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x146e6c: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x146e6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x146e70: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x146e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x146e74: 0xfcad0008  sd          $t5, 0x8($a1)
    ctx->pc = 0x146e74u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 13));
    // 0x146e78: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x146e78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x146e7c: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x146e7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x146e80: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x146e80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x146e84: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x146e84u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x146e88: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x146e88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x146e8c: 0x258cfffe  addiu       $t4, $t4, -0x2
    ctx->pc = 0x146e8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967294));
    // 0x146e90: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x146e90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x146e94: 0xac6b0008  sw          $t3, 0x8($v1)
    ctx->pc = 0x146e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 11));
    // 0x146e98: 0x25080060  addiu       $t0, $t0, 0x60
    ctx->pc = 0x146e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x146e9c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x146e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x146ea0: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x146ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x146ea4: 0x581ffc2  bgez        $t4, . + 4 + (-0x3E << 2)
    ctx->pc = 0x146EA4u;
    {
        const bool branch_taken_0x146ea4 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x146EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146EA4u;
        // 0x146ea8: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ea4) {
            ctx->pc = 0x146DB0u;
            return;
        }
    }
    ctx->pc = 0x146EACu;
}
