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

// Function: entry_00163270
// Address: 0x163270 - 0x1632b4
void entry_00163270_0x163270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163270_0x163270");
#endif

    switch (ctx->pc) {
        case 0x16327cu: goto label_16327c;
        case 0x163298u: goto label_163298;
        case 0x1632b0u: goto label_1632b0;
        default: break;
    }

    ctx->pc = 0x163270u;

    // 0x163270: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x163270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163274: 0xc04110c  jal         func_104430
    ctx->pc = 0x163274u;
    SET_GPR_U32(ctx, 31, 0x16327Cu);
    ctx->pc = 0x163278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163274u;
    // 0x163278: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x163274u, 0x16327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16327Cu;
label_16327c:
    // 0x16327c: 0x24031846  addiu       $v1, $zero, 0x1846
    ctx->pc = 0x16327cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
    // 0x163280: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x163280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163284: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x163284u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163288: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x163288u;
    {
        const bool branch_taken_0x163288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x163288) {
            ctx->pc = 0x16328Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163288u;
            // 0x16328c: 0x8e830010  lw          $v1, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1632B4u;
            return;
        }
    }
    ctx->pc = 0x163290u;
    // 0x163290: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x163290u;
    SET_GPR_U32(ctx, 31, 0x163298u);
    ctx->pc = 0x163294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163290u;
    // 0x163294: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x163290u, 0x163298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163298u;
label_163298:
    // 0x163298: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x163298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16329c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16329cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1632a0: 0x24a56f20  addiu       $a1, $a1, 0x6F20
    ctx->pc = 0x1632a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
    // 0x1632a4: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1632a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1632a8: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1632A8u;
    SET_GPR_U32(ctx, 31, 0x1632B0u);
    ctx->pc = 0x1632ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1632A8u;
    // 0x1632ac: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1632A8u, 0x1632B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1632B0u;
label_1632b0:
    // 0x1632b0: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1632b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    ctx->pc = 0x1632b4u;
}
