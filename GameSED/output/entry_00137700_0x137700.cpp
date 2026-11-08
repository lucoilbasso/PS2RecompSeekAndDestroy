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

// Function: entry_00137700
// Address: 0x137700 - 0x137710
void entry_00137700_0x137700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137700_0x137700");
#endif

    ctx->pc = 0x137700u;

    // 0x137700: 0x1600003e  bnez        $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x137700u;
    {
        const bool branch_taken_0x137700 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x137704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137700u;
        // 0x137704: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137700) {
            ctx->pc = 0x1377FCu;
            return;
        }
    }
    ctx->pc = 0x137708u;
    // 0x137708: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x137708u;
    {
        const bool branch_taken_0x137708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137708) {
            ctx->pc = 0x13783Cu;
            return;
        }
    }
    ctx->pc = 0x137710u;
}
