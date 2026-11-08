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

// Function: entry_0017c670
// Address: 0x17c670 - 0x17c684
void entry_0017c670_0x17c670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c670_0x17c670");
#endif

    switch (ctx->pc) {
        case 0x17c678u: goto label_17c678;
        default: break;
    }

    ctx->pc = 0x17c670u;

    // 0x17c670: 0xc05f1a2  jal         func_17C688
    ctx->pc = 0x17C670u;
    SET_GPR_U32(ctx, 31, 0x17C678u);
    ctx->pc = 0x17C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C670u;
    // 0x17c674: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C688u, 0x17C670u, 0x17C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C678u;
label_17c678:
    // 0x17c678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c67c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C67Cu;
        // 0x17c680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C684u;
}
