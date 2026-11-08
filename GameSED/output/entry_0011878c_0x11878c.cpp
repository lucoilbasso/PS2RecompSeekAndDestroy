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

// Function: entry_0011878c
// Address: 0x11878c - 0x1187a8
void entry_0011878c_0x11878c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011878c_0x11878c");
#endif

    ctx->pc = 0x11878cu;

    // 0x11878c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11878cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118794: 0xae021c70  sw          $v0, 0x1C70($s0)
    ctx->pc = 0x118794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7280), GPR_U32(ctx, 2));
    // 0x118798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11879c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11879cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1187a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1187A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1187A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1187A0u;
        // 0x1187a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1187A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1187A8u;
}
