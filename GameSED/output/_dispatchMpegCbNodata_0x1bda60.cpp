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

// Function: _dispatchMpegCbNodata
// Address: 0x1bda60 - 0x1bda84
void _dispatchMpegCbNodata_0x1bda60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dispatchMpegCbNodata_0x1bda60");
#endif

    switch (ctx->pc) {
        case 0x1bda78u: goto label_1bda78;
        default: break;
    }

    ctx->pc = 0x1bda60u;

    // 0x1bda60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bda60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bda64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bda64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bda68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bda68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bda6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1bda6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bda70: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1BDA70u;
    SET_GPR_U32(ctx, 31, 0x1BDA78u);
    ctx->pc = 0x1BDA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDA70u;
    // 0x1bda74: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1BDA70u, 0x1BDA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDA78u;
label_1bda78:
    // 0x1bda78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bda78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bda7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA7Cu;
        // 0x1bda80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDA84u;
}
