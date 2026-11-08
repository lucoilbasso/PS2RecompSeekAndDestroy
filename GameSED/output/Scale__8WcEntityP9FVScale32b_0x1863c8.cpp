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

// Function: Scale__8WcEntityP9FVScale32b
// Address: 0x1863c8 - 0x18640c
void Scale__8WcEntityP9FVScale32b_0x1863c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scale__8WcEntityP9FVScale32b_0x1863c8");
#endif

    ctx->pc = 0x1863c8u;

    // 0x1863c8: 0x24870040  addiu       $a3, $a0, 0x40
    ctx->pc = 0x1863c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1863cc: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1863CCu;
    {
        const bool branch_taken_0x1863cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1863D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863CCu;
        // 0x1863d0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863cc) {
            ctx->pc = 0x1863E8u;
            goto label_1863e8;
        }
    }
    ctx->pc = 0x1863D4u;
    // 0x1863d4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1863d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1863d8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1863d8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x1863dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1863DCu;
    {
        const bool branch_taken_0x1863dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863DCu;
        // 0x1863e0: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863dc) {
            ctx->pc = 0x1863FCu;
            goto label_1863fc;
        }
    }
    ctx->pc = 0x1863E4u;
    // 0x1863e4: 0x0  nop
    ctx->pc = 0x1863e4u;
    // NOP
label_1863e8:
    // 0x1863e8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1863e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1863ec: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x1863ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1863f0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1863f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1863f4: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1863f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1863f8: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x1863f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1863fc:
    // 0x1863fc: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x1863fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x186400: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x186400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x186404: 0x3e00008  jr          $ra
    ctx->pc = 0x186404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186404u;
        // 0x186408: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18640Cu;
}
