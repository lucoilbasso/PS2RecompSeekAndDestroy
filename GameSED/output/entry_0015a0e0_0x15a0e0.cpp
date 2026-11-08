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

// Function: entry_0015a0e0
// Address: 0x15a0e0 - 0x15a0fc
void entry_0015a0e0_0x15a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a0e0_0x15a0e0");
#endif

    ctx->pc = 0x15a0e0u;

    // 0x15a0e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15a0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15a0e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a0e8: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x15a0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x15a0ec: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A0ECu;
    {
        const bool branch_taken_0x15a0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x15A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A0ECu;
        // 0x15a0f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a0ec) {
            ctx->pc = 0x15A108u;
            return;
        }
    }
    ctx->pc = 0x15A0F4u;
    // 0x15a0f4: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x15A0F4u;
    SET_GPR_U32(ctx, 31, 0x15A0FCu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x15A0F4u, 0x15A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A0FCu;
}
