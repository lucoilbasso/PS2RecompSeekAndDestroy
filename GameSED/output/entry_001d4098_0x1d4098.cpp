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

// Function: entry_001d4098
// Address: 0x1d4098 - 0x1d40b4
void entry_001d4098_0x1d4098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4098_0x1d4098");
#endif

    switch (ctx->pc) {
        case 0x1d40acu: goto label_1d40ac;
        default: break;
    }

    ctx->pc = 0x1d4098u;

    // 0x1d4098: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1d4098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d409c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d409cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d40a0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d40a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d40a4: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D40A4u;
    SET_GPR_U32(ctx, 31, 0x1D40ACu);
    ctx->pc = 0x1D40A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D40A4u;
    // 0x1d40a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D40A4u, 0x1D40ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D40ACu;
label_1d40ac:
    // 0x1d40ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d40acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d40b0: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1d40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->pc = 0x1d40b4u;
}
