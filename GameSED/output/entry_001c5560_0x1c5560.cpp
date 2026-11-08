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

// Function: entry_001c5560
// Address: 0x1c5560 - 0x1c557c
void entry_001c5560_0x1c5560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5560_0x1c5560");
#endif

    switch (ctx->pc) {
        case 0x1c556cu: goto label_1c556c;
        default: break;
    }

    ctx->pc = 0x1c5560u;

    // 0x1c5560: 0x3c160025  lui         $s6, 0x25
    ctx->pc = 0x1c5560u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)37 << 16));
    // 0x1c5564: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1C5564u;
    SET_GPR_U32(ctx, 31, 0x1C556Cu);
    ctx->pc = 0x1C5568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5564u;
    // 0x1c5568: 0x8ec4ddfc  lw          $a0, -0x2204($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1C5564u, 0x1C556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C556Cu;
label_1c556c:
    // 0x1c556c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C556Cu;
    {
        const bool branch_taken_0x1c556c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C5570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C556Cu;
        // 0x1c5570: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c556c) {
            ctx->pc = 0x1C557Cu;
            return;
        }
    }
    ctx->pc = 0x1C5574u;
    // 0x1c5574: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1C5574u;
    {
        const bool branch_taken_0x1c5574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5574u;
        // 0x1c5578: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5574) {
            ctx->pc = 0x1C5604u;
            return;
        }
    }
    ctx->pc = 0x1C557Cu;
}
