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

// Function: entry_0010d328
// Address: 0x10d328 - 0x10d350
void entry_0010d328_0x10d328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d328_0x10d328");
#endif

    switch (ctx->pc) {
        case 0x10d338u: goto label_10d338;
        default: break;
    }

    ctx->pc = 0x10d328u;

    // 0x10d328: 0x5064000a  beql        $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x10D328u;
    {
        const bool branch_taken_0x10d328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10d328) {
            ctx->pc = 0x10D32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D328u;
            // 0x10d32c: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D354u;
            return;
        }
    }
    ctx->pc = 0x10D330u;
    // 0x10d330: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10D330u;
    SET_GPR_U32(ctx, 31, 0x10D338u);
    ctx->pc = 0x10D334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D330u;
    // 0x10d334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10D330u, 0x10D338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D338u;
label_10d338:
    // 0x10d338: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10d338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10d33c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10d33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d340: 0x24a53c88  addiu       $a1, $a1, 0x3C88
    ctx->pc = 0x10d340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15496));
    // 0x10d344: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10d344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10d348: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10D348u;
    SET_GPR_U32(ctx, 31, 0x10D350u);
    ctx->pc = 0x10D34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D348u;
    // 0x10d34c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10D348u, 0x10D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D350u;
}
