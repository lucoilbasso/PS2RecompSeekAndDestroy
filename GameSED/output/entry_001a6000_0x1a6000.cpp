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

// Function: entry_001a6000
// Address: 0x1a6000 - 0x1a6010
void entry_001a6000_0x1a6000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6000_0x1a6000");
#endif

    ctx->pc = 0x1a6000u;

    // 0x1a6000: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1a6000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1a6004: 0x24a59438  addiu       $a1, $a1, -0x6BC8
    ctx->pc = 0x1a6004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939704));
    // 0x1a6008: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A6008u;
    SET_GPR_U32(ctx, 31, 0x1A6010u);
    ctx->pc = 0x1A600Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6008u;
    // 0x1a600c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A6008u, 0x1A6010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6010u;
}
