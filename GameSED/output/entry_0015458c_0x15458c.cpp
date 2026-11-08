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

// Function: entry_0015458c
// Address: 0x15458c - 0x1545a8
void entry_0015458c_0x15458c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015458c_0x15458c");
#endif

    switch (ctx->pc) {
        case 0x15459cu: goto label_15459c;
        default: break;
    }

    ctx->pc = 0x15458cu;

    // 0x15458c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15458cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154590: 0x24a56d00  addiu       $a1, $a1, 0x6D00
    ctx->pc = 0x154590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27904));
    // 0x154594: 0xc068186  jal         func_1A0618
    ctx->pc = 0x154594u;
    SET_GPR_U32(ctx, 31, 0x15459Cu);
    ctx->pc = 0x154598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154594u;
    // 0x154598: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x154594u, 0x15459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15459Cu;
label_15459c:
    // 0x15459c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x15459Cu;
    {
        const bool branch_taken_0x15459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15459c) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x1545A4u;
    // 0x1545a4: 0x0  nop
    ctx->pc = 0x1545a4u;
    // NOP
    ctx->pc = 0x1545a8u;
}
