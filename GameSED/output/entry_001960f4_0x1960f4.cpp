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

// Function: entry_001960f4
// Address: 0x1960f4 - 0x19610c
void entry_001960f4_0x1960f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001960f4_0x1960f4");
#endif

    switch (ctx->pc) {
        case 0x1960fcu: goto label_1960fc;
        default: break;
    }

    ctx->pc = 0x1960f4u;

    // 0x1960f4: 0xc064e8e  jal         func_193A38
    ctx->pc = 0x1960F4u;
    SET_GPR_U32(ctx, 31, 0x1960FCu);
    ctx->pc = 0x1960F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1960F4u;
    // 0x1960f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193A38u, 0x1960F4u, 0x1960FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1960FCu;
label_1960fc:
    // 0x1960fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1960fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196100: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x196100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x196104: 0x3e00008  jr          $ra
    ctx->pc = 0x196104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196104u;
        // 0x196108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19610Cu;
}
