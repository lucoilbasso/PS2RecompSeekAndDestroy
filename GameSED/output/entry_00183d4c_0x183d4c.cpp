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

// Function: entry_00183d4c
// Address: 0x183d4c - 0x183d64
void entry_00183d4c_0x183d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183d4c_0x183d4c");
#endif

    switch (ctx->pc) {
        case 0x183d54u: goto label_183d54;
        default: break;
    }

    ctx->pc = 0x183d4cu;

    // 0x183d4c: 0xc060f8e  jal         func_183E38
    ctx->pc = 0x183D4Cu;
    SET_GPR_U32(ctx, 31, 0x183D54u);
    ctx->pc = 0x183D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D4Cu;
    // 0x183d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183E38u, 0x183D4Cu, 0x183D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D54u;
label_183d54:
    // 0x183d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x183d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183d58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x183d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x183D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D5Cu;
        // 0x183d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183D64u;
}
