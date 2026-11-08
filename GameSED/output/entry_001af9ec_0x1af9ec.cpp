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

// Function: entry_001af9ec
// Address: 0x1af9ec - 0x1afa14
void entry_001af9ec_0x1af9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af9ec_0x1af9ec");
#endif

    switch (ctx->pc) {
        case 0x1af9f4u: goto label_1af9f4;
        default: break;
    }

    ctx->pc = 0x1af9ecu;

    // 0x1af9ec: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1AF9ECu;
    SET_GPR_U32(ctx, 31, 0x1AF9F4u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1AF9ECu, 0x1AF9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF9F4u;
label_1af9f4:
    // 0x1af9f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1af9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af9f8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1af9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1af9fc: 0xac23f000  sw          $v1, -0x1000($at)
    ctx->pc = 0x1af9fcu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 3));
    // 0x1afa00: 0xf  sync
    ctx->pc = 0x1afa00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1afa04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFA04u;
    {
        const bool branch_taken_0x1afa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afa04) {
            ctx->pc = 0x1AFA14u;
            return;
        }
    }
    ctx->pc = 0x1AFA0Cu;
    // 0x1afa0c: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1AFA0Cu;
    SET_GPR_U32(ctx, 31, 0x1AFA14u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1AFA0Cu, 0x1AFA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA14u;
}
