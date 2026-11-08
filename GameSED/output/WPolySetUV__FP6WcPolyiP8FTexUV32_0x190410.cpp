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

// Function: WPolySetUV__FP6WcPolyiP8FTexUV32
// Address: 0x190410 - 0x190448
void WPolySetUV__FP6WcPolyiP8FTexUV32_0x190410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPolySetUV__FP6WcPolyiP8FTexUV32_0x190410");
#endif

    ctx->pc = 0x190410u;

    // 0x190410: 0x94820158  lhu         $v0, 0x158($a0)
    ctx->pc = 0x190410u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x190414: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x190414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x190418: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x190418u;
    {
        const bool branch_taken_0x190418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190418) {
            ctx->pc = 0x190440u;
            goto label_190440;
        }
    }
    ctx->pc = 0x190420u;
    // 0x190420: 0x9482015a  lhu         $v0, 0x15A($a0)
    ctx->pc = 0x190420u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 346)));
    // 0x190424: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x190424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x190428: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x190428u;
    {
        const bool branch_taken_0x190428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190428u;
        // 0x19042c: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190428) {
            ctx->pc = 0x190440u;
            goto label_190440;
        }
    }
    ctx->pc = 0x190430u;
    // 0x190430: 0x8c8201d0  lw          $v0, 0x1D0($a0)
    ctx->pc = 0x190430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 464)));
    // 0x190434: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x190434u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x190438: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x190438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19043c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x19043cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
label_190440:
    // 0x190440: 0x3e00008  jr          $ra
    ctx->pc = 0x190440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190448u;
}
