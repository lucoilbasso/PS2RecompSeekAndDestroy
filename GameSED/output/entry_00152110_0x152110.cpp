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

// Function: entry_00152110
// Address: 0x152110 - 0x152148
void entry_00152110_0x152110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152110_0x152110");
#endif

    switch (ctx->pc) {
        case 0x152118u: goto label_152118;
        default: break;
    }

    ctx->pc = 0x152110u;

    // 0x152110: 0xc061422  jal         func_185088
    ctx->pc = 0x152110u;
    SET_GPR_U32(ctx, 31, 0x152118u);
    ctx->pc = 0x152114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152110u;
    // 0x152114: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x152110u, 0x152118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152118u;
label_152118:
    // 0x152118: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x152118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x15211c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x15211cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x152120: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x152120u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x152124: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x152124u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152128: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x152128u;
    {
        const bool branch_taken_0x152128 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152128u;
        // 0x15212c: 0x26620820  addiu       $v0, $s3, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152128) {
            ctx->pc = 0x152148u;
            return;
        }
    }
    ctx->pc = 0x152130u;
    // 0x152130: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x152130u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152134: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x152134u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x152138: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x152138u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x15213c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x15213cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152140: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x152140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x152144: 0x26620820  addiu       $v0, $s3, 0x820
    ctx->pc = 0x152144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2080));
    ctx->pc = 0x152148u;
}
