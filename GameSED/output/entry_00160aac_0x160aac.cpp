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

// Function: entry_00160aac
// Address: 0x160aac - 0x160ac4
void entry_00160aac_0x160aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160aac_0x160aac");
#endif

    switch (ctx->pc) {
        case 0x160ab4u: goto label_160ab4;
        default: break;
    }

    ctx->pc = 0x160aacu;

    // 0x160aac: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x160AACu;
    SET_GPR_U32(ctx, 31, 0x160AB4u);
    ctx->pc = 0x160AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160AACu;
    // 0x160ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x160AACu, 0x160AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160AB4u;
label_160ab4:
    // 0x160ab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160ab8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x160ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160abc: 0x3e00008  jr          $ra
    ctx->pc = 0x160ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160ABCu;
        // 0x160ac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160AC4u;
}
