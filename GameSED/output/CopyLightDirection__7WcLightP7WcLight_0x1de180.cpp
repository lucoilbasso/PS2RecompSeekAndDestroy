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

// Function: CopyLightDirection__7WcLightP7WcLight
// Address: 0x1de180 - 0x1de1b4
void CopyLightDirection__7WcLightP7WcLight_0x1de180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyLightDirection__7WcLightP7WcLight_0x1de180");
#endif

    ctx->pc = 0x1de180u;

    // 0x1de180: 0xdca201f0  ld          $v0, 0x1F0($a1)
    ctx->pc = 0x1de180u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 496)));
    // 0x1de184: 0xfc8201f0  sd          $v0, 0x1F0($a0)
    ctx->pc = 0x1de184u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 496), GPR_U64(ctx, 2));
    // 0x1de188: 0xdca301f8  ld          $v1, 0x1F8($a1)
    ctx->pc = 0x1de188u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 504)));
    // 0x1de18c: 0xfc8301f8  sd          $v1, 0x1F8($a0)
    ctx->pc = 0x1de18cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 504), GPR_U64(ctx, 3));
    // 0x1de190: 0xdca20200  ld          $v0, 0x200($a1)
    ctx->pc = 0x1de190u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 512)));
    // 0x1de194: 0xfc820200  sd          $v0, 0x200($a0)
    ctx->pc = 0x1de194u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 512), GPR_U64(ctx, 2));
    // 0x1de198: 0xdca30208  ld          $v1, 0x208($a1)
    ctx->pc = 0x1de198u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 520)));
    // 0x1de19c: 0xfc830208  sd          $v1, 0x208($a0)
    ctx->pc = 0x1de19cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 520), GPR_U64(ctx, 3));
    // 0x1de1a0: 0xdca20210  ld          $v0, 0x210($a1)
    ctx->pc = 0x1de1a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 528)));
    // 0x1de1a4: 0xfc820210  sd          $v0, 0x210($a0)
    ctx->pc = 0x1de1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 528), GPR_U64(ctx, 2));
    // 0x1de1a8: 0xdca30218  ld          $v1, 0x218($a1)
    ctx->pc = 0x1de1a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 536)));
    // 0x1de1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1ACu;
        // 0x1de1b0: 0xfc830218  sd          $v1, 0x218($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 536), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE1B4u;
}
