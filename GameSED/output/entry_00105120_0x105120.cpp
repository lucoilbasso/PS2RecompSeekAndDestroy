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

// Function: entry_00105120
// Address: 0x105120 - 0x105140
void entry_00105120_0x105120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105120_0x105120");
#endif

    switch (ctx->pc) {
        case 0x105128u: goto label_105128;
        default: break;
    }

    ctx->pc = 0x105120u;

    // 0x105120: 0xc068086  jal         func_1A0218
    ctx->pc = 0x105120u;
    SET_GPR_U32(ctx, 31, 0x105128u);
    ctx->pc = 0x105124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105120u;
    // 0x105124: 0x3c05000e  lui         $a1, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x105120u, 0x105128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105128u;
label_105128:
    // 0x105128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10512c: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x10512cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x105130: 0xaf8288a8  sw          $v0, -0x7758($gp)
    ctx->pc = 0x105130u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936744), GPR_U32(ctx, 2));
    // 0x105134: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x105134u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
    // 0x105138: 0x34c67fff  ori         $a2, $a2, 0x7FFF
    ctx->pc = 0x105138u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32767);
    // 0x10513c: 0x0  nop
    ctx->pc = 0x10513cu;
    // NOP
    ctx->pc = 0x105140u;
}
