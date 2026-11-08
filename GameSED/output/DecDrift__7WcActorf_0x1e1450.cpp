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

// Function: DecDrift__7WcActorf
// Address: 0x1e1450 - 0x1e1480
void DecDrift__7WcActorf_0x1e1450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DecDrift__7WcActorf_0x1e1450");
#endif

    ctx->pc = 0x1e1450u;

    // 0x1e1450: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1e1450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e1454: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1e1454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1e1458: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e1458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e145c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E145Cu;
    {
        const bool branch_taken_0x1e145c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E145Cu;
        // 0x1e1460: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e145c) {
            ctx->pc = 0x1E1478u;
            goto label_1e1478;
        }
    }
    ctx->pc = 0x1E1464u;
    // 0x1e1464: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e1464u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e1468: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x1e1468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e146c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e146cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e1470: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1e1470u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1474: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e1474u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e1478:
    // 0x1e1478: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1480u;
}
