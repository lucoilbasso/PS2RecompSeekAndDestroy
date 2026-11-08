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

// Function: _Vector_Mask__FP9FVector32i
// Address: 0x1a4608 - 0x1a46a8
void ps2__Vector_Mask__FP9FVector32i_0x1a4608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Vector_Mask__FP9FVector32i_0x1a4608");
#endif

    ctx->pc = 0x1a4608u;

    // 0x1a4608: 0x10a00025  beqz        $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A4608u;
    {
        const bool branch_taken_0x1a4608 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4608u;
        // 0x1a460c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4608) {
            ctx->pc = 0x1A46A0u;
            goto label_1a46a0;
        }
    }
    ctx->pc = 0x1A4610u;
    // 0x1a4610: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a4610u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a4614: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x1a4614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a4618: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x1a4618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a461c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A461Cu;
    {
        const bool branch_taken_0x1a461c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A461Cu;
        // 0x1a4620: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a461c) {
            ctx->pc = 0x1A469Cu;
            goto label_1a469c;
        }
    }
    ctx->pc = 0x1A4624u;
    // 0x1a4624: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a4624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1a4628: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a4628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a462c: 0x8c639350  lw          $v1, -0x6CB0($v1)
    ctx->pc = 0x1a462cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939472)));
    // 0x1a4630: 0x600008  jr          $v1
    ctx->pc = 0x1A4630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4638u: goto label_1a4638;
            case 0x1A4648u: goto label_1a4648;
            case 0x1A4658u: goto label_1a4658;
            case 0x1A4668u: goto label_1a4668;
            case 0x1A4678u: goto label_1a4678;
            case 0x1A4688u: goto label_1a4688;
            case 0x1A4698u: goto label_1a4698;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4630u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A4638u;
label_1a4638:
    // 0x1a4638: 0x4b02033c  vmove.x     $vf2, $vf0
    ctx->pc = 0x1a4638u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a463c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A463Cu;
    {
        const bool branch_taken_0x1a463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a463c) {
            ctx->pc = 0x1A469Cu;
            goto label_1a469c;
        }
    }
    ctx->pc = 0x1A4644u;
    // 0x1a4644: 0x0  nop
    ctx->pc = 0x1a4644u;
    // NOP
label_1a4648:
    // 0x1a4648: 0x4a82033c  vmove.y     $vf2, $vf0
    ctx->pc = 0x1a4648u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a464c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A464Cu;
    {
        const bool branch_taken_0x1a464c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a464c) {
            ctx->pc = 0x1A469Cu;
            goto label_1a469c;
        }
    }
    ctx->pc = 0x1A4654u;
    // 0x1a4654: 0x0  nop
    ctx->pc = 0x1a4654u;
    // NOP
label_1a4658:
    // 0x1a4658: 0x4b82033c  vmove.xy    $vf2, $vf0
    ctx->pc = 0x1a4658u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a465c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A465Cu;
    {
        const bool branch_taken_0x1a465c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a465c) {
            ctx->pc = 0x1A469Cu;
            goto label_1a469c;
        }
    }
    ctx->pc = 0x1A4664u;
    // 0x1a4664: 0x0  nop
    ctx->pc = 0x1a4664u;
    // NOP
label_1a4668:
    // 0x1a4668: 0x4a42033c  vmove.z     $vf2, $vf0
    ctx->pc = 0x1a4668u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a466c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A466Cu;
    {
        const bool branch_taken_0x1a466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a466c) {
            ctx->pc = 0x1A469Cu;
            goto label_1a469c;
        }
    }
    ctx->pc = 0x1A4674u;
    // 0x1a4674: 0x0  nop
    ctx->pc = 0x1a4674u;
    // NOP
label_1a4678:
    // 0x1a4678: 0x4b42033c  vmove.xz    $vf2, $vf0
    ctx->pc = 0x1a4678u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a467c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A467Cu;
    {
        const bool branch_taken_0x1a467c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a467c) {
            ctx->pc = 0x1A469Cu;
            goto label_1a469c;
        }
    }
    ctx->pc = 0x1A4684u;
    // 0x1a4684: 0x0  nop
    ctx->pc = 0x1a4684u;
    // NOP
label_1a4688:
    // 0x1a4688: 0x4ac2033c  vmove.yz    $vf2, $vf0
    ctx->pc = 0x1a4688u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a468c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A468Cu;
    {
        const bool branch_taken_0x1a468c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a468c) {
            ctx->pc = 0x1A469Cu;
            goto label_1a469c;
        }
    }
    ctx->pc = 0x1A4694u;
    // 0x1a4694: 0x0  nop
    ctx->pc = 0x1a4694u;
    // NOP
label_1a4698:
    // 0x1a4698: 0x4bc2033c  vmove.xyz   $vf2, $vf0
    ctx->pc = 0x1a4698u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a469c:
    // 0x1a469c: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a469cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a46a0:
    // 0x1a46a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A46A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A46A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A46A8u;
}
