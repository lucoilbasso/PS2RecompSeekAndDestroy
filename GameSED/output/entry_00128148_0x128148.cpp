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

// Function: entry_00128148
// Address: 0x128148 - 0x1281c0
void entry_00128148_0x128148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128148_0x128148");
#endif

    ctx->pc = 0x128148u;

    // 0x128148: 0x96040044  lhu         $a0, 0x44($s0)
    ctx->pc = 0x128148u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x12814c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x12814cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x128150: 0x86070008  lh          $a3, 0x8($s0)
    ctx->pc = 0x128150u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x128154: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x128154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x128158: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x128158u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12815c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x128160: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x128160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x128164: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x128164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x128168: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x128168u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x12816c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12816cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x128170: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x128170u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x128174: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x128174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128178: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x128178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12817c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12817cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x128180: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x128180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x128184: 0x24217e60  addiu       $at, $at, 0x7E60
    ctx->pc = 0x128184u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32352));
    // 0x128188: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x128188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x12818c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x12818cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128190: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x128190u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x128194: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x128194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128198: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x128198u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12819c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12819cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1281a0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1281a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1281a4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1281a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1281a8: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1281a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1281ac: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1281acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1281b0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1281b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1281b4: 0xe6210090  swc1        $f1, 0x90($s1)
    ctx->pc = 0x1281b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x1281b8: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x1281b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x1281bc: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1281bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x1281c0u;
}
