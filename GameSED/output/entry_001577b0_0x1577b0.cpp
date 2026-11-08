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

// Function: entry_001577b0
// Address: 0x1577b0 - 0x157804
void entry_001577b0_0x1577b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001577b0_0x1577b0");
#endif

    ctx->pc = 0x1577b0u;

    // 0x1577b0: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x1577b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1577b4: 0x24850070  addiu       $a1, $a0, 0x70
    ctx->pc = 0x1577b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1577b8: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x1577b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x1577bc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1577bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1577c0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1577c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1577c4: 0xa0820020  sb          $v0, 0x20($a0)
    ctx->pc = 0x1577c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x1577c8: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x1577c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x1577cc: 0xc4e000e0  lwc1        $f0, 0xE0($a3)
    ctx->pc = 0x1577ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1577d0: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x1577d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x1577d4: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x1577d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x1577d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1577d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1577dc: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1577dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1577e0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1577e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1577e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1577e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1577e8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1577e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1577ec: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1577ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1577f0: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1577f0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1577f4: 0x8d040044  lw          $a0, 0x44($t0)
    ctx->pc = 0x1577f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x1577f8: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x1577f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1577fc: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1577fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x157800: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x157800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    ctx->pc = 0x157804u;
}
