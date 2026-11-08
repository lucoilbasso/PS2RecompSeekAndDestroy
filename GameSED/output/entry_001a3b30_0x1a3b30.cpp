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

// Function: entry_001a3b30
// Address: 0x1a3b30 - 0x1a3bb8
void entry_001a3b30_0x1a3b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3b30_0x1a3b30");
#endif

    ctx->pc = 0x1a3b30u;

    // 0x1a3b30: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x1a3b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1a3b34: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x1a3b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x1a3b38: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1a3b38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a3b3c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1a3b3cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a3b40: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1a3b40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a3b44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3b48: 0x94a20030  lhu         $v0, 0x30($a1)
    ctx->pc = 0x1a3b48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1a3b4c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a3b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1a3b50: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1a3b50u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1a3b54: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1a3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1a3b58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a3b5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a3b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a3b60: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x1a3b60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a3b64: 0xa4a20032  sh          $v0, 0x32($a1)
    ctx->pc = 0x1a3b64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a3b68: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1a3b68u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1a3b6c: 0x26630040  addiu       $v1, $s3, 0x40
    ctx->pc = 0x1a3b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1a3b70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a3b70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3b74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3b78: 0x0  nop
    ctx->pc = 0x1a3b78u;
    // NOP
    // 0x1a3b7c: 0x0  nop
    ctx->pc = 0x1a3b7cu;
    // NOP
    // 0x1a3b80: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a3b80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a3b84: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a3b84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a3b88: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x1a3b88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a3b8c: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1a3b8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a3b90: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1a3b90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a3b94: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a3b94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a3b98: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1a3b98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a3b9c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1a3b9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1a3ba0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1a3ba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a3ba4: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a3ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a3ba8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a3ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3bac: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1a3bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a3bb0: 0xc068b62  jal         func_1A2D88
    ctx->pc = 0x1A3BB0u;
    SET_GPR_U32(ctx, 31, 0x1A3BB8u);
    ctx->pc = 0x1A3BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3BB0u;
    // 0x1a3bb4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2D88u, 0x1A3BB0u, 0x1A3BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3BB8u;
}
