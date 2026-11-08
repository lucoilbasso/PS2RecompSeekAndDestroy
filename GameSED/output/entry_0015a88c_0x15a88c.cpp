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

// Function: entry_0015a88c
// Address: 0x15a88c - 0x15a8a4
void entry_0015a88c_0x15a88c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a88c_0x15a88c");
#endif

    switch (ctx->pc) {
        case 0x15a8a0u: goto label_15a8a0;
        default: break;
    }

    ctx->pc = 0x15a88cu;

    // 0x15a88c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x15a88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x15a890: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A890u;
    {
        const bool branch_taken_0x15a890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a890) {
            ctx->pc = 0x15A894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A890u;
            // 0x15a894: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A8A4u;
            return;
        }
    }
    ctx->pc = 0x15A898u;
    // 0x15a898: 0xc0574cc  jal         func_15D330
    ctx->pc = 0x15A898u;
    SET_GPR_U32(ctx, 31, 0x15A8A0u);
    ctx->pc = 0x15A89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A898u;
    // 0x15a89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D330u, 0x15A898u, 0x15A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A8A0u;
label_15a8a0:
    // 0x15a8a0: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a8a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    ctx->pc = 0x15a8a4u;
}
