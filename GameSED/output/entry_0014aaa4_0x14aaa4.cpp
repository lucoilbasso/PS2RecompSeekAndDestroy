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

// Function: entry_0014aaa4
// Address: 0x14aaa4 - 0x14aab4
void entry_0014aaa4_0x14aaa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014aaa4_0x14aaa4");
#endif

    switch (ctx->pc) {
        case 0x14aab0u: goto label_14aab0;
        default: break;
    }

    ctx->pc = 0x14aaa4u;

    // 0x14aaa4: 0x8e2401c0  lw          $a0, 0x1C0($s1)
    ctx->pc = 0x14aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x14aaa8: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x14AAA8u;
    SET_GPR_U32(ctx, 31, 0x14AAB0u);
    ctx->pc = 0x14AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AAA8u;
    // 0x14aaac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x14AAA8u, 0x14AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AAB0u;
label_14aab0:
    // 0x14aab0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x14aab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x14aab4u;
}
