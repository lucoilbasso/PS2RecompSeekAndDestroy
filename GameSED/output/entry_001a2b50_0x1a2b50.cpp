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

// Function: entry_001a2b50
// Address: 0x1a2b50 - 0x1a2b64
void entry_001a2b50_0x1a2b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2b50_0x1a2b50");
#endif

    switch (ctx->pc) {
        case 0x1a2b60u: goto label_1a2b60;
        default: break;
    }

    ctx->pc = 0x1a2b50u;

    // 0x1a2b50: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a2b54: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x1a2b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
    // 0x1a2b58: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A2B58u;
    SET_GPR_U32(ctx, 31, 0x1A2B60u);
    ctx->pc = 0x1A2B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2B58u;
    // 0x1a2b5c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A2B58u, 0x1A2B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2B60u;
label_1a2b60:
    // 0x1a2b60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2b60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x1a2b64u;
}
