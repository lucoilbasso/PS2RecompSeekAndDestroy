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

// Function: entry_00165308
// Address: 0x165308 - 0x165328
void entry_00165308_0x165308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165308_0x165308");
#endif

    ctx->pc = 0x165308u;

    // 0x165308: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x165308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16530c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x16530cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165310: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x165310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165314: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x165314u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x165318: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x165318u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16531c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x16531cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x165320: 0x3e00008  jr          $ra
    ctx->pc = 0x165320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165320u;
        // 0x165324: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165328u;
}
