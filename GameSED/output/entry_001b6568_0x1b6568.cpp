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

// Function: entry_001b6568
// Address: 0x1b6568 - 0x1b658c
void entry_001b6568_0x1b6568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6568_0x1b6568");
#endif

    ctx->pc = 0x1b6568u;

    // 0x1b6568: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b6568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b656c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b656cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b6570: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b6570u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b6574: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b6574u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6578: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b6578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b657c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b657cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6580: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b6580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6584: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6584u;
        // 0x1b6588: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B658Cu;
}
