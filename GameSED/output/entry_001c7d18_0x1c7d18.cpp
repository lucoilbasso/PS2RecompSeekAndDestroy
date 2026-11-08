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

// Function: entry_001c7d18
// Address: 0x1c7d18 - 0x1c7d38
void entry_001c7d18_0x1c7d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7d18_0x1c7d18");
#endif

    ctx->pc = 0x1c7d18u;

    // 0x1c7d18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c7d18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7d1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c7d1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7d20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c7d20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c7d24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c7d24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7d28: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c7d28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c7d2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c7d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7d30: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D30u;
        // 0x1c7d34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7D38u;
}
