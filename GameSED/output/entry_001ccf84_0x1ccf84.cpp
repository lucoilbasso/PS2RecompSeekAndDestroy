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

// Function: entry_001ccf84
// Address: 0x1ccf84 - 0x1ccf98
void entry_001ccf84_0x1ccf84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccf84_0x1ccf84");
#endif

    switch (ctx->pc) {
        case 0x1ccf8cu: goto label_1ccf8c;
        default: break;
    }

    ctx->pc = 0x1ccf84u;

    // 0x1ccf84: 0xc073374  jal         func_1CCDD0
    ctx->pc = 0x1CCF84u;
    SET_GPR_U32(ctx, 31, 0x1CCF8Cu);
    ctx->pc = 0x1CCF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF84u;
    // 0x1ccf88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCDD0u, 0x1CCF84u, 0x1CCF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF8Cu;
label_1ccf8c:
    // 0x1ccf8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccf8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf90: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF90u;
        // 0x1ccf94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF98u;
}
