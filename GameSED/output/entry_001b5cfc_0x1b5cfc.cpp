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

// Function: entry_001b5cfc
// Address: 0x1b5cfc - 0x1b5d1c
void entry_001b5cfc_0x1b5cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5cfc_0x1b5cfc");
#endif

    ctx->pc = 0x1b5cfcu;

    // 0x1b5cfc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b5cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b5d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5d04: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1b5d04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5d08: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b5d08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5d0c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b5d0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5d10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5d14: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D14u;
        // 0x1b5d18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5D1Cu;
}
