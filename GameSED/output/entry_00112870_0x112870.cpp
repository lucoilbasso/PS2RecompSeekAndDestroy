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

// Function: entry_00112870
// Address: 0x112870 - 0x11288c
void entry_00112870_0x112870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112870_0x112870");
#endif

    ctx->pc = 0x112870u;

    // 0x112870: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x112870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x112874: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112874u;
    {
        const bool branch_taken_0x112874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112874u;
        // 0x112878: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112874) {
            ctx->pc = 0x11288Cu;
            return;
        }
    }
    ctx->pc = 0x11287Cu;
    // 0x11287c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11287cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x112880: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x112880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x112884: 0xc068186  jal         func_1A0618
    ctx->pc = 0x112884u;
    SET_GPR_U32(ctx, 31, 0x11288Cu);
    ctx->pc = 0x112888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112884u;
    // 0x112888: 0x24a53e68  addiu       $a1, $a1, 0x3E68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x112884u, 0x11288Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11288Cu;
}
