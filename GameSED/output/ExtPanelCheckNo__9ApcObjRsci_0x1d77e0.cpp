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

// Function: ExtPanelCheckNo__9ApcObjRsci
// Address: 0x1d77e0 - 0x1d7804
void ExtPanelCheckNo__9ApcObjRsci_0x1d77e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExtPanelCheckNo__9ApcObjRsci_0x1d77e0");
#endif

    ctx->pc = 0x1d77e0u;

    // 0x1d77e0: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D77E0u;
    {
        const bool branch_taken_0x1d77e0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1D77E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77E0u;
        // 0x1d77e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77e0) {
            ctx->pc = 0x1D77F8u;
            goto label_1d77f8;
        }
    }
    ctx->pc = 0x1D77E8u;
    // 0x1d77e8: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1d77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1d77ec: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1d77ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d77f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D77F0u;
    {
        const bool branch_taken_0x1d77f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d77f0) {
            ctx->pc = 0x1D77FCu;
            goto label_1d77fc;
        }
    }
    ctx->pc = 0x1D77F8u;
label_1d77f8:
    // 0x1d77f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d77f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d77fc:
    // 0x1d77fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D77FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77FCu;
        // 0x1d7800: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D77FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7804u;
}
