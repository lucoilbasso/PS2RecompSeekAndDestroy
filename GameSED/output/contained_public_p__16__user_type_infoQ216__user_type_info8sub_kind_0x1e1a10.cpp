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

// Function: contained_public_p__16__user_type_infoQ216__user_type_info8sub_kind
// Address: 0x1e1a10 - 0x1e1a1c
void contained_public_p__16__user_type_infoQ216__user_type_info8sub_kind_0x1e1a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("contained_public_p__16__user_type_infoQ216__user_type_info8sub_kind_0x1e1a10");
#endif

    ctx->pc = 0x1e1a10u;

    // 0x1e1a10: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x1e1a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1e1a14: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A14u;
        // 0x1e1a18: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1A1Cu;
}
