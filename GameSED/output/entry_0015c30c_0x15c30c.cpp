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

// Function: entry_0015c30c
// Address: 0x15c30c - 0x15c334
void entry_0015c30c_0x15c30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c30c_0x15c30c");
#endif

    switch (ctx->pc) {
        case 0x15c31cu: goto label_15c31c;
        default: break;
    }

    ctx->pc = 0x15c30cu;

    // 0x15c30c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x15c30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15c310: 0xa7a50002  sh          $a1, 0x2($sp)
    ctx->pc = 0x15c310u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x15c314: 0xc0637a8  jal         func_18DEA0
    ctx->pc = 0x15C314u;
    SET_GPR_U32(ctx, 31, 0x15C31Cu);
    ctx->pc = 0x15C318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C314u;
    // 0x15c318: 0xa7a70004  sh          $a3, 0x4($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DEA0u, 0x15C314u, 0x15C31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C31Cu;
label_15c31c:
    // 0x15c31c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x15c31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15c320: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15c320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c328: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c32c: 0xc063b10  jal         func_18EC40
    ctx->pc = 0x15C32Cu;
    SET_GPR_U32(ctx, 31, 0x15C334u);
    ctx->pc = 0x15C330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C32Cu;
    // 0x15c330: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC40u, 0x15C32Cu, 0x15C334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C334u;
}
