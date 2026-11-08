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

// Function: entry_0016af84
// Address: 0x16af84 - 0x16af98
void entry_0016af84_0x16af84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016af84_0x16af84");
#endif

    switch (ctx->pc) {
        case 0x16af8cu: goto label_16af8c;
        default: break;
    }

    ctx->pc = 0x16af84u;

    // 0x16af84: 0xc059892  jal         func_166248
    ctx->pc = 0x16AF84u;
    SET_GPR_U32(ctx, 31, 0x16AF8Cu);
    ctx->pc = 0x16AF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AF84u;
    // 0x16af88: 0x24c6aa50  addiu       $a2, $a2, -0x55B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166248u, 0x16AF84u, 0x16AF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AF8Cu;
label_16af8c:
    // 0x16af8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16af8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16af90: 0x3e00008  jr          $ra
    ctx->pc = 0x16AF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF90u;
        // 0x16af94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AF98u;
}
