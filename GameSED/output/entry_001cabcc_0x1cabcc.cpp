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

// Function: entry_001cabcc
// Address: 0x1cabcc - 0x1cabd8
void entry_001cabcc_0x1cabcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cabcc_0x1cabcc");
#endif

    ctx->pc = 0x1cabccu;

    // 0x1cabcc: 0x1040ffc8  beqz        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1CABCCu;
    {
        const bool branch_taken_0x1cabcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABCCu;
        // 0x1cabd0: 0x25cefffc  addiu       $t6, $t6, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabcc) {
            ctx->pc = 0x1CAAF0u;
            return;
        }
    }
    ctx->pc = 0x1CABD4u;
    // 0x1cabd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cabd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cabd8u;
}
