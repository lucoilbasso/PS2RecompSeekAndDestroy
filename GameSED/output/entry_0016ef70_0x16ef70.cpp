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

// Function: entry_0016ef70
// Address: 0x16ef70 - 0x16ef88
void entry_0016ef70_0x16ef70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ef70_0x16ef70");
#endif

    switch (ctx->pc) {
        case 0x16ef78u: goto label_16ef78;
        default: break;
    }

    ctx->pc = 0x16ef70u;

    // 0x16ef70: 0xc05b978  jal         func_16E5E0
    ctx->pc = 0x16EF70u;
    SET_GPR_U32(ctx, 31, 0x16EF78u);
    ctx->pc = 0x16EF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EF70u;
    // 0x16ef74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E5E0u, 0x16EF70u, 0x16EF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF78u;
label_16ef78:
    // 0x16ef78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ef78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ef7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16ef7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ef80: 0x3e00008  jr          $ra
    ctx->pc = 0x16EF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF80u;
        // 0x16ef84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EF88u;
}
