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

// Function: contained_virtual_p__16__user_type_infoQ216__user_type_info8sub_kind
// Address: 0x1e1a40 - 0x1e1a50
void contained_virtual_p__16__user_type_infoQ216__user_type_info8sub_kind_0x1e1a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("contained_virtual_p__16__user_type_infoQ216__user_type_info8sub_kind_0x1e1a40");
#endif

    ctx->pc = 0x1e1a40u;

    // 0x1e1a40: 0x30820005  andi        $v0, $a0, 0x5
    ctx->pc = 0x1e1a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)5);
    // 0x1e1a44: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x1e1a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x1e1a48: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A48u;
        // 0x1e1a4c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1A50u;
}
