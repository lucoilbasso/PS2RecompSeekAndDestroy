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

// Function: entry_00106ed0
// Address: 0x106ed0 - 0x106ee4
void entry_00106ed0_0x106ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106ed0_0x106ed0");
#endif

    switch (ctx->pc) {
        case 0x106ee0u: goto label_106ee0;
        default: break;
    }

    ctx->pc = 0x106ed0u;

    // 0x106ed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ed4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x106ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x106ed8: 0xc061344  jal         func_184D10
    ctx->pc = 0x106ED8u;
    SET_GPR_U32(ctx, 31, 0x106EE0u);
    ctx->pc = 0x106EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106ED8u;
    // 0x106edc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184D10u, 0x106ED8u, 0x106EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106EE0u;
label_106ee0:
    // 0x106ee0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x106ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x106ee4u;
}
