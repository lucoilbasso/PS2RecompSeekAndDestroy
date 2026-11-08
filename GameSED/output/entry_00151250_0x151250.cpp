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

// Function: entry_00151250
// Address: 0x151250 - 0x151290
void entry_00151250_0x151250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151250_0x151250");
#endif

    switch (ctx->pc) {
        case 0x151258u: goto label_151258;
        default: break;
    }

    ctx->pc = 0x151250u;

    // 0x151250: 0xc061422  jal         func_185088
    ctx->pc = 0x151250u;
    SET_GPR_U32(ctx, 31, 0x151258u);
    ctx->pc = 0x151254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151250u;
    // 0x151254: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x151250u, 0x151258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151258u;
label_151258:
    // 0x151258: 0x262300e0  addiu       $v1, $s1, 0xE0
    ctx->pc = 0x151258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x15125c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x15125cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x151260: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x151260u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x151264: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x151264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x151268: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x151268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15126c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x15126cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151270: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x151270u;
    {
        const bool branch_taken_0x151270 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x151274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151270u;
        // 0x151274: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151270) {
            ctx->pc = 0x151290u;
            return;
        }
    }
    ctx->pc = 0x151278u;
    // 0x151278: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x151278u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15127c: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x15127cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x151280: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x151280u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x151284: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x151284u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x151288: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x151288u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15128c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x15128cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x151290u;
}
