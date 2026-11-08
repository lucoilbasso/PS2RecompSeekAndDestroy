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

// Function: entry_0014542c
// Address: 0x14542c - 0x1454c0
void entry_0014542c_0x14542c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014542c_0x14542c");
#endif

    switch (ctx->pc) {
        case 0x145444u: goto label_145444;
        default: break;
    }

    ctx->pc = 0x14542cu;

    // 0x14542c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x14542cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x145430: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x145430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x145434: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x145434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x145438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14543c: 0xc06760e  jal         func_19D838
    ctx->pc = 0x14543Cu;
    SET_GPR_U32(ctx, 31, 0x145444u);
    ctx->pc = 0x145440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14543Cu;
    // 0x145440: 0x24a5c550  addiu       $a1, $a1, -0x3AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D838u, 0x14543Cu, 0x145444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145444u;
label_145444:
    // 0x145444: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x145444u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x145448: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x145448u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14544c: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x14544cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x145450: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x145450u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x145454: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x145454u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x145458: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x145458u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x14545c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14545cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x145460: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x145460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145464: 0x460010e9  min.s       $f3, $f2, $f0
    ctx->pc = 0x145464u;
    ctx->f[3] = std::min(ctx->f[2], ctx->f[0]);
    // 0x145468: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x145468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14546c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14546cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145470: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x145470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x145474: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x145474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x145478: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x145478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14547c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x14547cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x145480: 0x460208c0  add.s       $f3, $f1, $f2
    ctx->pc = 0x145480u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x145484: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x145484u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x145488: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x145488u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14548c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x14548cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145490: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x145490u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x145494: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x145494u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x145498: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x145498u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x14549c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x14549cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1454a0: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1454A0u;
    {
        const bool branch_taken_0x1454a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1454A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454A0u;
        // 0x1454a4: 0x46020100  add.s       $f4, $f0, $f2 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454a0) {
            ctx->pc = 0x1454C0u;
            return;
        }
    }
    ctx->pc = 0x1454A8u;
    // 0x1454a8: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x1454a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x1454ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1454acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1454b0: 0xc781816c  lwc1        $f1, -0x7E94($gp)
    ctx->pc = 0x1454b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1454b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1454B4u;
    {
        const bool branch_taken_0x1454b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1454B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454B4u;
        // 0x1454b8: 0x46140001  sub.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454b4) {
            ctx->pc = 0x1454D0u;
            return;
        }
    }
    ctx->pc = 0x1454BCu;
    // 0x1454bc: 0x0  nop
    ctx->pc = 0x1454bcu;
    // NOP
    ctx->pc = 0x1454c0u;
}
