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

// Function: entry_001bb7fc
// Address: 0x1bb7fc - 0x1bb824
void entry_001bb7fc_0x1bb7fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb7fc_0x1bb7fc");
#endif

    switch (ctx->pc) {
        case 0x1bb818u: goto label_1bb818;
        default: break;
    }

    ctx->pc = 0x1bb7fcu;

    // 0x1bb7fc: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x1bb7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
    // 0x1bb800: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bb800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb804: 0x2508d918  addiu       $t0, $t0, -0x26E8
    ctx->pc = 0x1bb804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957336));
    // 0x1bb808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb80c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb80cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb810: 0xc06ee1c  jal         func_1BB870
    ctx->pc = 0x1BB810u;
    SET_GPR_U32(ctx, 31, 0x1BB818u);
    ctx->pc = 0x1BB814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB810u;
    // 0x1bb814: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB870u, 0x1BB810u, 0x1BB818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB818u;
label_1bb818:
    // 0x1bb818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb81c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB81Cu;
        // 0x1bb820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB824u;
}
