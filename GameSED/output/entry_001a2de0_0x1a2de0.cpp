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

// Function: entry_001a2de0
// Address: 0x1a2de0 - 0x1a2e64
void entry_001a2de0_0x1a2de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2de0_0x1a2de0");
#endif

    ctx->pc = 0x1a2de0u;

    // 0x1a2de0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a2de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1a2de4: 0x5642001f  bnel        $s2, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A2DE4u;
    {
        const bool branch_taken_0x1a2de4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2de4) {
            ctx->pc = 0x1A2DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2DE4u;
            // 0x1a2de8: 0x86020032  lh          $v0, 0x32($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2E64u;
            return;
        }
    }
    ctx->pc = 0x1A2DECu;
    // 0x1a2dec: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1a2decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a2df0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1a2df0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a2df4: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1a2df4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a2df8: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a2df8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a2dfc: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x1a2dfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2e00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2e04: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a2e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1a2e08: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1a2e08u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1a2e0c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1a2e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1a2e10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a2e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a2e14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a2e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a2e18: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x1a2e18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a2e1c: 0xa6020032  sh          $v0, 0x32($s0)
    ctx->pc = 0x1a2e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a2e20: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1a2e20u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1a2e24: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1a2e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a2e28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a2e28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2e2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a2e2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a2e30: 0x0  nop
    ctx->pc = 0x1a2e30u;
    // NOP
    // 0x1a2e34: 0x0  nop
    ctx->pc = 0x1a2e34u;
    // NOP
    // 0x1a2e38: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a2e38u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a2e3c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1a2e3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a2e40: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x1a2e40u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a2e44: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1a2e44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a2e48: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1a2e48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a2e4c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a2e4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a2e50: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1a2e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a2e54: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1a2e54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1a2e58: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1a2e58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a2e5c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a2e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a2e60: 0x86020032  lh          $v0, 0x32($s0)
    ctx->pc = 0x1a2e60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    ctx->pc = 0x1a2e64u;
}
