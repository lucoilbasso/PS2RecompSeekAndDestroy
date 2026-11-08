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

// Function: contained_p__16__user_type_infoQ216__user_type_info8sub_kind
// Address: 0x1e1a00 - 0x1e1a0c
void contained_p__16__user_type_infoQ216__user_type_info8sub_kind_0x1e1a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("contained_p__16__user_type_infoQ216__user_type_info8sub_kind_0x1e1a00");
#endif

    ctx->pc = 0x1e1a00u;

    // 0x1e1a00: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1e1a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e1a04: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A04u;
        // 0x1e1a08: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1A0Cu;
}
