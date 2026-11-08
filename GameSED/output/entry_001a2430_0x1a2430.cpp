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

// Function: entry_001a2430
// Address: 0x1a2430 - 0x1a2444
void entry_001a2430_0x1a2430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2430_0x1a2430");
#endif

    switch (ctx->pc) {
        case 0x1a2440u: goto label_1a2440;
        default: break;
    }

    ctx->pc = 0x1a2430u;

    // 0x1a2430: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a2430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a2434: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x1a2434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
    // 0x1a2438: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A2438u;
    SET_GPR_U32(ctx, 31, 0x1A2440u);
    ctx->pc = 0x1A243Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2438u;
    // 0x1a243c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A2438u, 0x1A2440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2440u;
label_1a2440:
    // 0x1a2440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x1a2444u;
}
