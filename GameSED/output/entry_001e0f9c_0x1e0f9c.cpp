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

// Function: entry_001e0f9c
// Address: 0x1e0f9c - 0x1e0fc0
void entry_001e0f9c_0x1e0f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0f9c_0x1e0f9c");
#endif

    ctx->pc = 0x1e0f9cu;

    // 0x1e0f9c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e0f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e0fa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0fa4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e0fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0fa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0fac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e0facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0fb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0fb4: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x1e0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1e0fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FB8u;
        // 0x1e0fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0FC0u;
}
