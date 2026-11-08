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

// Function: entry_001b8f38
// Address: 0x1b8f38 - 0x1b8f58
void entry_001b8f38_0x1b8f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8f38_0x1b8f38");
#endif

    ctx->pc = 0x1b8f38u;

    // 0x1b8f38: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x1b8f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1b8f3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8f40: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b8f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b8f44: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1b8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1b8f48: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b8f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8f50: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F50u;
        // 0x1b8f54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8F58u;
}
