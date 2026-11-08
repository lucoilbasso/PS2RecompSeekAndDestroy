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

// Function: entry_001c3f14
// Address: 0x1c3f14 - 0x1c3f24
void entry_001c3f14_0x1c3f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3f14_0x1c3f14");
#endif

    ctx->pc = 0x1c3f14u;

    // 0x1c3f14: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1c3f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1c3f18: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c3f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f1c: 0xc070eb6  jal         func_1C3AD8
    ctx->pc = 0x1C3F1Cu;
    SET_GPR_U32(ctx, 31, 0x1C3F24u);
    ctx->pc = 0x1C3F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F1Cu;
    // 0x1c3f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AD8u, 0x1C3F1Cu, 0x1C3F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F24u;
}
