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

// Function: entry_00164960
// Address: 0x164960 - 0x164968
void entry_00164960_0x164960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164960_0x164960");
#endif

    ctx->pc = 0x164960u;

    // 0x164960: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164960u;
    {
        const bool branch_taken_0x164960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164960u;
        // 0x164964: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164960) {
            ctx->pc = 0x164970u;
            return;
        }
    }
    ctx->pc = 0x164968u;
}
