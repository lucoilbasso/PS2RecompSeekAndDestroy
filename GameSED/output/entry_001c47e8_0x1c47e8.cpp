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

// Function: entry_001c47e8
// Address: 0x1c47e8 - 0x1c4810
void entry_001c47e8_0x1c47e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c47e8_0x1c47e8");
#endif

    ctx->pc = 0x1c47e8u;

label_1c47e8:
    // 0x1c47e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c47e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c47ec: 0x0  nop
    ctx->pc = 0x1c47ecu;
    // NOP
    // 0x1c47f0: 0x0  nop
    ctx->pc = 0x1c47f0u;
    // NOP
    // 0x1c47f4: 0x0  nop
    ctx->pc = 0x1c47f4u;
    // NOP
    // 0x1c47f8: 0x0  nop
    ctx->pc = 0x1c47f8u;
    // NOP
    // 0x1c47fc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C47FCu;
    {
        const bool branch_taken_0x1c47fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c47fc) {
            ctx->pc = 0x1C47E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c47e8;
        }
    }
    ctx->pc = 0x1C4804u;
    // 0x1c4804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4808: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4808u;
        // 0x1c480c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4810u;
}
