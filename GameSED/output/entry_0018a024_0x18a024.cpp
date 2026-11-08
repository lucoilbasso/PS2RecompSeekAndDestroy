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

// Function: entry_0018a024
// Address: 0x18a024 - 0x18a0a4
void entry_0018a024_0x18a024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a024_0x18a024");
#endif

    ctx->pc = 0x18a024u;

    // 0x18a024: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a028: 0x94a70006  lhu         $a3, 0x6($a1)
    ctx->pc = 0x18a028u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x18a02c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x18a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18a030: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x18a030u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x18a034: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x18a034u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x18a038: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x18a038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x18a03c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x18a03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x18a040: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x18a040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x18a044: 0xd9080000  lqc2        $vf8, 0x0($t0)
    ctx->pc = 0x18a044u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18a048: 0xd8eb0000  lqc2        $vf11, 0x0($a3)
    ctx->pc = 0x18a048u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18a04c: 0xdbb10000  lqc2        $vf17, 0x0($sp)
    ctx->pc = 0x18a04cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a050: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x18a050u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x18a054: 0x4bc85b2c  vsub.xyz    $vf12, $vf11, $vf8
    ctx->pc = 0x18a054u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18a058: 0x4be9433c  vmove.xyzw  $vf9, $vf8
    ctx->pc = 0x18a058u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[8], _mm_castsi128_ps(mask)); }
    // 0x18a05c: 0x4bea433c  vmove.xyzw  $vf10, $vf8
    ctx->pc = 0x18a05cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], ctx->vu0_vf[8], _mm_castsi128_ps(mask)); }
    // 0x18a060: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18a060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18a064: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x18a064u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18a068: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x18a068u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a06c: 0x4a0002ff  vnop
    ctx->pc = 0x18a06cu;
    // NOP operation, no action needed for VU0
    // 0x18a070: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x18a070u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x18a074: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x18a074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18a078: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x18A078u;
    {
        const bool branch_taken_0x18a078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a078) {
            ctx->pc = 0x18A0A4u;
            return;
        }
    }
    ctx->pc = 0x18A080u;
    // 0x18a080: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x18a080u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x18a084: 0x1540000c  bnez        $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x18A084u;
    {
        const bool branch_taken_0x18a084 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a084) {
            ctx->pc = 0x18A0B8u;
            return;
        }
    }
    ctx->pc = 0x18A08Cu;
    // 0x18a08c: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x18a08cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x18a090: 0x1560000e  bnez        $t3, . + 4 + (0xE << 2)
    ctx->pc = 0x18A090u;
    {
        const bool branch_taken_0x18a090 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a090) {
            ctx->pc = 0x18A0CCu;
            return;
        }
    }
    ctx->pc = 0x18A098u;
    // 0x18a098: 0x0  nop
    ctx->pc = 0x18a098u;
    // NOP
    // 0x18a09c: 0x806287b  j           func_18A1EC
    ctx->pc = 0x18A09Cu;
    ctx->pc = 0x18A1ECu;
    _skip_pbuf2_0x18a1ec(rdram, ctx, runtime); return;
    ctx->pc = 0x18A0A4u;
}
