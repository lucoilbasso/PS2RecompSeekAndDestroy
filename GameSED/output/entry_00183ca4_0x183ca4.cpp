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

// Function: entry_00183ca4
// Address: 0x183ca4 - 0x183cb8
void entry_00183ca4_0x183ca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183ca4_0x183ca4");
#endif

    switch (ctx->pc) {
        case 0x183cacu: goto label_183cac;
        default: break;
    }

    ctx->pc = 0x183ca4u;

    // 0x183ca4: 0xc060f2e  jal         func_183CB8
    ctx->pc = 0x183CA4u;
    SET_GPR_U32(ctx, 31, 0x183CACu);
    ctx->pc = 0x183CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183CB8u, 0x183CA4u, 0x183CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183CACu;
label_183cac:
    // 0x183cac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x183CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183CB0u;
        // 0x183cb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183CB8u;
}
