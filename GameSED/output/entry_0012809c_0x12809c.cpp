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

// Function: entry_0012809c
// Address: 0x12809c - 0x128120
void entry_0012809c_0x12809c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012809c_0x12809c");
#endif

    ctx->pc = 0x12809cu;

    // 0x12809c: 0x96050044  lhu         $a1, 0x44($s0)
    ctx->pc = 0x12809cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1280a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1280a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1280a4: 0x86070008  lh          $a3, 0x8($s0)
    ctx->pc = 0x1280a4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1280a8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1280a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1280ac: 0x86060004  lh          $a2, 0x4($s0)
    ctx->pc = 0x1280acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1280b0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1280b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1280b4: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1280b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1280b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1280b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1280bc: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1280bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1280c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1280c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1280c4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1280c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1280c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1280c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1280cc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1280ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1280d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1280d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1280d4: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x1280d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x1280d8: 0x24217e60  addiu       $at, $at, 0x7E60
    ctx->pc = 0x1280d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32352));
    // 0x1280dc: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1280dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1280e0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1280e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1280e4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1280e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1280e8: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1280e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1280ec: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1280ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1280f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1280f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1280f4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1280f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1280f8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1280f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1280fc: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1280fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x128100: 0x26230080  addiu       $v1, $s1, 0x80
    ctx->pc = 0x128100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x128104: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x128104u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128108: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x128108u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12810c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x12810cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x128110: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x128110u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x128114: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x128114u;
    {
        const bool branch_taken_0x128114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128114u;
        // 0x128118: 0xc6010020  lwc1        $f1, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128114) {
            ctx->pc = 0x1281C0u;
            return;
        }
    }
    ctx->pc = 0x12811Cu;
    // 0x12811c: 0x0  nop
    ctx->pc = 0x12811cu;
    // NOP
    ctx->pc = 0x128120u;
}
