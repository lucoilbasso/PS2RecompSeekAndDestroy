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

// Function: entry_00192a84
// Address: 0x192a84 - 0x192aa0
void entry_00192a84_0x192a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192a84_0x192a84");
#endif

    switch (ctx->pc) {
        case 0x192a8cu: goto label_192a8c;
        default: break;
    }

    ctx->pc = 0x192a84u;

    // 0x192a84: 0xc064d90  jal         func_193640
    ctx->pc = 0x192A84u;
    SET_GPR_U32(ctx, 31, 0x192A8Cu);
    ctx->pc = 0x192A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A84u;
    // 0x192a88: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193640u, 0x192A84u, 0x192A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192A8Cu;
label_192a8c:
    // 0x192a8c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x192a8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192a90: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x192a90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x192a94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x192a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192a98: 0x3e00008  jr          $ra
    ctx->pc = 0x192A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A98u;
        // 0x192a9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192AA0u;
}
