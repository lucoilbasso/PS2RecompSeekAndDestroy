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

// Function: entry_001ac37c
// Address: 0x1ac37c - 0x1ac390
void entry_001ac37c_0x1ac37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac37c_0x1ac37c");
#endif

    ctx->pc = 0x1ac37cu;

    // 0x1ac37c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1ac37cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ac380: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC380u;
    {
        const bool branch_taken_0x1ac380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac380) {
            ctx->pc = 0x1AC384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC380u;
            // 0x1ac384: 0x912b0003  lbu         $t3, 0x3($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC390u;
            return;
        }
    }
    ctx->pc = 0x1AC388u;
    // 0x1ac388: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC388u;
        // 0x1ac38c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC390u;
}
