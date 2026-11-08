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

// Function: CopyLightMatrix__7WcLightP7WcLight
// Address: 0x1de0f0 - 0x1de138
void CopyLightMatrix__7WcLightP7WcLight_0x1de0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyLightMatrix__7WcLightP7WcLight_0x1de0f0");
#endif

    switch (ctx->pc) {
        case 0x1de0fcu: goto label_1de0fc;
        default: break;
    }

    ctx->pc = 0x1de0f0u;

    // 0x1de0f0: 0x24a20250  addiu       $v0, $a1, 0x250
    ctx->pc = 0x1de0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 592));
    // 0x1de0f4: 0x24a50150  addiu       $a1, $a1, 0x150
    ctx->pc = 0x1de0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 336));
    // 0x1de0f8: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x1de0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
label_1de0fc:
    // 0x1de0fc: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x1de0fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1de100: 0xdca60008  ld          $a2, 0x8($a1)
    ctx->pc = 0x1de100u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1de104: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x1de104u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1de108: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x1de108u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1de10c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1de10cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1de110: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x1de110u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x1de114: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x1de114u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x1de118: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1de118u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1de11c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1de11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1de120: 0x0  nop
    ctx->pc = 0x1de120u;
    // NOP
    // 0x1de124: 0x0  nop
    ctx->pc = 0x1de124u;
    // NOP
    // 0x1de128: 0x14a2fff4  bne         $a1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DE128u;
    {
        const bool branch_taken_0x1de128 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DE12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE128u;
        // 0x1de12c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de128) {
            ctx->pc = 0x1DE0FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de0fc;
        }
    }
    ctx->pc = 0x1DE130u;
    // 0x1de130: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE138u;
}
