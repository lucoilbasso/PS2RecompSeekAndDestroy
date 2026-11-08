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

// Function: entry_0013c668
// Address: 0x13c668 - 0x13c69c
void entry_0013c668_0x13c668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c668_0x13c668");
#endif

    switch (ctx->pc) {
        case 0x13c678u: goto label_13c678;
        case 0x13c684u: goto label_13c684;
        case 0x13c698u: goto label_13c698;
        default: break;
    }

    ctx->pc = 0x13c668u;

    // 0x13c668: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13c66c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c670: 0xc061eb4  jal         func_187AD0
    ctx->pc = 0x13C670u;
    SET_GPR_U32(ctx, 31, 0x13C678u);
    ctx->pc = 0x13C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C670u;
    // 0x13c674: 0xae020164  sw          $v0, 0x164($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187AD0u, 0x13C670u, 0x13C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C678u;
label_13c678:
    // 0x13c678: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13c678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c67c: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x13C67Cu;
    SET_GPR_U32(ctx, 31, 0x13C684u);
    ctx->pc = 0x13C680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C67Cu;
    // 0x13c680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x13C67Cu, 0x13C684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C684u;
label_13c684:
    // 0x13c684: 0x8e04015c  lw          $a0, 0x15C($s0)
    ctx->pc = 0x13c684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x13c688: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C688u;
    {
        const bool branch_taken_0x13c688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C688u;
        // 0x13c68c: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c688) {
            ctx->pc = 0x13C69Cu;
            return;
        }
    }
    ctx->pc = 0x13C690u;
    // 0x13c690: 0xc062218  jal         func_188860
    ctx->pc = 0x13C690u;
    SET_GPR_U32(ctx, 31, 0x13C698u);
    ctx->pc = 0x188860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188860u, 0x13C690u, 0x13C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C698u;
label_13c698:
    // 0x13c698: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x13c698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->pc = 0x13c69cu;
}
