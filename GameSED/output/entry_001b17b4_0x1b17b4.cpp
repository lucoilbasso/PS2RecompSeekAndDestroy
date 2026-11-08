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

// Function: entry_001b17b4
// Address: 0x1b17b4 - 0x1b17d0
void entry_001b17b4_0x1b17b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b17b4_0x1b17b4");
#endif

    ctx->pc = 0x1b17b4u;

    // 0x1b17b4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b17b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b17b8: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1b17b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b17bc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1b17bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b17c0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1b17c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b17c4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b17c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b17c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B17C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17C8u;
        // 0x1b17cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B17C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B17D0u;
}
