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

// Function: entry_00104b20
// Address: 0x104b20 - 0x104b44
void entry_00104b20_0x104b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104b20_0x104b20");
#endif

    ctx->pc = 0x104b20u;

    // 0x104b20: 0x8f8288a0  lw          $v0, -0x7760($gp)
    ctx->pc = 0x104b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x104b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104b28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104b2c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x104b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x104b30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104b30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104b34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x104b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104b38: 0xaf8288a0  sw          $v0, -0x7760($gp)
    ctx->pc = 0x104b38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936736), GPR_U32(ctx, 2));
    // 0x104b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x104B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B3Cu;
        // 0x104b40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104B44u;
}
