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

// Function: entry_00160a7c
// Address: 0x160a7c - 0x160a90
void entry_00160a7c_0x160a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160a7c_0x160a7c");
#endif

    switch (ctx->pc) {
        case 0x160a84u: goto label_160a84;
        default: break;
    }

    ctx->pc = 0x160a7cu;

    // 0x160a7c: 0xc05686a  jal         func_15A1A8
    ctx->pc = 0x160A7Cu;
    SET_GPR_U32(ctx, 31, 0x160A84u);
    ctx->pc = 0x160A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160A7Cu;
    // 0x160a80: 0xa4400016  sh          $zero, 0x16($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A1A8u, 0x160A7Cu, 0x160A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160A84u;
label_160a84:
    // 0x160a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x160a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160a88: 0x3e00008  jr          $ra
    ctx->pc = 0x160A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A88u;
        // 0x160a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160A90u;
}
