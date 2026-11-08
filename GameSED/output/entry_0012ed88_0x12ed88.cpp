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

// Function: entry_0012ed88
// Address: 0x12ed88 - 0x12ee04
void entry_0012ed88_0x12ed88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ed88_0x12ed88");
#endif

    switch (ctx->pc) {
        case 0x12edd0u: goto label_12edd0;
        default: break;
    }

    ctx->pc = 0x12ed88u;

    // 0x12ed88: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x12ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x12ed8c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x12ed8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ed90: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x12ed90u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12ed94: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x12ed94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12ed98: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x12ed98u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12ed9c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x12ed9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12eda0: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x12eda0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12eda4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x12eda4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12eda8: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x12eda8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12edac: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x12edacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12edb0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x12edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x12edb4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x12edb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12edb8: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x12edb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12edbc: 0x70431008  paddw       $v0, $v0, $v1
    ctx->pc = 0x12edbcu;
    SET_GPR_VEC(ctx, 2, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12edc0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x12edc0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x12edc4: 0x26120080  addiu       $s2, $s0, 0x80
    ctx->pc = 0x12edc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x12edc8: 0xc067a86  jal         func_19EA18
    ctx->pc = 0x12EDC8u;
    SET_GPR_U32(ctx, 31, 0x12EDD0u);
    ctx->pc = 0x12EDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDC8u;
    // 0x12edcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EA18u, 0x12EDC8u, 0x12EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDD0u;
label_12edd0:
    // 0x12edd0: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x12edd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x12edd4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x12edd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12edd8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x12edd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x12eddc: 0x8e110110  lw          $s1, 0x110($s0)
    ctx->pc = 0x12eddcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x12ede0: 0x52200028  beql        $s1, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x12EDE0u;
    {
        const bool branch_taken_0x12ede0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ede0) {
            ctx->pc = 0x12EDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EDE0u;
            // 0x12ede4: 0x96030130  lhu         $v1, 0x130($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EE84u;
            return;
        }
    }
    ctx->pc = 0x12EDE8u;
    // 0x12ede8: 0x26330020  addiu       $s3, $s1, 0x20
    ctx->pc = 0x12ede8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x12edec: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x12edecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x12edf0: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x12edf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x12edf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EDF4u;
    {
        const bool branch_taken_0x12edf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12edf4) {
            ctx->pc = 0x12EE04u;
            return;
        }
    }
    ctx->pc = 0x12EDFCu;
    // 0x12edfc: 0xc061920  jal         func_186480
    ctx->pc = 0x12EDFCu;
    SET_GPR_U32(ctx, 31, 0x12EE04u);
    ctx->pc = 0x12EE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDFCu;
    // 0x12ee00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x12EDFCu, 0x12EE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE04u;
}
