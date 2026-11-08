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

// Function: entry_0015e2fc
// Address: 0x15e2fc - 0x15e31c
void entry_0015e2fc_0x15e2fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e2fc_0x15e2fc");
#endif

    ctx->pc = 0x15e2fcu;

    // 0x15e2fc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15e2fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15e300: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15e300u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e304: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x15e304u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15e308: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x15e308u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e30c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x15e30cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e310: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15e310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e314: 0x3e00008  jr          $ra
    ctx->pc = 0x15E314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E314u;
        // 0x15e318: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E31Cu;
}
