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

// Function: entry_0018736c
// Address: 0x18736c - 0x187384
void entry_0018736c_0x18736c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018736c_0x18736c");
#endif

    switch (ctx->pc) {
        case 0x187374u: goto label_187374;
        default: break;
    }

    ctx->pc = 0x18736cu;

    // 0x18736c: 0xc061a60  jal         func_186980
    ctx->pc = 0x18736Cu;
    SET_GPR_U32(ctx, 31, 0x187374u);
    ctx->pc = 0x187370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18736Cu;
    // 0x187370: 0xae0001c0  sw          $zero, 0x1C0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186980u, 0x18736Cu, 0x187374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187374u;
label_187374:
    // 0x187374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187378: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x187378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18737c: 0x3e00008  jr          $ra
    ctx->pc = 0x18737Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18737Cu;
        // 0x187380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18737Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187384u;
}
