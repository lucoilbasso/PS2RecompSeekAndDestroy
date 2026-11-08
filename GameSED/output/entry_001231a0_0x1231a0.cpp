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

// Function: entry_001231a0
// Address: 0x1231a0 - 0x1231b8
void entry_001231a0_0x1231a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001231a0_0x1231a0");
#endif

    switch (ctx->pc) {
        case 0x1231a8u: goto label_1231a8;
        default: break;
    }

    ctx->pc = 0x1231a0u;

    // 0x1231a0: 0xc0612a4  jal         func_184A90
    ctx->pc = 0x1231A0u;
    SET_GPR_U32(ctx, 31, 0x1231A8u);
    ctx->pc = 0x1231A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1231A0u;
    // 0x1231a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A90u, 0x1231A0u, 0x1231A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1231A8u;
label_1231a8:
    // 0x1231a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1231a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1231ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1231acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1231b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1231B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1231B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231B0u;
        // 0x1231b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1231B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1231B8u;
}
