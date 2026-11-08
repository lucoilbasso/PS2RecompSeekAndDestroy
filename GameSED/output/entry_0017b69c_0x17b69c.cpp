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

// Function: entry_0017b69c
// Address: 0x17b69c - 0x17b6b8
void entry_0017b69c_0x17b69c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b69c_0x17b69c");
#endif

    ctx->pc = 0x17b69cu;

    // 0x17b69c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x17b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x17b6a0: 0x28c2000c  slti        $v0, $a2, 0xC
    ctx->pc = 0x17b6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x17b6a4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x17b6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x17b6a8: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x17B6A8u;
    {
        const bool branch_taken_0x17b6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6A8u;
        // 0x17b6ac: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b6a8) {
            ctx->pc = 0x17B600u;
            return;
        }
    }
    ctx->pc = 0x17B6B0u;
    // 0x17b6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x17B6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B6B8u;
}
