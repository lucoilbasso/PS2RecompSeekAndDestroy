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

// Function: ApCRefWorkSetup__FP10ApCRefWorkiPv
// Address: 0x142878 - 0x142908
void ApCRefWorkSetup__FP10ApCRefWorkiPv_0x142878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCRefWorkSetup__FP10ApCRefWorkiPv_0x142878");
#endif

    switch (ctx->pc) {
        case 0x1428c0u: goto label_1428c0;
        case 0x1428f0u: goto label_1428f0;
        default: break;
    }

    ctx->pc = 0x142878u;

    // 0x142878: 0x30a3000f  andi        $v1, $a1, 0xF
    ctx->pc = 0x142878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x14287c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x14287cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x142880: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x142880u;
    {
        const bool branch_taken_0x142880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142880) {
            ctx->pc = 0x142884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142880u;
            // 0x142884: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1428F0u;
            goto label_1428f0;
        }
    }
    ctx->pc = 0x142888u;
    // 0x142888: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x142888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14288c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x14288cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x142890: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x142890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x142894: 0x8c636910  lw          $v1, 0x6910($v1)
    ctx->pc = 0x142894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26896)));
    // 0x142898: 0x600008  jr          $v1
    ctx->pc = 0x142898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1428A0u: goto label_1428a0;
            case 0x1428D0u: goto label_1428d0;
            case 0x1428E8u: goto label_1428e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142898u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1428A0u;
label_1428a0:
    // 0x1428a0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1428A0u;
    {
        const bool branch_taken_0x1428a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1428A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428A0u;
        // 0x1428a4: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428a0) {
            ctx->pc = 0x1428C0u;
            goto label_1428c0;
        }
    }
    ctx->pc = 0x1428A8u;
    // 0x1428a8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1428a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1428ac: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1428acu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1428b0: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1428b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1428b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1428B4u;
    {
        const bool branch_taken_0x1428b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1428B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428B4u;
        // 0x1428b8: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428b4) {
            ctx->pc = 0x1428F0u;
            goto label_1428f0;
        }
    }
    ctx->pc = 0x1428BCu;
    // 0x1428bc: 0x0  nop
    ctx->pc = 0x1428bcu;
    // NOP
label_1428c0:
    // 0x1428c0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1428c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1428c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1428C4u;
    {
        const bool branch_taken_0x1428c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1428C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428C4u;
        // 0x1428c8: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428c4) {
            ctx->pc = 0x1428F0u;
            goto label_1428f0;
        }
    }
    ctx->pc = 0x1428CCu;
    // 0x1428cc: 0x0  nop
    ctx->pc = 0x1428ccu;
    // NOP
label_1428d0:
    // 0x1428d0: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1428d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1428d4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1428d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1428d8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1428d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1428dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1428DCu;
    {
        const bool branch_taken_0x1428dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1428E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428DCu;
        // 0x1428e0: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428dc) {
            ctx->pc = 0x1428F0u;
            goto label_1428f0;
        }
    }
    ctx->pc = 0x1428E4u;
    // 0x1428e4: 0x0  nop
    ctx->pc = 0x1428e4u;
    // NOP
label_1428e8:
    // 0x1428e8: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x1428e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x1428ec: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1428ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1428f0:
    // 0x1428f0: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1428f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1428f4: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1428f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1428f8: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x1428f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1428fc: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x1428fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x142900: 0x3e00008  jr          $ra
    ctx->pc = 0x142900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142908u;
}
