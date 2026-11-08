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

// Function: entry_0010c194
// Address: 0x10c194 - 0x10c1b4
void entry_0010c194_0x10c194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c194_0x10c194");
#endif

    switch (ctx->pc) {
        case 0x10c1a4u: goto label_10c1a4;
        default: break;
    }

    ctx->pc = 0x10c194u;

    // 0x10c194: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10c198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c19c: 0xc041da8  jal         func_1076A0
    ctx->pc = 0x10C19Cu;
    SET_GPR_U32(ctx, 31, 0x10C1A4u);
    ctx->pc = 0x10C1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C19Cu;
    // 0x10c1a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1076A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076A0u, 0x10C19Cu, 0x10C1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C1A4u;
label_10c1a4:
    // 0x10c1a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c1a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10c1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x10C1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C1ACu;
        // 0x10c1b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C1B4u;
}
