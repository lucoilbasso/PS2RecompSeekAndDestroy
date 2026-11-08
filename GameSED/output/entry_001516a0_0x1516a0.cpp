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

// Function: entry_001516a0
// Address: 0x1516a0 - 0x1516e0
void entry_001516a0_0x1516a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001516a0_0x1516a0");
#endif

    switch (ctx->pc) {
        case 0x1516a8u: goto label_1516a8;
        default: break;
    }

    ctx->pc = 0x1516a0u;

    // 0x1516a0: 0xc061422  jal         func_185088
    ctx->pc = 0x1516A0u;
    SET_GPR_U32(ctx, 31, 0x1516A8u);
    ctx->pc = 0x1516A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1516A0u;
    // 0x1516a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1516A0u, 0x1516A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1516A8u;
label_1516a8:
    // 0x1516a8: 0x264300e0  addiu       $v1, $s2, 0xE0
    ctx->pc = 0x1516a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x1516ac: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1516acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1516b0: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x1516b0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x1516b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1516b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1516b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1516b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1516bc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1516bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1516c0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1516C0u;
    {
        const bool branch_taken_0x1516c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1516C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516C0u;
        // 0x1516c4: 0x26030630  addiu       $v1, $s0, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516c0) {
            ctx->pc = 0x1516E0u;
            return;
        }
    }
    ctx->pc = 0x1516C8u;
    // 0x1516c8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1516c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1516cc: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x1516ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1516d0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1516d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1516d4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1516d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1516d8: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1516d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1516dc: 0x26030630  addiu       $v1, $s0, 0x630
    ctx->pc = 0x1516dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
    ctx->pc = 0x1516e0u;
}
