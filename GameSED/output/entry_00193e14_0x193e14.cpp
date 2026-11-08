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

// Function: entry_00193e14
// Address: 0x193e14 - 0x193e74
void entry_00193e14_0x193e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193e14_0x193e14");
#endif

    switch (ctx->pc) {
        case 0x193e54u: goto label_193e54;
        case 0x193e5cu: goto label_193e5c;
        case 0x193e64u: goto label_193e64;
        case 0x193e6cu: goto label_193e6c;
        default: break;
    }

    ctx->pc = 0x193e14u;

label_193e14:
    // 0x193e14: 0xd9c10000  lqc2        $vf1, 0x0($t6)
    ctx->pc = 0x193e14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x193e18: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x193e18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193e1c: 0xd9a30000  lqc2        $vf3, 0x0($t5)
    ctx->pc = 0x193e1cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x193e20: 0x4bc30868  vadd.xyz    $vf1, $vf1, $vf3
    ctx->pc = 0x193e20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193e24: 0xf9810000  sqc2        $vf1, 0x0($t4)
    ctx->pc = 0x193e24u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x193e28: 0x218c0010  addi        $t4, $t4, 0x10
    ctx->pc = 0x193e28u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x193e2c: 0x21ad0010  addi        $t5, $t5, 0x10
    ctx->pc = 0x193e2cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x193e30: 0x21ce0010  addi        $t6, $t6, 0x10
    ctx->pc = 0x193e30u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 14), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x193e34: 0x2042ffff  addi        $v0, $v0, -0x1
    ctx->pc = 0x193e34u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x193e38: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x193E38u;
    {
        const bool branch_taken_0x193e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193e38) {
            ctx->pc = 0x193E14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193e14;
        }
    }
    ctx->pc = 0x193E40u;
    // 0x193e40: 0x0  nop
    ctx->pc = 0x193e40u;
    // NOP
    // 0x193e44: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x193e44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x193e48: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x193e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x193e4c: 0xc05fe70  jal         func_17F9C0
    ctx->pc = 0x193E4Cu;
    SET_GPR_U32(ctx, 31, 0x193E54u);
    ctx->pc = 0x193E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E4Cu;
    // 0x193e50: 0x8ce50008  lw          $a1, 0x8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F9C0u, 0x193E4Cu, 0x193E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E54u;
label_193e54:
    // 0x193e54: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x193E54u;
    SET_GPR_U32(ctx, 31, 0x193E5Cu);
    ctx->pc = 0x193E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E54u;
    // 0x193e58: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x193E54u, 0x193E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E5Cu;
label_193e5c:
    // 0x193e5c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x193E5Cu;
    SET_GPR_U32(ctx, 31, 0x193E64u);
    ctx->pc = 0x193E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E5Cu;
    // 0x193e60: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x193E5Cu, 0x193E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E64u;
label_193e64:
    // 0x193e64: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x193E64u;
    SET_GPR_U32(ctx, 31, 0x193E6Cu);
    ctx->pc = 0x193E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E64u;
    // 0x193e68: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x193E64u, 0x193E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E6Cu;
label_193e6c:
    // 0x193e6c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x193E6Cu;
    SET_GPR_U32(ctx, 31, 0x193E74u);
    ctx->pc = 0x193E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E6Cu;
    // 0x193e70: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x193E6Cu, 0x193E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E74u;
}
