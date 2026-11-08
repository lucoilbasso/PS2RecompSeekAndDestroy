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

// Function: entry_0017aea0
// Address: 0x17aea0 - 0x17aeb8
void entry_0017aea0_0x17aea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017aea0_0x17aea0");
#endif

    switch (ctx->pc) {
        case 0x17aea8u: goto label_17aea8;
        default: break;
    }

    ctx->pc = 0x17aea0u;

    // 0x17aea0: 0xc067260  jal         func_19C980
    ctx->pc = 0x17AEA0u;
    SET_GPR_U32(ctx, 31, 0x17AEA8u);
    ctx->pc = 0x17AEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AEA0u;
    // 0x17aea4: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C980u, 0x17AEA0u, 0x17AEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AEA8u;
label_17aea8:
    // 0x17aea8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x17aea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17aeac: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x17aeacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17aeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x17AEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AEB0u;
        // 0x17aeb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AEB8u;
}
