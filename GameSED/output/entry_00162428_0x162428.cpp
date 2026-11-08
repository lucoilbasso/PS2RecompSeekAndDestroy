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

// Function: entry_00162428
// Address: 0x162428 - 0x162498
void entry_00162428_0x162428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162428_0x162428");
#endif

    ctx->pc = 0x162428u;

    // 0x162428: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x162428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16242c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16242cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x162430: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x162430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x162434: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x162434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x162438: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x162438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16243c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16243Cu;
    {
        const bool branch_taken_0x16243c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16243Cu;
        // 0x162440: 0x741821  addu        $v1, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16243c) {
            ctx->pc = 0x162498u;
            return;
        }
    }
    ctx->pc = 0x162444u;
    // 0x162444: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x162444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162448: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x162448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x16244c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x16244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x162450: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x162450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162454: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x162454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162458: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x162458u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x16245c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16245cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x162460: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x162460u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x162464: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x162464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x162468: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x162468u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16246c: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x16246cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x162470: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x162470u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x162474: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x162474u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x162478: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x162478u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x16247c: 0x4b0621bc  vmulax.x    $ACC, $vf4, $vf6x
    ctx->pc = 0x16247cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x162480: 0x4b082b08  vmaddx.x    $vf12, $vf5, $vf8x
    ctx->pc = 0x162480u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x162484: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x162484u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x162488: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x162488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16248c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x16248Cu;
    {
        const bool branch_taken_0x16248c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16248c) {
            ctx->pc = 0x16257Cu;
            return;
        }
    }
    ctx->pc = 0x162494u;
    // 0x162494: 0x0  nop
    ctx->pc = 0x162494u;
    // NOP
    ctx->pc = 0x162498u;
}
