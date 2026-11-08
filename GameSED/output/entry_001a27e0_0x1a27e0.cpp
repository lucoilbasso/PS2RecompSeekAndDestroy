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

// Function: entry_001a27e0
// Address: 0x1a27e0 - 0x1a27f4
void entry_001a27e0_0x1a27e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a27e0_0x1a27e0");
#endif

    switch (ctx->pc) {
        case 0x1a27f0u: goto label_1a27f0;
        default: break;
    }

    ctx->pc = 0x1a27e0u;

    // 0x1a27e0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a27e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a27e4: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x1a27e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
    // 0x1a27e8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A27E8u;
    SET_GPR_U32(ctx, 31, 0x1A27F0u);
    ctx->pc = 0x1A27ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A27E8u;
    // 0x1a27ec: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A27E8u, 0x1A27F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A27F0u;
label_1a27f0:
    // 0x1a27f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a27f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    ctx->pc = 0x1a27f4u;
}
