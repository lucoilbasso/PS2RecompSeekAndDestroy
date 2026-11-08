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

// Function: entry_0015c74c
// Address: 0x15c74c - 0x15c774
void entry_0015c74c_0x15c74c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c74c_0x15c74c");
#endif

    switch (ctx->pc) {
        case 0x15c75cu: goto label_15c75c;
        default: break;
    }

    ctx->pc = 0x15c74cu;

    // 0x15c74c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x15c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15c750: 0xa7a60002  sh          $a2, 0x2($sp)
    ctx->pc = 0x15c750u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x15c754: 0xc0637a8  jal         func_18DEA0
    ctx->pc = 0x15C754u;
    SET_GPR_U32(ctx, 31, 0x15C75Cu);
    ctx->pc = 0x15C758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C754u;
    // 0x15c758: 0xa7a50004  sh          $a1, 0x4($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DEA0u, 0x15C754u, 0x15C75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C75Cu;
label_15c75c:
    // 0x15c75c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x15c75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15c760: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15c760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c768: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c76c: 0xc063b10  jal         func_18EC40
    ctx->pc = 0x15C76Cu;
    SET_GPR_U32(ctx, 31, 0x15C774u);
    ctx->pc = 0x15C770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C76Cu;
    // 0x15c770: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC40u, 0x15C76Cu, 0x15C774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C774u;
}
