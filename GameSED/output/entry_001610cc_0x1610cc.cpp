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

// Function: entry_001610cc
// Address: 0x1610cc - 0x1610e8
void entry_001610cc_0x1610cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001610cc_0x1610cc");
#endif

    switch (ctx->pc) {
        case 0x1610d4u: goto label_1610d4;
        default: break;
    }

    ctx->pc = 0x1610ccu;

    // 0x1610cc: 0xc065e78  jal         func_1979E0
    ctx->pc = 0x1610CCu;
    SET_GPR_U32(ctx, 31, 0x1610D4u);
    ctx->pc = 0x1610D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1610CCu;
    // 0x1610d0: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1979E0u, 0x1610CCu, 0x1610D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1610D4u;
label_1610d4:
    // 0x1610d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1610d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1610d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1610d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1610dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1610dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1610e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1610E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1610E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610E0u;
        // 0x1610e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1610E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1610E8u;
}
