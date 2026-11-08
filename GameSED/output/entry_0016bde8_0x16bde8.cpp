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

// Function: entry_0016bde8
// Address: 0x16bde8 - 0x16bdfc
void entry_0016bde8_0x16bde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bde8_0x16bde8");
#endif

    ctx->pc = 0x16bde8u;

    // 0x16bde8: 0x8e0601c8  lw          $a2, 0x1C8($s0)
    ctx->pc = 0x16bde8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x16bdec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16bdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bdf0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16bdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16bdf4: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16BDF4u;
    SET_GPR_U32(ctx, 31, 0x16BDFCu);
    ctx->pc = 0x16BDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BDF4u;
    // 0x16bdf8: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16BDF4u, 0x16BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BDFCu;
}
