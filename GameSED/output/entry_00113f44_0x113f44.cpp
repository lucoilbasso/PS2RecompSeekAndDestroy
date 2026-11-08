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

// Function: entry_00113f44
// Address: 0x113f44 - 0x113f5c
void entry_00113f44_0x113f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113f44_0x113f44");
#endif

    switch (ctx->pc) {
        case 0x113f4cu: goto label_113f4c;
        default: break;
    }

    ctx->pc = 0x113f44u;

    // 0x113f44: 0xc04171a  jal         func_105C68
    ctx->pc = 0x113F44u;
    SET_GPR_U32(ctx, 31, 0x113F4Cu);
    ctx->pc = 0x113F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F44u;
    // 0x113f48: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x113F44u, 0x113F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F4Cu;
label_113f4c:
    // 0x113f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113f50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x113f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113f54: 0x3e00008  jr          $ra
    ctx->pc = 0x113F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F54u;
        // 0x113f58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113F5Cu;
}
