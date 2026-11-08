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

// Function: entry_00139e80
// Address: 0x139e80 - 0x139ea0
void entry_00139e80_0x139e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139e80_0x139e80");
#endif

    ctx->pc = 0x139e80u;

    // 0x139e80: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x139e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139e84: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x139e84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139e88: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x139e88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x139e8c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x139e8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139e90: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x139e90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x139e94: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x139e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x139e98: 0x3e00008  jr          $ra
    ctx->pc = 0x139E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E98u;
        // 0x139e9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139EA0u;
}
