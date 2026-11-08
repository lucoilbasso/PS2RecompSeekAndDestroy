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

// Function: entry_001558b8
// Address: 0x1558b8 - 0x1558cc
void entry_001558b8_0x1558b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001558b8_0x1558b8");
#endif

    ctx->pc = 0x1558b8u;

    // 0x1558b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1558b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1558bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1558bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1558c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1558c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1558c4: 0xc058562  jal         func_161588
    ctx->pc = 0x1558C4u;
    SET_GPR_U32(ctx, 31, 0x1558CCu);
    ctx->pc = 0x1558C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1558C4u;
    // 0x1558c8: 0x8e040690  lw          $a0, 0x690($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161588u, 0x1558C4u, 0x1558CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1558CCu;
}
