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

// Function: entry_00155c28
// Address: 0x155c28 - 0x155c38
void entry_00155c28_0x155c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155c28_0x155c28");
#endif

    ctx->pc = 0x155c28u;

    // 0x155c28: 0x810c3  sra         $v0, $t0, 3
    ctx->pc = 0x155c28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 3));
    // 0x155c2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x155c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x155c30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155C30u;
    {
        const bool branch_taken_0x155c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C30u;
        // 0x155c34: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c30) {
            ctx->pc = 0x155C40u;
            return;
        }
    }
    ctx->pc = 0x155C38u;
}
