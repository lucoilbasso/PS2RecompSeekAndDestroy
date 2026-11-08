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

// Function: unexpected__Fv
// Address: 0x1ccac0 - 0x1ccad8
void unexpected__Fv_0x1ccac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("unexpected__Fv_0x1ccac0");
#endif

    switch (ctx->pc) {
        case 0x1ccac0u: goto label_1ccac0;
        case 0x1ccac4u: goto label_1ccac4;
        case 0x1ccac8u: goto label_1ccac8;
        case 0x1ccaccu: goto label_1ccacc;
        case 0x1ccad0u: goto label_1ccad0;
        case 0x1ccad4u: goto label_1ccad4;
        default: break;
    }

    ctx->pc = 0x1ccac0u;

label_1ccac0:
    // 0x1ccac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ccac4:
    // 0x1ccac4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ccac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1ccac8:
    // 0x1ccac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ccacc:
    // 0x1ccacc: 0x8c43de0c  lw          $v1, -0x21F4($v0)
    ctx->pc = 0x1ccaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958604)));
label_1ccad0:
    // 0x1ccad0: 0x60f809  jalr        $v1
label_1ccad4:
    if (ctx->pc == 0x1CCAD4u) {
        ctx->pc = 0x1CCAD8u;
        goto label_fallthrough_0x1ccad0;
    }
    ctx->pc = 0x1CCAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CCAD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCAD0u, 0x1CCAD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1ccad0:
    ctx->pc = 0x1CCAD8u;
}
