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

// Function: entry_001a0dfc
// Address: 0x1a0dfc - 0x1a0e14
void entry_001a0dfc_0x1a0dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0dfc_0x1a0dfc");
#endif

    switch (ctx->pc) {
        case 0x1a0e08u: goto label_1a0e08;
        default: break;
    }

    ctx->pc = 0x1a0dfcu;

    // 0x1a0dfc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a0dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a0e00: 0xc0683b6  jal         func_1A0ED8
    ctx->pc = 0x1A0E00u;
    SET_GPR_U32(ctx, 31, 0x1A0E08u);
    ctx->pc = 0x1A0E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E00u;
    // 0x1a0e04: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x1A0E00u, 0x1A0E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E08u;
label_1a0e08:
    // 0x1a0e08: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a0e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a0e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e10: 0x24a58878  addiu       $a1, $a1, -0x7788
    ctx->pc = 0x1a0e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936696));
    ctx->pc = 0x1a0e14u;
}
