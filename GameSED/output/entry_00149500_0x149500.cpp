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

// Function: entry_00149500
// Address: 0x149500 - 0x149514
void entry_00149500_0x149500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149500_0x149500");
#endif

    switch (ctx->pc) {
        case 0x149510u: goto label_149510;
        default: break;
    }

    ctx->pc = 0x149500u;

    // 0x149500: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x149500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x149504: 0x24a56b50  addiu       $a1, $a1, 0x6B50
    ctx->pc = 0x149504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27472));
    // 0x149508: 0xc068186  jal         func_1A0618
    ctx->pc = 0x149508u;
    SET_GPR_U32(ctx, 31, 0x149510u);
    ctx->pc = 0x14950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149508u;
    // 0x14950c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x149508u, 0x149510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149510u;
label_149510:
    // 0x149510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x149510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x149514u;
}
