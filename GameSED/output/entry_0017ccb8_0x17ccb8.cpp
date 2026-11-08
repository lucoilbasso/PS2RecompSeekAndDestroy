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

// Function: entry_0017ccb8
// Address: 0x17ccb8 - 0x17cccc
void entry_0017ccb8_0x17ccb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ccb8_0x17ccb8");
#endif

    switch (ctx->pc) {
        case 0x17ccc8u: goto label_17ccc8;
        default: break;
    }

    ctx->pc = 0x17ccb8u;

    // 0x17ccb8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17ccb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17ccbc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x17ccbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x17ccc0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17CCC0u;
    SET_GPR_U32(ctx, 31, 0x17CCC8u);
    ctx->pc = 0x17CCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CCC0u;
    // 0x17ccc4: 0x24a57b90  addiu       $a1, $a1, 0x7B90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17CCC0u, 0x17CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CCC8u;
label_17ccc8:
    // 0x17ccc8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x17ccc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->pc = 0x17ccccu;
}
