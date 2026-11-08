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

// Function: entry_001be0e8
// Address: 0x1be0e8 - 0x1be0fc
void entry_001be0e8_0x1be0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be0e8_0x1be0e8");
#endif

    switch (ctx->pc) {
        case 0x1be0f8u: goto label_1be0f8;
        default: break;
    }

    ctx->pc = 0x1be0e8u;

    // 0x1be0e8: 0x8e0501cc  lw          $a1, 0x1CC($s0)
    ctx->pc = 0x1be0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1be0ec: 0x8e0601dc  lw          $a2, 0x1DC($s0)
    ctx->pc = 0x1be0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x1be0f0: 0xc070d30  jal         func_1C34C0
    ctx->pc = 0x1BE0F0u;
    SET_GPR_U32(ctx, 31, 0x1BE0F8u);
    ctx->pc = 0x1BE0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE0F0u;
    // 0x1be0f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C34C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C34C0u, 0x1BE0F0u, 0x1BE0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE0F8u;
label_1be0f8:
    // 0x1be0f8: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x1be0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    ctx->pc = 0x1be0fcu;
}
