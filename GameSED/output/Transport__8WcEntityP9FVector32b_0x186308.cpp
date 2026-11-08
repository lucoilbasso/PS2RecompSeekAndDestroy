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

// Function: Transport__8WcEntityP9FVector32b
// Address: 0x186308 - 0x18634c
void Transport__8WcEntityP9FVector32b_0x186308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Transport__8WcEntityP9FVector32b_0x186308");
#endif

    ctx->pc = 0x186308u;

    // 0x186308: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x186308u;
    {
        const bool branch_taken_0x186308 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x18630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186308u;
        // 0x18630c: 0x248200d0  addiu       $v0, $a0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186308) {
            ctx->pc = 0x186328u;
            goto label_186328;
        }
    }
    ctx->pc = 0x186310u;
    // 0x186310: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x186310u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x186314: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x186314u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x186318: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x186318u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18631c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18631Cu;
    {
        const bool branch_taken_0x18631c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18631Cu;
        // 0x186320: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18631c) {
            ctx->pc = 0x18633Cu;
            goto label_18633c;
        }
    }
    ctx->pc = 0x186324u;
    // 0x186324: 0x0  nop
    ctx->pc = 0x186324u;
    // NOP
label_186328:
    // 0x186328: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x186328u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18632c: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x18632cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x186330: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x186330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x186334: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x186334u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x186338: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x186338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_18633c:
    // 0x18633c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x18633cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x186340: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x186340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x186344: 0x3e00008  jr          $ra
    ctx->pc = 0x186344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186344u;
        // 0x186348: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18634Cu;
}
