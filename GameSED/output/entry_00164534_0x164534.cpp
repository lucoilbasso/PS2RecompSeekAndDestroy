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

// Function: entry_00164534
// Address: 0x164534 - 0x16453c
void entry_00164534_0x164534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164534_0x164534");
#endif

    ctx->pc = 0x164534u;

    // 0x164534: 0x14a0ffe6  bnez        $a1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x164534u;
    {
        const bool branch_taken_0x164534 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x164538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164534u;
        // 0x164538: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164534) {
            ctx->pc = 0x1644D0u;
            return;
        }
    }
    ctx->pc = 0x16453Cu;
}
