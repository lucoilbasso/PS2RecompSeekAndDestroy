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

// Function: entry_0016d610
// Address: 0x16d610 - 0x16d62c
void entry_0016d610_0x16d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d610_0x16d610");
#endif

    switch (ctx->pc) {
        case 0x16d618u: goto label_16d618;
        default: break;
    }

    ctx->pc = 0x16d610u;

    // 0x16d610: 0xc0618d4  jal         func_186350
    ctx->pc = 0x16D610u;
    SET_GPR_U32(ctx, 31, 0x16D618u);
    ctx->pc = 0x16D614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D610u;
    // 0x16d614: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x16D610u, 0x16D618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D618u;
label_16d618:
    // 0x16d618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16d618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d61c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16d61cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16d620: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d624: 0x3e00008  jr          $ra
    ctx->pc = 0x16D624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D624u;
        // 0x16d628: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D62Cu;
}
