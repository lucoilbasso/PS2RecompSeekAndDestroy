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

// Function: entry_00106904
// Address: 0x106904 - 0x10691c
void entry_00106904_0x106904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106904_0x106904");
#endif

    switch (ctx->pc) {
        case 0x10690cu: goto label_10690c;
        default: break;
    }

    ctx->pc = 0x106904u;

    // 0x106904: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x106904u;
    SET_GPR_U32(ctx, 31, 0x10690Cu);
    ctx->pc = 0x106908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106904u;
    // 0x106908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x106904u, 0x10690Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10690Cu;
label_10690c:
    // 0x10690c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10690cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106910: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x106910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x106914: 0x3e00008  jr          $ra
    ctx->pc = 0x106914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106914u;
        // 0x106918: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10691Cu;
}
