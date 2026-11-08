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

// Function: BSCDEntGet1Float32__FP15BsSCDEntControl
// Address: 0x1a8a08 - 0x1a8a60
void BSCDEntGet1Float32__FP15BsSCDEntControl_0x1a8a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntGet1Float32__FP15BsSCDEntControl_0x1a8a08");
#endif

    switch (ctx->pc) {
        case 0x1a8a40u: goto label_1a8a40;
        default: break;
    }

    ctx->pc = 0x1a8a08u;

    // 0x1a8a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8a0c: 0x2485001c  addiu       $a1, $a0, 0x1C
    ctx->pc = 0x1a8a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x1a8a10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8a14: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a8a18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a8a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a8a1c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8a20: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a8a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8a24: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a8a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a8a28: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a8a28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a8a2c: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a8a2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a8a30: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8A30u;
    {
        const bool branch_taken_0x1a8a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A30u;
        // 0x1a8a34: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a30) {
            ctx->pc = 0x1A8A44u;
            goto label_1a8a44;
        }
    }
    ctx->pc = 0x1A8A38u;
    // 0x1a8a38: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A8A38u;
    SET_GPR_U32(ctx, 31, 0x1A8A40u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A8A38u, 0x1A8A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8A40u;
label_1a8a40:
    // 0x1a8a40: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a8a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a8a44:
    // 0x1a8a44: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x1a8a44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1a8a48: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1a8a48u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a8a4c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1a8a4cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a8a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a8a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8a58: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A58u;
        // 0x1a8a5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8A60u;
}
