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

// Function: entry_0011918c
// Address: 0x11918c - 0x1191b8
void entry_0011918c_0x11918c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011918c_0x11918c");
#endif

    switch (ctx->pc) {
        case 0x119198u: goto label_119198;
        default: break;
    }

    ctx->pc = 0x11918cu;

    // 0x11918c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11918cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x119190: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119190u;
    SET_GPR_U32(ctx, 31, 0x119198u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119190u, 0x119198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119198u;
label_119198:
    // 0x119198: 0x240324d0  addiu       $v1, $zero, 0x24D0
    ctx->pc = 0x119198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x11919c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x11919cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1191a0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1191a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1191a4: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x1191a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x1191a8: 0x2421c540  addiu       $at, $at, -0x3AC0
    ctx->pc = 0x1191a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294952256));
    // 0x1191ac: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1191acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1191b0: 0xac400c0c  sw          $zero, 0xC0C($v0)
    ctx->pc = 0x1191b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3084), GPR_U32(ctx, 0));
    // 0x1191b4: 0x24420c28  addiu       $v0, $v0, 0xC28
    ctx->pc = 0x1191b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3112));
    ctx->pc = 0x1191b8u;
}
