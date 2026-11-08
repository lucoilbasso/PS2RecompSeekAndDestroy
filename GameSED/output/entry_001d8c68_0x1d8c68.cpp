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

// Function: entry_001d8c68
// Address: 0x1d8c68 - 0x1d8c88
void entry_001d8c68_0x1d8c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8c68_0x1d8c68");
#endif

    ctx->pc = 0x1d8c68u;

    // 0x1d8c68: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d8c6c: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x1d8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1d8c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8c74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8c78: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d8c7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8c80: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C80u;
        // 0x1d8c84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8C88u;
}
