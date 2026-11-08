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

// Function: entry_00183bd4
// Address: 0x183bd4 - 0x183bec
void entry_00183bd4_0x183bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183bd4_0x183bd4");
#endif

    switch (ctx->pc) {
        case 0x183bdcu: goto label_183bdc;
        default: break;
    }

    ctx->pc = 0x183bd4u;

    // 0x183bd4: 0xc05f3c8  jal         func_17CF20
    ctx->pc = 0x183BD4u;
    SET_GPR_U32(ctx, 31, 0x183BDCu);
    ctx->pc = 0x183BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183BD4u;
    // 0x183bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF20u, 0x183BD4u, 0x183BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183BDCu;
label_183bdc:
    // 0x183bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x183bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183be0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x183be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183be4: 0x3e00008  jr          $ra
    ctx->pc = 0x183BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183BE4u;
        // 0x183be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183BECu;
}
