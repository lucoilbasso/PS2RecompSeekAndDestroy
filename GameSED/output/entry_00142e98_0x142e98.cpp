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

// Function: entry_00142e98
// Address: 0x142e98 - 0x142ea8
void entry_00142e98_0x142e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142e98_0x142e98");
#endif

    switch (ctx->pc) {
        case 0x142ea0u: goto label_142ea0;
        default: break;
    }

    ctx->pc = 0x142e98u;

    // 0x142e98: 0xc068086  jal         func_1A0218
    ctx->pc = 0x142E98u;
    SET_GPR_U32(ctx, 31, 0x142EA0u);
    ctx->pc = 0x142E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E98u;
    // 0x142e9c: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x142E98u, 0x142EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142EA0u;
label_142ea0:
    // 0x142ea0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x142ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x142ea4: 0x2482b  sltu        $t1, $zero, $v0
    ctx->pc = 0x142ea4u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x142ea8u;
}
