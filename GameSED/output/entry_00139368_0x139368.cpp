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

// Function: entry_00139368
// Address: 0x139368 - 0x13938c
void entry_00139368_0x139368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139368_0x139368");
#endif

    ctx->pc = 0x139368u;

label_139368:
    // 0x139368: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x139368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13936c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13936cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x139370: 0x0  nop
    ctx->pc = 0x139370u;
    // NOP
    // 0x139374: 0x0  nop
    ctx->pc = 0x139374u;
    // NOP
    // 0x139378: 0x0  nop
    ctx->pc = 0x139378u;
    // NOP
    // 0x13937c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13937Cu;
    {
        const bool branch_taken_0x13937c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x139380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13937Cu;
        // 0x139380: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13937c) {
            ctx->pc = 0x139368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_139368;
        }
    }
    ctx->pc = 0x139384u;
    // 0x139384: 0x3e00008  jr          $ra
    ctx->pc = 0x139384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13938Cu;
}
