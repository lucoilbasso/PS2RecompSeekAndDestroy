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

// Function: terminate__Fv
// Address: 0x1cca68 - 0x1cca80
void terminate__Fv_0x1cca68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("terminate__Fv_0x1cca68");
#endif

    switch (ctx->pc) {
        case 0x1cca68u: goto label_1cca68;
        case 0x1cca6cu: goto label_1cca6c;
        case 0x1cca70u: goto label_1cca70;
        case 0x1cca74u: goto label_1cca74;
        case 0x1cca78u: goto label_1cca78;
        case 0x1cca7cu: goto label_1cca7c;
        default: break;
    }

    ctx->pc = 0x1cca68u;

label_1cca68:
    // 0x1cca68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cca68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cca6c:
    // 0x1cca6c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1cca70:
    // 0x1cca70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cca74:
    // 0x1cca74: 0x8c43de10  lw          $v1, -0x21F0($v0)
    ctx->pc = 0x1cca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958608)));
label_1cca78:
    // 0x1cca78: 0x60f809  jalr        $v1
label_1cca7c:
    if (ctx->pc == 0x1CCA7Cu) {
        ctx->pc = 0x1CCA80u;
        goto label_fallthrough_0x1cca78;
    }
    ctx->pc = 0x1CCA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CCA80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCA78u, 0x1CCA80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1cca78:
    ctx->pc = 0x1CCA80u;
}
