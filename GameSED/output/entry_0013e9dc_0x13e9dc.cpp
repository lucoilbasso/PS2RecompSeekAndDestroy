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

// Function: entry_0013e9dc
// Address: 0x13e9dc - 0x13e9f4
void entry_0013e9dc_0x13e9dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e9dc_0x13e9dc");
#endif

    switch (ctx->pc) {
        case 0x13e9e4u: goto label_13e9e4;
        default: break;
    }

    ctx->pc = 0x13e9dcu;

    // 0x13e9dc: 0xc062260  jal         func_188980
    ctx->pc = 0x13E9DCu;
    SET_GPR_U32(ctx, 31, 0x13E9E4u);
    ctx->pc = 0x13E9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E9DCu;
    // 0x13e9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188980u, 0x13E9DCu, 0x13E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E9E4u;
label_13e9e4:
    // 0x13e9e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e9e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e9e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13e9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13e9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x13E9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E9ECu;
        // 0x13e9f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E9F4u;
}
