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

// Function: entry_001ac390
// Address: 0x1ac390 - 0x1ac3a4
void entry_001ac390_0x1ac390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac390_0x1ac390");
#endif

    ctx->pc = 0x1ac390u;

    // 0x1ac390: 0x2d620007  sltiu       $v0, $t3, 0x7
    ctx->pc = 0x1ac390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1ac394: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC394u;
    {
        const bool branch_taken_0x1ac394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC394u;
        // 0x1ac398: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac394) {
            ctx->pc = 0x1AC3A4u;
            return;
        }
    }
    ctx->pc = 0x1AC39Cu;
    // 0x1ac39c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC39Cu;
        // 0x1ac3a0: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC3A4u;
}
