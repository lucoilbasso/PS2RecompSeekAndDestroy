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

// Function: _Vector_MaskCopy__FP9FVector32T0i
// Address: 0x1a46a8 - 0x1a4740
void ps2__Vector_MaskCopy__FP9FVector32T0i_0x1a46a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Vector_MaskCopy__FP9FVector32T0i_0x1a46a8");
#endif

    ctx->pc = 0x1a46a8u;

    // 0x1a46a8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a46a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a46ac: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x1a46acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a46b0: 0x2cc20007  sltiu       $v0, $a2, 0x7
    ctx->pc = 0x1a46b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a46b4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A46B4u;
    {
        const bool branch_taken_0x1a46b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A46B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46B4u;
        // 0x1a46b8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a46b4) {
            ctx->pc = 0x1A4734u;
            goto label_1a4734;
        }
    }
    ctx->pc = 0x1A46BCu;
    // 0x1a46bc: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a46bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1a46c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a46c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a46c4: 0x8c639370  lw          $v1, -0x6C90($v1)
    ctx->pc = 0x1a46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939504)));
    // 0x1a46c8: 0x600008  jr          $v1
    ctx->pc = 0x1A46C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A46D0u: goto label_1a46d0;
            case 0x1A46E0u: goto label_1a46e0;
            case 0x1A46F0u: goto label_1a46f0;
            case 0x1A4700u: goto label_1a4700;
            case 0x1A4710u: goto label_1a4710;
            case 0x1A4720u: goto label_1a4720;
            case 0x1A4730u: goto label_1a4730;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A46C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A46D0u;
label_1a46d0:
    // 0x1a46d0: 0x4bc21b3c  vmove.xyz   $vf2, $vf3
    ctx->pc = 0x1a46d0u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a46d4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A46D4u;
    {
        const bool branch_taken_0x1a46d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a46d4) {
            ctx->pc = 0x1A4734u;
            goto label_1a4734;
        }
    }
    ctx->pc = 0x1A46DCu;
    // 0x1a46dc: 0x0  nop
    ctx->pc = 0x1a46dcu;
    // NOP
label_1a46e0:
    // 0x1a46e0: 0x4ac21b3c  vmove.yz    $vf2, $vf3
    ctx->pc = 0x1a46e0u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a46e4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A46E4u;
    {
        const bool branch_taken_0x1a46e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a46e4) {
            ctx->pc = 0x1A4734u;
            goto label_1a4734;
        }
    }
    ctx->pc = 0x1A46ECu;
    // 0x1a46ec: 0x0  nop
    ctx->pc = 0x1a46ecu;
    // NOP
label_1a46f0:
    // 0x1a46f0: 0x4b421b3c  vmove.xz    $vf2, $vf3
    ctx->pc = 0x1a46f0u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a46f4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A46F4u;
    {
        const bool branch_taken_0x1a46f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a46f4) {
            ctx->pc = 0x1A4734u;
            goto label_1a4734;
        }
    }
    ctx->pc = 0x1A46FCu;
    // 0x1a46fc: 0x0  nop
    ctx->pc = 0x1a46fcu;
    // NOP
label_1a4700:
    // 0x1a4700: 0x4a421b3c  vmove.z     $vf2, $vf3
    ctx->pc = 0x1a4700u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a4704: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A4704u;
    {
        const bool branch_taken_0x1a4704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4704) {
            ctx->pc = 0x1A4734u;
            goto label_1a4734;
        }
    }
    ctx->pc = 0x1A470Cu;
    // 0x1a470c: 0x0  nop
    ctx->pc = 0x1a470cu;
    // NOP
label_1a4710:
    // 0x1a4710: 0x4b821b3c  vmove.xy    $vf2, $vf3
    ctx->pc = 0x1a4710u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a4714: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4714u;
    {
        const bool branch_taken_0x1a4714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4714) {
            ctx->pc = 0x1A4734u;
            goto label_1a4734;
        }
    }
    ctx->pc = 0x1A471Cu;
    // 0x1a471c: 0x0  nop
    ctx->pc = 0x1a471cu;
    // NOP
label_1a4720:
    // 0x1a4720: 0x4a821b3c  vmove.y     $vf2, $vf3
    ctx->pc = 0x1a4720u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a4724: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4724u;
    {
        const bool branch_taken_0x1a4724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4724) {
            ctx->pc = 0x1A4734u;
            goto label_1a4734;
        }
    }
    ctx->pc = 0x1A472Cu;
    // 0x1a472c: 0x0  nop
    ctx->pc = 0x1a472cu;
    // NOP
label_1a4730:
    // 0x1a4730: 0x4b021b3c  vmove.x     $vf2, $vf3
    ctx->pc = 0x1a4730u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
label_1a4734:
    // 0x1a4734: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a4734u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a4738: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4740u;
}
