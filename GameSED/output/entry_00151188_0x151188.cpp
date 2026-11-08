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

// Function: entry_00151188
// Address: 0x151188 - 0x151214
void entry_00151188_0x151188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151188_0x151188");
#endif

    switch (ctx->pc) {
        case 0x1511f4u: goto label_1511f4;
        default: break;
    }

    ctx->pc = 0x151188u;

    // 0x151188: 0xe60003b8  swc1        $f0, 0x3B8($s0)
    ctx->pc = 0x151188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 952), bits); }
    // 0x15118c: 0xc60203c4  lwc1        $f2, 0x3C4($s0)
    ctx->pc = 0x15118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151190: 0xc780824c  lwc1        $f0, -0x7DB4($gp)
    ctx->pc = 0x151190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151194: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x151194u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x151198: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x151198u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x15119c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x15119cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1511a0: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x1511a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1511a4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1511a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1511a8: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x1511a8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1511ac: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x1511acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1511b0: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x1511b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1511b4: 0x4b0621bc  vmulax.x    $ACC, $vf4, $vf6x
    ctx->pc = 0x1511b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1511b8: 0x4b082b08  vmaddx.x    $vf12, $vf5, $vf8x
    ctx->pc = 0x1511b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1511bc: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x1511bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1511c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1511c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1511c4: 0xc6010278  lwc1        $f1, 0x278($s0)
    ctx->pc = 0x1511c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1511c8: 0xc7808250  lwc1        $f0, -0x7DB0($gp)
    ctx->pc = 0x1511c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1511cc: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1511ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1511d0: 0xc60c03b8  lwc1        $f12, 0x3B8($s0)
    ctx->pc = 0x1511d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1511d4: 0xe60203c4  swc1        $f2, 0x3C4($s0)
    ctx->pc = 0x1511d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 964), bits); }
    // 0x1511d8: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x1511d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x1511dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1511dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1511e0: 0x46016341  sub.s       $f13, $f12, $f1
    ctx->pc = 0x1511e0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1511e4: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x1511e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x1511e8: 0xe60d03c0  swc1        $f13, 0x3C0($s0)
    ctx->pc = 0x1511e8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 960), bits); }
    // 0x1511ec: 0xc0589ee  jal         func_1627B8
    ctx->pc = 0x1511ECu;
    SET_GPR_U32(ctx, 31, 0x1511F4u);
    ctx->pc = 0x1511F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1511ECu;
    // 0x1511f0: 0xe60c03bc  swc1        $f12, 0x3BC($s0) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 956), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1627B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1627B8u, 0x1511ECu, 0x1511F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1511F4u;
label_1511f4:
    // 0x1511f4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1511f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1511f8: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x1511f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x1511fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1511fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x151200: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151200u;
    {
        const bool branch_taken_0x151200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151200) {
            ctx->pc = 0x151214u;
            return;
        }
    }
    ctx->pc = 0x151208u;
    // 0x151208: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x151208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x15120c: 0xc058a68  jal         func_1629A0
    ctx->pc = 0x15120Cu;
    SET_GPR_U32(ctx, 31, 0x151214u);
    ctx->pc = 0x151210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15120Cu;
    // 0x151210: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1629A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1629A0u, 0x15120Cu, 0x151214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151214u;
}
