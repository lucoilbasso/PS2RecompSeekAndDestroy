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

// Function: entry_00161200
// Address: 0x161200 - 0x161210
void entry_00161200_0x161200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161200_0x161200");
#endif

    ctx->pc = 0x161200u;

    // 0x161200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161204: 0x24a56e90  addiu       $a1, $a1, 0x6E90
    ctx->pc = 0x161204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28304));
    // 0x161208: 0xc068186  jal         func_1A0618
    ctx->pc = 0x161208u;
    SET_GPR_U32(ctx, 31, 0x161210u);
    ctx->pc = 0x16120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161208u;
    // 0x16120c: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x161208u, 0x161210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161210u;
}
