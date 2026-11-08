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

// Function: entry_001b5f38
// Address: 0x1b5f38 - 0x1b5f60
void entry_001b5f38_0x1b5f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5f38_0x1b5f38");
#endif

    ctx->pc = 0x1b5f38u;

    // 0x1b5f38: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b5f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b5f3c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b5f3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b5f40: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b5f40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b5f44: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b5f44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b5f48: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b5f48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5f4c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b5f4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5f50: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b5f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5f54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b5f54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5f58: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F58u;
        // 0x1b5f5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5F60u;
}
