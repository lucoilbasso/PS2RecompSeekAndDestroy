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

// Function: entry_00178648
// Address: 0x178648 - 0x178664
void entry_00178648_0x178648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178648_0x178648");
#endif

    switch (ctx->pc) {
        case 0x178654u: goto label_178654;
        default: break;
    }

    ctx->pc = 0x178648u;

    // 0x178648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17864c: 0xc06866c  jal         func_1A19B0
    ctx->pc = 0x17864Cu;
    SET_GPR_U32(ctx, 31, 0x178654u);
    ctx->pc = 0x178650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17864Cu;
    // 0x178650: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x17864Cu, 0x178654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178654u;
label_178654:
    // 0x178654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178658: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x178658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17865c: 0x3e00008  jr          $ra
    ctx->pc = 0x17865Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17865Cu;
        // 0x178660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17865Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178664u;
}
