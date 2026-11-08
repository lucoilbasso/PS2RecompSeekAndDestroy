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

// Function: entry_001bb0fc
// Address: 0x1bb0fc - 0x1bb13c
void entry_001bb0fc_0x1bb0fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb0fc_0x1bb0fc");
#endif

    switch (ctx->pc) {
        case 0x1bb110u: goto label_1bb110;
        case 0x1bb11cu: goto label_1bb11c;
        case 0x1bb128u: goto label_1bb128;
        default: break;
    }

    ctx->pc = 0x1bb0fcu;

    // 0x1bb0fc: 0x2673d180  addiu       $s3, $s3, -0x2E80
    ctx->pc = 0x1bb0fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955392));
    // 0x1bb100: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1bb100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1bb104: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bb104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb108: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1BB108u;
    SET_GPR_U32(ctx, 31, 0x1BB110u);
    ctx->pc = 0x1BB10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB108u;
    // 0x1bb10c: 0x3c140025  lui         $s4, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)37 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1BB108u, 0x1BB110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB110u;
label_1bb110:
    // 0x1bb110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb114: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1BB114u;
    SET_GPR_U32(ctx, 31, 0x1BB11Cu);
    ctx->pc = 0x1BB118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB114u;
    // 0x1bb118: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1BB114u, 0x1BB11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB11Cu;
label_1bb11c:
    // 0x1bb11c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb120: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1BB120u;
    SET_GPR_U32(ctx, 31, 0x1BB128u);
    ctx->pc = 0x1BB124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB120u;
    // 0x1bb124: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1BB120u, 0x1BB128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB128u;
label_1bb128:
    // 0x1bb128: 0x8e82c090  lw          $v0, -0x3F70($s4)
    ctx->pc = 0x1bb128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951056)));
    // 0x1bb12c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB12Cu;
    {
        const bool branch_taken_0x1bb12c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BB130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB12Cu;
        // 0x1bb130: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb12c) {
            ctx->pc = 0x1BB13Cu;
            return;
        }
    }
    ctx->pc = 0x1BB134u;
    // 0x1bb134: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BB134u;
    SET_GPR_U32(ctx, 31, 0x1BB13Cu);
    ctx->pc = 0x1BB138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB134u;
    // 0x1bb138: 0x2484b088  addiu       $a0, $a0, -0x4F78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BB134u, 0x1BB13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB13Cu;
}
