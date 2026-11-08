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

// Function: entry_00163b34
// Address: 0x163b34 - 0x163b74
void entry_00163b34_0x163b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163b34_0x163b34");
#endif

    switch (ctx->pc) {
        case 0x163b3cu: goto label_163b3c;
        default: break;
    }

    ctx->pc = 0x163b34u;

    // 0x163b34: 0xc061422  jal         func_185088
    ctx->pc = 0x163B34u;
    SET_GPR_U32(ctx, 31, 0x163B3Cu);
    ctx->pc = 0x163B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163B34u;
    // 0x163b38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x163B34u, 0x163B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163B3Cu;
label_163b3c:
    // 0x163b3c: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x163b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x163b40: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x163b40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x163b44: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x163b44u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x163b48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x163b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x163b4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x163b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163b50: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x163b50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163b54: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x163B54u;
    {
        const bool branch_taken_0x163b54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163b54) {
            ctx->pc = 0x163B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163B54u;
            // 0x163b58: 0x8e430254  lw          $v1, 0x254($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163B74u;
            return;
        }
    }
    ctx->pc = 0x163B5Cu;
    // 0x163b5c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x163b5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x163b60: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x163b60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x163b64: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x163b64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x163b68: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x163b68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x163b6c: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x163b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163b70: 0x8e430254  lw          $v1, 0x254($s2)
    ctx->pc = 0x163b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
    ctx->pc = 0x163b74u;
}
