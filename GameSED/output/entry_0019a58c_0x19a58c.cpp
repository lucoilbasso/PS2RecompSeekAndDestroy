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

// Function: entry_0019a58c
// Address: 0x19a58c - 0x19a5b0
void entry_0019a58c_0x19a58c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a58c_0x19a58c");
#endif

    ctx->pc = 0x19a58cu;

    // 0x19a58c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x19a58cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19a590: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x19a590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x19a594: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19a594u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a598: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19a598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19a59c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x19a59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a5a0: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x19a5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x19a5a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19a5a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x19A5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A5A8u;
        // 0x19a5ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A5B0u;
}
