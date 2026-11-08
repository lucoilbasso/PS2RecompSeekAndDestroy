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

// Function: entry_001a4ce0
// Address: 0x1a4ce0 - 0x1a4cf4
void entry_001a4ce0_0x1a4ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4ce0_0x1a4ce0");
#endif

    switch (ctx->pc) {
        case 0x1a4cf0u: goto label_1a4cf0;
        default: break;
    }

    ctx->pc = 0x1a4ce0u;

    // 0x1a4ce0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a4ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a4ce4: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x1a4ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
    // 0x1a4ce8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A4CE8u;
    SET_GPR_U32(ctx, 31, 0x1A4CF0u);
    ctx->pc = 0x1A4CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4CE8u;
    // 0x1a4cec: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A4CE8u, 0x1A4CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4CF0u;
label_1a4cf0:
    // 0x1a4cf0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a4cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    ctx->pc = 0x1a4cf4u;
}
