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

// Function: entry_0014db54
// Address: 0x14db54 - 0x14db64
void entry_0014db54_0x14db54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014db54_0x14db54");
#endif

    switch (ctx->pc) {
        case 0x14db5cu: goto label_14db5c;
        default: break;
    }

    ctx->pc = 0x14db54u;

    // 0x14db54: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DB54u;
    SET_GPR_U32(ctx, 31, 0x14DB5Cu);
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DB54u, 0x14DB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB5Cu;
label_14db5c:
    // 0x14db5c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x14db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x14db60: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x14db60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    ctx->pc = 0x14db64u;
}
