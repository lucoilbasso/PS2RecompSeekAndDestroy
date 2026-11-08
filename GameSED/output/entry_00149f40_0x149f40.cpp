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

// Function: entry_00149f40
// Address: 0x149f40 - 0x149f54
void entry_00149f40_0x149f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149f40_0x149f40");
#endif

    switch (ctx->pc) {
        case 0x149f48u: goto label_149f48;
        default: break;
    }

    ctx->pc = 0x149f40u;

    // 0x149f40: 0xc0528b6  jal         func_14A2D8
    ctx->pc = 0x149F40u;
    SET_GPR_U32(ctx, 31, 0x149F48u);
    ctx->pc = 0x14A2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2D8u, 0x149F40u, 0x149F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149F48u;
label_149f48:
    // 0x149f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x149F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F4Cu;
        // 0x149f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149F54u;
}
