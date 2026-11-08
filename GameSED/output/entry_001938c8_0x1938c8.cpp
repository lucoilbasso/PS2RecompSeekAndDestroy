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

// Function: entry_001938c8
// Address: 0x1938c8 - 0x1938d8
void entry_001938c8_0x1938c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001938c8_0x1938c8");
#endif

    ctx->pc = 0x1938c8u;

    // 0x1938c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1938c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1938cc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1938ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1938d0: 0xc04110c  jal         func_104430
    ctx->pc = 0x1938D0u;
    SET_GPR_U32(ctx, 31, 0x1938D8u);
    ctx->pc = 0x1938D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1938D0u;
    // 0x1938d4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x1938D0u, 0x1938D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1938D8u;
}
