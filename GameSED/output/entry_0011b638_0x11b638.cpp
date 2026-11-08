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

// Function: entry_0011b638
// Address: 0x11b638 - 0x11b654
void entry_0011b638_0x11b638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b638_0x11b638");
#endif

    switch (ctx->pc) {
        case 0x11b640u: goto label_11b640;
        default: break;
    }

    ctx->pc = 0x11b638u;

    // 0x11b638: 0xc06866c  jal         func_1A19B0
    ctx->pc = 0x11B638u;
    SET_GPR_U32(ctx, 31, 0x11B640u);
    ctx->pc = 0x11B63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B638u;
    // 0x11b63c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x11B638u, 0x11B640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B640u;
label_11b640:
    // 0x11b640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b644: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b648: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b64c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B64Cu;
        // 0x11b650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B654u;
}
