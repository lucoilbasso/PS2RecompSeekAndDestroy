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

// Function: entry_001a3e48
// Address: 0x1a3e48 - 0x1a3ec8
void entry_001a3e48_0x1a3e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3e48_0x1a3e48");
#endif

    ctx->pc = 0x1a3e48u;

    // 0x1a3e48: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1a3e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a3e4c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1a3e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1a3e50: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1a3e50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a3e54: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1a3e54u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a3e58: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1a3e58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a3e5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3e60: 0x94a20030  lhu         $v0, 0x30($a1)
    ctx->pc = 0x1a3e60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1a3e64: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a3e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1a3e68: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1a3e68u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1a3e6c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1a3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1a3e70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a3e74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a3e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a3e78: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x1a3e78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a3e7c: 0xa4a20032  sh          $v0, 0x32($a1)
    ctx->pc = 0x1a3e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a3e80: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1a3e80u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1a3e84: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x1a3e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1a3e88: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a3e88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3e8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3e90: 0x0  nop
    ctx->pc = 0x1a3e90u;
    // NOP
    // 0x1a3e94: 0x0  nop
    ctx->pc = 0x1a3e94u;
    // NOP
    // 0x1a3e98: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a3e98u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a3e9c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a3e9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a3ea0: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x1a3ea0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a3ea4: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1a3ea4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a3ea8: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1a3ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a3eac: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a3eacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a3eb0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1a3eb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a3eb4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1a3eb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1a3eb8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1a3eb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a3ebc: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a3ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a3ec0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3EC0u;
    {
        const bool branch_taken_0x1a3ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3ec0) {
            ctx->pc = 0x1A3ED0u;
            return;
        }
    }
    ctx->pc = 0x1A3EC8u;
}
