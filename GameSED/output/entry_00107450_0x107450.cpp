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

// Function: entry_00107450
// Address: 0x107450 - 0x107464
void entry_00107450_0x107450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107450_0x107450");
#endif

    switch (ctx->pc) {
        case 0x107460u: goto label_107460;
        default: break;
    }

    ctx->pc = 0x107450u;

    // 0x107450: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x107450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x107454: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x107454u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FB830u));
    // 0x107458: 0xc0618da  jal         func_186368
    ctx->pc = 0x107458u;
    SET_GPR_U32(ctx, 31, 0x107460u);
    ctx->pc = 0x10745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107458u;
    // 0x10745c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x107458u, 0x107460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107460u;
label_107460:
    // 0x107460: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x107460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x107464u;
}
