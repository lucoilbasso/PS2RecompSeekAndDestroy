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

// Function: CopyLightColor__7WcLightP7WcLight
// Address: 0x1de138 - 0x1de17c
void CopyLightColor__7WcLightP7WcLight_0x1de138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyLightColor__7WcLightP7WcLight_0x1de138");
#endif

    ctx->pc = 0x1de138u;

    // 0x1de138: 0xdca201e0  ld          $v0, 0x1E0($a1)
    ctx->pc = 0x1de138u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 480)));
    // 0x1de13c: 0xfc8201e0  sd          $v0, 0x1E0($a0)
    ctx->pc = 0x1de13cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 480), GPR_U64(ctx, 2));
    // 0x1de140: 0xdca301e8  ld          $v1, 0x1E8($a1)
    ctx->pc = 0x1de140u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 488)));
    // 0x1de144: 0xfc8301e8  sd          $v1, 0x1E8($a0)
    ctx->pc = 0x1de144u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 488), GPR_U64(ctx, 3));
    // 0x1de148: 0xdca20220  ld          $v0, 0x220($a1)
    ctx->pc = 0x1de148u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 544)));
    // 0x1de14c: 0xfc820220  sd          $v0, 0x220($a0)
    ctx->pc = 0x1de14cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 544), GPR_U64(ctx, 2));
    // 0x1de150: 0xdca30228  ld          $v1, 0x228($a1)
    ctx->pc = 0x1de150u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 552)));
    // 0x1de154: 0xfc830228  sd          $v1, 0x228($a0)
    ctx->pc = 0x1de154u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 552), GPR_U64(ctx, 3));
    // 0x1de158: 0xdca20230  ld          $v0, 0x230($a1)
    ctx->pc = 0x1de158u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 560)));
    // 0x1de15c: 0xfc820230  sd          $v0, 0x230($a0)
    ctx->pc = 0x1de15cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 560), GPR_U64(ctx, 2));
    // 0x1de160: 0xdca30238  ld          $v1, 0x238($a1)
    ctx->pc = 0x1de160u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 568)));
    // 0x1de164: 0xfc830238  sd          $v1, 0x238($a0)
    ctx->pc = 0x1de164u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 568), GPR_U64(ctx, 3));
    // 0x1de168: 0xdca20240  ld          $v0, 0x240($a1)
    ctx->pc = 0x1de168u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x1de16c: 0xfc820240  sd          $v0, 0x240($a0)
    ctx->pc = 0x1de16cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 576), GPR_U64(ctx, 2));
    // 0x1de170: 0xdca30248  ld          $v1, 0x248($a1)
    ctx->pc = 0x1de170u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 584)));
    // 0x1de174: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE174u;
        // 0x1de178: 0xfc830248  sd          $v1, 0x248($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 584), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE17Cu;
}
