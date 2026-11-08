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

// Function: entry_0017e4ec
// Address: 0x17e4ec - 0x17e504
void entry_0017e4ec_0x17e4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e4ec_0x17e4ec");
#endif

    switch (ctx->pc) {
        case 0x17e4f4u: goto label_17e4f4;
        default: break;
    }

    ctx->pc = 0x17e4ecu;

    // 0x17e4ec: 0xc05f3c8  jal         func_17CF20
    ctx->pc = 0x17E4ECu;
    SET_GPR_U32(ctx, 31, 0x17E4F4u);
    ctx->pc = 0x17E4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E4ECu;
    // 0x17e4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF20u, 0x17E4ECu, 0x17E4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E4F4u;
label_17e4f4:
    // 0x17e4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e4f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17e4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x17E4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4FCu;
        // 0x17e500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E504u;
}
