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

// Function: WTxPanelPageWaitClear__FP9WcTxPanel
// Address: 0x18ed78 - 0x18edbc
void WTxPanelPageWaitClear__FP9WcTxPanel_0x18ed78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelPageWaitClear__FP9WcTxPanel_0x18ed78");
#endif

    switch (ctx->pc) {
        case 0x18ed98u: goto label_18ed98;
        default: break;
    }

    ctx->pc = 0x18ed78u;

    // 0x18ed78: 0x8c850210  lw          $a1, 0x210($a0)
    ctx->pc = 0x18ed78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x18ed7c: 0xac80024c  sw          $zero, 0x24C($a0)
    ctx->pc = 0x18ed7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 588), GPR_U32(ctx, 0));
    // 0x18ed80: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x18ED80u;
    {
        const bool branch_taken_0x18ed80 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x18ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED80u;
        // 0x18ed84: 0x8c820218  lw          $v0, 0x218($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ed80) {
            ctx->pc = 0x18EDB4u;
            goto label_18edb4;
        }
    }
    ctx->pc = 0x18ED88u;
    // 0x18ed88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18ed88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed8c: 0x2405ff0f  addiu       $a1, $zero, -0xF1
    ctx->pc = 0x18ed8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x18ed90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18ed90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed94: 0x0  nop
    ctx->pc = 0x18ed94u;
    // NOP
label_18ed98:
    // 0x18ed98: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x18ed98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ed9c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x18ed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18eda0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x18eda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x18eda4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x18eda4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18eda8: 0x0  nop
    ctx->pc = 0x18eda8u;
    // NOP
    // 0x18edac: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18EDACu;
    {
        const bool branch_taken_0x18edac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDACu;
        // 0x18edb0: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edac) {
            ctx->pc = 0x18ED98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ed98;
        }
    }
    ctx->pc = 0x18EDB4u;
label_18edb4:
    // 0x18edb4: 0x3e00008  jr          $ra
    ctx->pc = 0x18EDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EDBCu;
}
