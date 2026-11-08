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

// Function: entry_00104910
// Address: 0x104910 - 0x104920
void entry_00104910_0x104910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104910_0x104910");
#endif

    switch (ctx->pc) {
        case 0x10491cu: goto label_10491c;
        default: break;
    }

    ctx->pc = 0x104910u;

    // 0x104910: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x104910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104914: 0xc067232  jal         func_19C8C8
    ctx->pc = 0x104914u;
    SET_GPR_U32(ctx, 31, 0x10491Cu);
    ctx->pc = 0x104918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104914u;
    // 0x104918: 0x2485ffb0  addiu       $a1, $a0, -0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8C8u, 0x104914u, 0x10491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10491Cu;
label_10491c:
    // 0x10491c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x10491cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    ctx->pc = 0x104920u;
}
