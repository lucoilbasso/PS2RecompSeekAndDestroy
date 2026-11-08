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

// Function: entry_001cf52c
// Address: 0x1cf52c - 0x1cf548
void entry_001cf52c_0x1cf52c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf52c_0x1cf52c");
#endif

    switch (ctx->pc) {
        case 0x1cf534u: goto label_1cf534;
        default: break;
    }

    ctx->pc = 0x1cf52cu;

    // 0x1cf52c: 0xc074448  jal         func_1D1120
    ctx->pc = 0x1CF52Cu;
    SET_GPR_U32(ctx, 31, 0x1CF534u);
    ctx->pc = 0x1CF530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF52Cu;
    // 0x1cf530: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1120u, 0x1CF52Cu, 0x1CF534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF534u;
label_1cf534:
    // 0x1cf534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf538: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1cf538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cf53c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1cf53cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1cf540: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF540u;
        // 0x1cf544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF548u;
}
