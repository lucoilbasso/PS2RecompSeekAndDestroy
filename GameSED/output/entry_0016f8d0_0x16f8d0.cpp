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

// Function: entry_0016f8d0
// Address: 0x16f8d0 - 0x16f8f8
void entry_0016f8d0_0x16f8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f8d0_0x16f8d0");
#endif

    switch (ctx->pc) {
        case 0x16f8d8u: goto label_16f8d8;
        default: break;
    }

    ctx->pc = 0x16f8d0u;

    // 0x16f8d0: 0xc06ab72  jal         func_1AADC8
    ctx->pc = 0x16F8D0u;
    SET_GPR_U32(ctx, 31, 0x16F8D8u);
    ctx->pc = 0x16F8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F8D0u;
    // 0x16f8d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x16F8D0u, 0x16F8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F8D8u;
label_16f8d8:
    // 0x16f8d8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x16f8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x16f8dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x16f8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x16f8e0: 0x2484ba70  addiu       $a0, $a0, -0x4590
    ctx->pc = 0x16f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949488));
    // 0x16f8e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16f8e8: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x16f8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x16f8ec: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x16f8ecu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16f8f0: 0xc06af1c  jal         func_1ABC70
    ctx->pc = 0x16F8F0u;
    SET_GPR_U32(ctx, 31, 0x16F8F8u);
    ctx->pc = 0x16F8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F8F0u;
    // 0x16f8f4: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC70u, 0x16F8F0u, 0x16F8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F8F8u;
}
