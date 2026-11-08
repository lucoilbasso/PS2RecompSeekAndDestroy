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

// Function: entry_001dd120
// Address: 0x1dd120 - 0x1dd144
void entry_001dd120_0x1dd120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd120_0x1dd120");
#endif

    switch (ctx->pc) {
        case 0x1dd128u: goto label_1dd128;
        default: break;
    }

    ctx->pc = 0x1dd120u;

    // 0x1dd120: 0xc061422  jal         func_185088
    ctx->pc = 0x1DD120u;
    SET_GPR_U32(ctx, 31, 0x1DD128u);
    ctx->pc = 0x1DD124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD120u;
    // 0x1dd124: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1DD120u, 0x1DD128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD128u;
label_1dd128:
    // 0x1dd128: 0x264200e0  addiu       $v0, $s2, 0xE0
    ctx->pc = 0x1dd128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x1dd12c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd12cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd130: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd134: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd138: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dd138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd13c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD13Cu;
        // 0x1dd140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD144u;
}
