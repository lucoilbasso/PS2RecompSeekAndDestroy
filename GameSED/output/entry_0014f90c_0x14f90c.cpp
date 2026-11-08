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

// Function: entry_0014f90c
// Address: 0x14f90c - 0x14f94c
void entry_0014f90c_0x14f90c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f90c_0x14f90c");
#endif

    switch (ctx->pc) {
        case 0x14f914u: goto label_14f914;
        default: break;
    }

    ctx->pc = 0x14f90cu;

    // 0x14f90c: 0xc061422  jal         func_185088
    ctx->pc = 0x14F90Cu;
    SET_GPR_U32(ctx, 31, 0x14F914u);
    ctx->pc = 0x14F910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F90Cu;
    // 0x14f910: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x14F90Cu, 0x14F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F914u;
label_14f914:
    // 0x14f914: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x14f914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x14f918: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x14f918u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x14f91c: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x14f91cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x14f920: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14f920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14f924: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14f924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f928: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x14f928u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f92c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x14F92Cu;
    {
        const bool branch_taken_0x14f92c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f92c) {
            ctx->pc = 0x14F930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F92Cu;
            // 0x14f930: 0x8e4203b0  lw          $v0, 0x3B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F94Cu;
            return;
        }
    }
    ctx->pc = 0x14F934u;
    // 0x14f934: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x14f934u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f938: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x14f938u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14f93c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x14f93cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x14f940: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x14f940u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x14f944: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x14f944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14f948: 0x8e4203b0  lw          $v0, 0x3B0($s2)
    ctx->pc = 0x14f948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
    ctx->pc = 0x14f94cu;
}
