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

// Function: entry_0013a648
// Address: 0x13a648 - 0x13a684
void entry_0013a648_0x13a648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a648_0x13a648");
#endif

    switch (ctx->pc) {
        case 0x13a660u: goto label_13a660;
        default: break;
    }

    ctx->pc = 0x13a648u;

    // 0x13a648: 0x26030130  addiu       $v1, $s0, 0x130
    ctx->pc = 0x13a648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x13a64c: 0x8c6200e0  lw          $v0, 0xE0($v1)
    ctx->pc = 0x13a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x13a650: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13A650u;
    {
        const bool branch_taken_0x13a650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A650u;
        // 0x13a654: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a650) {
            ctx->pc = 0x13A684u;
            return;
        }
    }
    ctx->pc = 0x13A658u;
    // 0x13a658: 0xc06a6ea  jal         func_1A9BA8
    ctx->pc = 0x13A658u;
    SET_GPR_U32(ctx, 31, 0x13A660u);
    ctx->pc = 0x13A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A658u;
    // 0x13a65c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9BA8u, 0x13A658u, 0x13A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A660u;
label_13a660:
    // 0x13a660: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A660u;
    {
        const bool branch_taken_0x13a660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A660u;
        // 0x13a664: 0x26030220  addiu       $v1, $s0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a660) {
            ctx->pc = 0x13A684u;
            return;
        }
    }
    ctx->pc = 0x13A668u;
    // 0x13a668: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x13a668u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a66c: 0x4be2117c  vftoi0.xyzw $vf2, $vf2
    ctx->pc = 0x13a66cu;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13a670: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x13a670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13a674: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13a674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13a678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a67c: 0xc0618da  jal         func_186368
    ctx->pc = 0x13A67Cu;
    SET_GPR_U32(ctx, 31, 0x13A684u);
    ctx->pc = 0x13A680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A67Cu;
    // 0x13a680: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13A67Cu, 0x13A684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A684u;
}
