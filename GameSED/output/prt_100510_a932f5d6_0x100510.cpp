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

// Function: prt_100510_a932f5d6
// Address: 0x100510 - 0x100520
void prt_100510_a932f5d6_0x100510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("prt_100510_a932f5d6_0x100510");
#endif

    switch (ctx->pc) {
        case 0x100518u: goto label_100518;
        default: break;
    }

    ctx->pc = 0x100510u;

    // 0x100510: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x100510u;
    SET_GPR_U32(ctx, 31, 0x100518u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x100510u, 0x100518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100518u;
label_100518:
    // 0x100518: 0x11283e  dsrl32      $a1, $s1, 0
    ctx->pc = 0x100518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x10051c: 0x10303e  dsrl32      $a2, $s0, 0
    ctx->pc = 0x10051cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) >> (32 + 0));
    ctx->pc = 0x100520u;
}
