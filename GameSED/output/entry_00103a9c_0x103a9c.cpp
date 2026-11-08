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

// Function: entry_00103a9c
// Address: 0x103a9c - 0x103ab8
void entry_00103a9c_0x103a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103a9c_0x103a9c");
#endif

    switch (ctx->pc) {
        case 0x103aa4u: goto label_103aa4;
        default: break;
    }

    ctx->pc = 0x103a9cu;

    // 0x103a9c: 0xc068354  jal         func_1A0D50
    ctx->pc = 0x103A9Cu;
    SET_GPR_U32(ctx, 31, 0x103AA4u);
    ctx->pc = 0x103AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A9Cu;
    // 0x103aa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D50u, 0x103A9Cu, 0x103AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103AA4u;
label_103aa4:
    // 0x103aa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103aa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103aac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x103aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x103AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103AB0u;
        // 0x103ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103AB8u;
}
