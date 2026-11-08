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

// Function: entry_00177a1c
// Address: 0x177a1c - 0x177a34
void entry_00177a1c_0x177a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177a1c_0x177a1c");
#endif

    switch (ctx->pc) {
        case 0x177a24u: goto label_177a24;
        default: break;
    }

    ctx->pc = 0x177a1cu;

    // 0x177a1c: 0xc05ded4  jal         func_177B50
    ctx->pc = 0x177A1Cu;
    SET_GPR_U32(ctx, 31, 0x177A24u);
    ctx->pc = 0x177A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A1Cu;
    // 0x177a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B50u, 0x177A1Cu, 0x177A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A24u;
label_177a24:
    // 0x177a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177a28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x177a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x177A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A2Cu;
        // 0x177a30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177A34u;
}
