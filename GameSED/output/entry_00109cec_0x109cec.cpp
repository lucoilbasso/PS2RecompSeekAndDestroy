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

// Function: entry_00109cec
// Address: 0x109cec - 0x109d0c
void entry_00109cec_0x109cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109cec_0x109cec");
#endif

    ctx->pc = 0x109cecu;

    // 0x109cec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x109cecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x109cf0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x109cf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109cf4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x109cf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x109cf8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x109cf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109cfc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x109cfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x109d00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x109d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109d04: 0x3e00008  jr          $ra
    ctx->pc = 0x109D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D04u;
        // 0x109d08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109D0Cu;
}
