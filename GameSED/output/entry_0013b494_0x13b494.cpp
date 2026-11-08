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

// Function: entry_0013b494
// Address: 0x13b494 - 0x13b4a0
void entry_0013b494_0x13b494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b494_0x13b494");
#endif

    switch (ctx->pc) {
        case 0x13b49cu: goto label_13b49c;
        default: break;
    }

    ctx->pc = 0x13b494u;

    // 0x13b494: 0xc05dd18  jal         func_177460
    ctx->pc = 0x13B494u;
    SET_GPR_U32(ctx, 31, 0x13B49Cu);
    ctx->pc = 0x13B498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B494u;
    // 0x13b498: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x13B494u, 0x13B49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B49Cu;
label_13b49c:
    // 0x13b49c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13b49cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13b4a0u;
}
