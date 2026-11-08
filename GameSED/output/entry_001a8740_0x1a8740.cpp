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

// Function: entry_001a8740
// Address: 0x1a8740 - 0x1a8750
void entry_001a8740_0x1a8740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8740_0x1a8740");
#endif

    ctx->pc = 0x1a8740u;

    // 0x1a8740: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a8740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8744: 0x24a593d8  addiu       $a1, $a1, -0x6C28
    ctx->pc = 0x1a8744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939608));
    // 0x1a8748: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A8748u;
    SET_GPR_U32(ctx, 31, 0x1A8750u);
    ctx->pc = 0x1A874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8748u;
    // 0x1a874c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A8748u, 0x1A8750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8750u;
}
