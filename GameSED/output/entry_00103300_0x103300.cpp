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

// Function: entry_00103300
// Address: 0x103300 - 0x103314
void entry_00103300_0x103300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103300_0x103300");
#endif

    switch (ctx->pc) {
        case 0x10330cu: goto label_10330c;
        default: break;
    }

    ctx->pc = 0x103300u;

    // 0x103300: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x103300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x103304: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x103304u;
    SET_GPR_U32(ctx, 31, 0x10330Cu);
    ctx->pc = 0x103308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103304u;
    // 0x103308: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x103304u, 0x10330Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10330Cu;
label_10330c:
    // 0x10330c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x10330cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x103310: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x103310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    ctx->pc = 0x103314u;
}
