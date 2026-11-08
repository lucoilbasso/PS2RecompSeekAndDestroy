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

// Function: $L15
// Address: 0x1d0d04 - 0x1d0d28
void ps2__L15_0x1d0d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L15_0x1d0d04");
#endif

    ctx->pc = 0x1d0d04u;

label_1d0d04:
    // 0x1d0d04: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1d0d04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0d08: 0x0  nop
    ctx->pc = 0x1d0d08u;
    // NOP
    // 0x1d0d0c: 0x0  nop
    ctx->pc = 0x1d0d0cu;
    // NOP
    // 0x1d0d10: 0x0  nop
    ctx->pc = 0x1d0d10u;
    // NOP
    // 0x1d0d14: 0x0  nop
    ctx->pc = 0x1d0d14u;
    // NOP
    // 0x1d0d18: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D0D18u;
    {
        const bool branch_taken_0x1d0d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0d18) {
            ctx->pc = 0x1D0D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0D18u;
            // 0x1d0d1c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0D04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0d04;
        }
    }
    ctx->pc = 0x1D0D20u;
    // 0x1d0d20: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D20u;
        // 0x1d0d24: 0x871023  subu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0D28u;
}
