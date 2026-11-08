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

// Function: WTxPanelCellAdrFill__FP9WcTxPanelPUiUi
// Address: 0x18e488 - 0x18e4bc
void WTxPanelCellAdrFill__FP9WcTxPanelPUiUi_0x18e488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelCellAdrFill__FP9WcTxPanelPUiUi_0x18e488");
#endif

    switch (ctx->pc) {
        case 0x18e498u: goto label_18e498;
        default: break;
    }

    ctx->pc = 0x18e488u;

    // 0x18e488: 0x8c820210  lw          $v0, 0x210($a0)
    ctx->pc = 0x18e488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x18e48c: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18E48Cu;
    {
        const bool branch_taken_0x18e48c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18e48c) {
            ctx->pc = 0x18E4B4u;
            goto label_18e4b4;
        }
    }
    ctx->pc = 0x18E494u;
    // 0x18e494: 0x0  nop
    ctx->pc = 0x18e494u;
    // NOP
label_18e498:
    // 0x18e498: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18e498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18e49c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x18e49cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x18e4a0: 0x0  nop
    ctx->pc = 0x18e4a0u;
    // NOP
    // 0x18e4a4: 0x0  nop
    ctx->pc = 0x18e4a4u;
    // NOP
    // 0x18e4a8: 0x0  nop
    ctx->pc = 0x18e4a8u;
    // NOP
    // 0x18e4ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E4ACu;
    {
        const bool branch_taken_0x18e4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4ACu;
        // 0x18e4b0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4ac) {
            ctx->pc = 0x18E498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e498;
        }
    }
    ctx->pc = 0x18E4B4u;
label_18e4b4:
    // 0x18e4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x18E4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E4BCu;
}
