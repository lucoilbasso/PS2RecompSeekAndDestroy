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

// Function: entry_00106ee4
// Address: 0x106ee4 - 0x106f00
void entry_00106ee4_0x106ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106ee4_0x106ee4");
#endif

    ctx->pc = 0x106ee4u;

    // 0x106ee4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x106ee4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x106ee8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x106ee8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106eec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x106eecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x106ef0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x106ef0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106ef4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x106ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x106ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x106EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EF8u;
        // 0x106efc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106F00u;
}
