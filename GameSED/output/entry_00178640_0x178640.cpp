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

// Function: entry_00178640
// Address: 0x178640 - 0x178648
void entry_00178640_0x178640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178640_0x178640");
#endif

    ctx->pc = 0x178640u;

    // 0x178640: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x178640u;
    SET_GPR_U32(ctx, 31, 0x178648u);
    ctx->pc = 0x178644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178640u;
    // 0x178644: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x178640u, 0x178648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178648u;
}
