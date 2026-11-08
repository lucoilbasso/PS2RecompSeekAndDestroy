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

// Function: entry_0010c118
// Address: 0x10c118 - 0x10c128
void entry_0010c118_0x10c118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c118_0x10c118");
#endif

    ctx->pc = 0x10c118u;

    // 0x10c118: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c11c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10c120: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C120u;
    SET_GPR_U32(ctx, 31, 0x10C128u);
    ctx->pc = 0x10C124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C120u;
    // 0x10c124: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C120u, 0x10C128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C128u;
}
