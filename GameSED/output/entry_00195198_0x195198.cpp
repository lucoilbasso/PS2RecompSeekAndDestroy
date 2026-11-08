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

// Function: entry_00195198
// Address: 0x195198 - 0x1951ac
void entry_00195198_0x195198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195198_0x195198");
#endif

    switch (ctx->pc) {
        case 0x1951a0u: goto label_1951a0;
        default: break;
    }

    ctx->pc = 0x195198u;

    // 0x195198: 0xc064ec6  jal         func_193B18
    ctx->pc = 0x195198u;
    SET_GPR_U32(ctx, 31, 0x1951A0u);
    ctx->pc = 0x19519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195198u;
    // 0x19519c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B18u, 0x195198u, 0x1951A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1951A0u;
label_1951a0:
    // 0x1951a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1951a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1951a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1951A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1951A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951A4u;
        // 0x1951a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1951A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1951ACu;
}
