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

// Function: entry_00156b1c
// Address: 0x156b1c - 0x156b34
void entry_00156b1c_0x156b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156b1c_0x156b1c");
#endif

    switch (ctx->pc) {
        case 0x156b24u: goto label_156b24;
        default: break;
    }

    ctx->pc = 0x156b1cu;

    // 0x156b1c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x156B1Cu;
    SET_GPR_U32(ctx, 31, 0x156B24u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x156B1Cu, 0x156B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B24u;
label_156b24:
    // 0x156b24: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x156b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x156b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b2c: 0x24a56e20  addiu       $a1, $a1, 0x6E20
    ctx->pc = 0x156b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28192));
    // 0x156b30: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x156b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x156b34u;
}
