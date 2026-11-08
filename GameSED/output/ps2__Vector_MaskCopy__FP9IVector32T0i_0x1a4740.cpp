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

// Function: _Vector_MaskCopy__FP9IVector32T0i
// Address: 0x1a4740 - 0x1a47d8
void ps2__Vector_MaskCopy__FP9IVector32T0i_0x1a4740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Vector_MaskCopy__FP9IVector32T0i_0x1a4740");
#endif

    ctx->pc = 0x1a4740u;

    // 0x1a4740: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a4740u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a4744: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x1a4744u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a4748: 0x2cc20007  sltiu       $v0, $a2, 0x7
    ctx->pc = 0x1a4748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a474c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A474Cu;
    {
        const bool branch_taken_0x1a474c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A474Cu;
        // 0x1a4750: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a474c) {
            ctx->pc = 0x1A47CCu;
            goto label_1a47cc;
        }
    }
    ctx->pc = 0x1A4754u;
    // 0x1a4754: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a4754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1a4758: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a4758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a475c: 0x8c639390  lw          $v1, -0x6C70($v1)
    ctx->pc = 0x1a475cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939536)));
    // 0x1a4760: 0x600008  jr          $v1
    ctx->pc = 0x1A4760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4768u: goto label_1a4768;
            case 0x1A4778u: goto label_1a4778;
            case 0x1A4788u: goto label_1a4788;
            case 0x1A4798u: goto label_1a4798;
            case 0x1A47A8u: goto label_1a47a8;
            case 0x1A47B8u: goto label_1a47b8;
            case 0x1A47C8u: goto label_1a47c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4760u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A4768u;
label_1a4768:
    // 0x1a4768: 0x4bc21b3c  vmove.xyz   $vf2, $vf3
    ctx->pc = 0x1a4768u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a476c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A476Cu;
    {
        const bool branch_taken_0x1a476c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a476c) {
            ctx->pc = 0x1A47CCu;
            goto label_1a47cc;
        }
    }
    ctx->pc = 0x1A4774u;
    // 0x1a4774: 0x0  nop
    ctx->pc = 0x1a4774u;
    // NOP
label_1a4778:
    // 0x1a4778: 0x4ac21b3c  vmove.yz    $vf2, $vf3
    ctx->pc = 0x1a4778u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a477c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A477Cu;
    {
        const bool branch_taken_0x1a477c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a477c) {
            ctx->pc = 0x1A47CCu;
            goto label_1a47cc;
        }
    }
    ctx->pc = 0x1A4784u;
    // 0x1a4784: 0x0  nop
    ctx->pc = 0x1a4784u;
    // NOP
label_1a4788:
    // 0x1a4788: 0x4b421b3c  vmove.xz    $vf2, $vf3
    ctx->pc = 0x1a4788u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a478c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A478Cu;
    {
        const bool branch_taken_0x1a478c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a478c) {
            ctx->pc = 0x1A47CCu;
            goto label_1a47cc;
        }
    }
    ctx->pc = 0x1A4794u;
    // 0x1a4794: 0x0  nop
    ctx->pc = 0x1a4794u;
    // NOP
label_1a4798:
    // 0x1a4798: 0x4a421b3c  vmove.z     $vf2, $vf3
    ctx->pc = 0x1a4798u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a479c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A479Cu;
    {
        const bool branch_taken_0x1a479c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a479c) {
            ctx->pc = 0x1A47CCu;
            goto label_1a47cc;
        }
    }
    ctx->pc = 0x1A47A4u;
    // 0x1a47a4: 0x0  nop
    ctx->pc = 0x1a47a4u;
    // NOP
label_1a47a8:
    // 0x1a47a8: 0x4b821b3c  vmove.xy    $vf2, $vf3
    ctx->pc = 0x1a47a8u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a47ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A47ACu;
    {
        const bool branch_taken_0x1a47ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a47ac) {
            ctx->pc = 0x1A47CCu;
            goto label_1a47cc;
        }
    }
    ctx->pc = 0x1A47B4u;
    // 0x1a47b4: 0x0  nop
    ctx->pc = 0x1a47b4u;
    // NOP
label_1a47b8:
    // 0x1a47b8: 0x4a821b3c  vmove.y     $vf2, $vf3
    ctx->pc = 0x1a47b8u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a47bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A47BCu;
    {
        const bool branch_taken_0x1a47bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a47bc) {
            ctx->pc = 0x1A47CCu;
            goto label_1a47cc;
        }
    }
    ctx->pc = 0x1A47C4u;
    // 0x1a47c4: 0x0  nop
    ctx->pc = 0x1a47c4u;
    // NOP
label_1a47c8:
    // 0x1a47c8: 0x4b021b3c  vmove.x     $vf2, $vf3
    ctx->pc = 0x1a47c8u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
label_1a47cc:
    // 0x1a47cc: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a47ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a47d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A47D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A47D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A47D8u;
}
