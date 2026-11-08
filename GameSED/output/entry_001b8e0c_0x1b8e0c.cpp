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

// Function: entry_001b8e0c
// Address: 0x1b8e0c - 0x1b8e3c
void entry_001b8e0c_0x1b8e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8e0c_0x1b8e0c");
#endif

    ctx->pc = 0x1b8e0cu;

    // 0x1b8e0c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1b8e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b8e10: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1b8e10u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b8e14: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1b8e14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b8e18: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b8e18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b8e1c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b8e1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b8e20: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b8e20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8e24: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b8e24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b8e28: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b8e28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8e2c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b8e2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8e30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b8e30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8e34: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E34u;
        // 0x1b8e38: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8E3Cu;
}
