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

// Function: _Vector_Mask32__FPvi
// Address: 0x1a44d0 - 0x1a4570
void ps2__Vector_Mask32__FPvi_0x1a44d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Vector_Mask32__FPvi_0x1a44d0");
#endif

    ctx->pc = 0x1a44d0u;

    // 0x1a44d0: 0x10a00025  beqz        $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A44D0u;
    {
        const bool branch_taken_0x1a44d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a44d0) {
            ctx->pc = 0x1A4568u;
            goto label_1a4568;
        }
    }
    ctx->pc = 0x1A44D8u;
    // 0x1a44d8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a44d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a44dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1a44dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a44e0: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x1a44e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a44e4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A44E4u;
    {
        const bool branch_taken_0x1a44e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A44E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44E4u;
        // 0x1a44e8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a44e4) {
            ctx->pc = 0x1A4564u;
            goto label_1a4564;
        }
    }
    ctx->pc = 0x1A44ECu;
    // 0x1a44ec: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a44ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1a44f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a44f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a44f4: 0x8c639310  lw          $v1, -0x6CF0($v1)
    ctx->pc = 0x1a44f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939408)));
    // 0x1a44f8: 0x600008  jr          $v1
    ctx->pc = 0x1A44F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4500u: goto label_1a4500;
            case 0x1A4510u: goto label_1a4510;
            case 0x1A4520u: goto label_1a4520;
            case 0x1A4530u: goto label_1a4530;
            case 0x1A4540u: goto label_1a4540;
            case 0x1A4550u: goto label_1a4550;
            case 0x1A4560u: goto label_1a4560;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A44F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A4500u;
label_1a4500:
    // 0x1a4500: 0x4b02033c  vmove.x     $vf2, $vf0
    ctx->pc = 0x1a4500u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a4504: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A4504u;
    {
        const bool branch_taken_0x1a4504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4504) {
            ctx->pc = 0x1A4564u;
            goto label_1a4564;
        }
    }
    ctx->pc = 0x1A450Cu;
    // 0x1a450c: 0x0  nop
    ctx->pc = 0x1a450cu;
    // NOP
label_1a4510:
    // 0x1a4510: 0x4a82033c  vmove.y     $vf2, $vf0
    ctx->pc = 0x1a4510u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a4514: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A4514u;
    {
        const bool branch_taken_0x1a4514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4514) {
            ctx->pc = 0x1A4564u;
            goto label_1a4564;
        }
    }
    ctx->pc = 0x1A451Cu;
    // 0x1a451c: 0x0  nop
    ctx->pc = 0x1a451cu;
    // NOP
label_1a4520:
    // 0x1a4520: 0x4b82033c  vmove.xy    $vf2, $vf0
    ctx->pc = 0x1a4520u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a4524: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A4524u;
    {
        const bool branch_taken_0x1a4524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4524) {
            ctx->pc = 0x1A4564u;
            goto label_1a4564;
        }
    }
    ctx->pc = 0x1A452Cu;
    // 0x1a452c: 0x0  nop
    ctx->pc = 0x1a452cu;
    // NOP
label_1a4530:
    // 0x1a4530: 0x4a42033c  vmove.z     $vf2, $vf0
    ctx->pc = 0x1a4530u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a4534: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A4534u;
    {
        const bool branch_taken_0x1a4534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4534) {
            ctx->pc = 0x1A4564u;
            goto label_1a4564;
        }
    }
    ctx->pc = 0x1A453Cu;
    // 0x1a453c: 0x0  nop
    ctx->pc = 0x1a453cu;
    // NOP
label_1a4540:
    // 0x1a4540: 0x4b42033c  vmove.xz    $vf2, $vf0
    ctx->pc = 0x1a4540u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a4544: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4544u;
    {
        const bool branch_taken_0x1a4544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4544) {
            ctx->pc = 0x1A4564u;
            goto label_1a4564;
        }
    }
    ctx->pc = 0x1A454Cu;
    // 0x1a454c: 0x0  nop
    ctx->pc = 0x1a454cu;
    // NOP
label_1a4550:
    // 0x1a4550: 0x4ac2033c  vmove.yz    $vf2, $vf0
    ctx->pc = 0x1a4550u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a4554: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4554u;
    {
        const bool branch_taken_0x1a4554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4554) {
            ctx->pc = 0x1A4564u;
            goto label_1a4564;
        }
    }
    ctx->pc = 0x1A455Cu;
    // 0x1a455c: 0x0  nop
    ctx->pc = 0x1a455cu;
    // NOP
label_1a4560:
    // 0x1a4560: 0x4bc2033c  vmove.xyz   $vf2, $vf0
    ctx->pc = 0x1a4560u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a4564:
    // 0x1a4564: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a4564u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a4568:
    // 0x1a4568: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4570u;
}
