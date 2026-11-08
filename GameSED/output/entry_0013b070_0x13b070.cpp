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

// Function: entry_0013b070
// Address: 0x13b070 - 0x13b08c
void entry_0013b070_0x13b070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b070_0x13b070");
#endif

    switch (ctx->pc) {
        case 0x13b078u: goto label_13b078;
        default: break;
    }

    ctx->pc = 0x13b070u;

    // 0x13b070: 0xc043ff0  jal         func_10FFC0
    ctx->pc = 0x13B070u;
    SET_GPR_U32(ctx, 31, 0x13B078u);
    ctx->pc = 0x13B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B070u;
    // 0x13b074: 0xae220204  sw          $v0, 0x204($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FFC0u, 0x13B070u, 0x13B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B078u;
label_13b078:
    // 0x13b078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13b078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b07c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13b07cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13b080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b084: 0x3e00008  jr          $ra
    ctx->pc = 0x13B084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B084u;
        // 0x13b088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B08Cu;
}
