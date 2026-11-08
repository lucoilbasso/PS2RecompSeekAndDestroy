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

// Function: entry_001a4df0
// Address: 0x1a4df0 - 0x1a4e04
void entry_001a4df0_0x1a4df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4df0_0x1a4df0");
#endif

    switch (ctx->pc) {
        case 0x1a4e00u: goto label_1a4e00;
        default: break;
    }

    ctx->pc = 0x1a4df0u;

    // 0x1a4df0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a4df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a4df4: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x1a4df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
    // 0x1a4df8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A4DF8u;
    SET_GPR_U32(ctx, 31, 0x1A4E00u);
    ctx->pc = 0x1A4DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4DF8u;
    // 0x1a4dfc: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A4DF8u, 0x1A4E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4E00u;
label_1a4e00:
    // 0x1a4e00: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a4e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    ctx->pc = 0x1a4e04u;
}
