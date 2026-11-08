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

// Function: entry_0017cbe0
// Address: 0x17cbe0 - 0x17cbf8
void entry_0017cbe0_0x17cbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cbe0_0x17cbe0");
#endif

    switch (ctx->pc) {
        case 0x17cbe8u: goto label_17cbe8;
        default: break;
    }

    ctx->pc = 0x17cbe0u;

    // 0x17cbe0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17CBE0u;
    SET_GPR_U32(ctx, 31, 0x17CBE8u);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17CBE0u, 0x17CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CBE8u;
label_17cbe8:
    // 0x17cbe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17cbe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cbec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17cbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17cbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x17CBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBF0u;
        // 0x17cbf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CBF8u;
}
