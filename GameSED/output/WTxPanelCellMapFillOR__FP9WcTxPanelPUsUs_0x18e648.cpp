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

// Function: WTxPanelCellMapFillOR__FP9WcTxPanelPUsUs
// Address: 0x18e648 - 0x18e67c
void WTxPanelCellMapFillOR__FP9WcTxPanelPUsUs_0x18e648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelCellMapFillOR__FP9WcTxPanelPUsUs_0x18e648");
#endif

    switch (ctx->pc) {
        case 0x18e658u: goto label_18e658;
        default: break;
    }

    ctx->pc = 0x18e648u;

    // 0x18e648: 0x8c820210  lw          $v0, 0x210($a0)
    ctx->pc = 0x18e648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x18e64c: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18E64Cu;
    {
        const bool branch_taken_0x18e64c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E64Cu;
        // 0x18e650: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e64c) {
            ctx->pc = 0x18E674u;
            goto label_18e674;
        }
    }
    ctx->pc = 0x18E654u;
    // 0x18e654: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18e654u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e658:
    // 0x18e658: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x18e658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18e65c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18e660: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x18e660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x18e664: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x18e664u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e668: 0x0  nop
    ctx->pc = 0x18e668u;
    // NOP
    // 0x18e66c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E66Cu;
    {
        const bool branch_taken_0x18e66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E66Cu;
        // 0x18e670: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e66c) {
            ctx->pc = 0x18E658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e658;
        }
    }
    ctx->pc = 0x18E674u;
label_18e674:
    // 0x18e674: 0x3e00008  jr          $ra
    ctx->pc = 0x18E674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E67Cu;
}
