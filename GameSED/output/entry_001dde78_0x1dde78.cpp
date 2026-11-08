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

// Function: entry_001dde78
// Address: 0x1dde78 - 0x1ddea8
void entry_001dde78_0x1dde78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dde78_0x1dde78");
#endif

    ctx->pc = 0x1dde78u;

label_1dde78:
    // 0x1dde78: 0x24a300a0  addiu       $v1, $a1, 0xA0
    ctx->pc = 0x1dde78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x1dde7c: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x1dde7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1dde80: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1dde80u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1dde84: 0x24a400d0  addiu       $a0, $a1, 0xD0
    ctx->pc = 0x1dde84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x1dde88: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1dde88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1dde8c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1dde8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1dde90: 0x4c1fff9  bgez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DDE90u;
    {
        const bool branch_taken_0x1dde90 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1DDE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE90u;
        // 0x1dde94: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde90) {
            ctx->pc = 0x1DDE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dde78;
        }
    }
    ctx->pc = 0x1DDE98u;
    // 0x1dde98: 0x24e20090  addiu       $v0, $a3, 0x90
    ctx->pc = 0x1dde98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
    // 0x1dde9c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1dde9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ddea0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDEA8u;
}
