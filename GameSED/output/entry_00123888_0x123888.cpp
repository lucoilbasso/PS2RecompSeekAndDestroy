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

// Function: entry_00123888
// Address: 0x123888 - 0x1238e8
void entry_00123888_0x123888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123888_0x123888");
#endif

    ctx->pc = 0x123888u;

    // 0x123888: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x123888u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12388c: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x12388cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x123890: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x123890u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x123894: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x123894u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x123898: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x123898u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12389c: 0x4b01286a  vmul.x      $vf1, $vf5, $vf1
    ctx->pc = 0x12389cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1238a0: 0x4a8228aa  vmul.y      $vf2, $vf5, $vf2
    ctx->pc = 0x1238a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1238a4: 0x4a4328ea  vmul.z      $vf3, $vf5, $vf3
    ctx->pc = 0x1238a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1238a8: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1238a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1238ac: 0xf8420010  sqc2        $vf2, 0x10($v0)
    ctx->pc = 0x1238acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1238b0: 0xf8430020  sqc2        $vf3, 0x20($v0)
    ctx->pc = 0x1238b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1238b4: 0xc62100dc  lwc1        $f1, 0xDC($s1)
    ctx->pc = 0x1238b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1238b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1238b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1238bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1238bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1238c0: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
    ctx->pc = 0x1238C0u;
    {
        const bool branch_taken_0x1238c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1238c0) {
            ctx->pc = 0x1238C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1238C0u;
            // 0x1238c4: 0xc62200dc  lwc1        $f2, 0xDC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x123954u;
            return;
        }
    }
    ctx->pc = 0x1238C8u;
    // 0x1238c8: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x1238c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x1238cc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1238ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1238d0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1238D0u;
    {
        const bool branch_taken_0x1238d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1238D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238D0u;
        // 0x1238d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238d0) {
            ctx->pc = 0x1238E8u;
            return;
        }
    }
    ctx->pc = 0x1238D8u;
    // 0x1238d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1238d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1238dc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1238dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1238e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1238E0u;
    {
        const bool branch_taken_0x1238e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1238e0) {
            ctx->pc = 0x1238FCu;
            return;
        }
    }
    ctx->pc = 0x1238E8u;
}
