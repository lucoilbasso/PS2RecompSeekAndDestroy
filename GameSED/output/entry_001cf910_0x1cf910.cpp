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

// Function: entry_001cf910
// Address: 0x1cf910 - 0x1cf930
void entry_001cf910_0x1cf910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf910_0x1cf910");
#endif

    ctx->pc = 0x1cf910u;

    // 0x1cf910: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CF910u;
    {
        const bool branch_taken_0x1cf910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF910u;
        // 0x1cf914: 0x1150c2  srl         $t2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf910) {
            ctx->pc = 0x1CF978u;
            return;
        }
    }
    ctx->pc = 0x1CF918u;
    // 0x1cf918: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1cf918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cf91c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF91Cu;
    {
        const bool branch_taken_0x1cf91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF91Cu;
        // 0x1cf920: 0x2c620015  sltiu       $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf91c) {
            ctx->pc = 0x1CF930u;
            return;
        }
    }
    ctx->pc = 0x1CF924u;
    // 0x1cf924: 0x111182  srl         $v0, $s1, 6
    ctx->pc = 0x1cf924u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
    // 0x1cf928: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1CF928u;
    {
        const bool branch_taken_0x1cf928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF928u;
        // 0x1cf92c: 0x244a0038  addiu       $t2, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf928) {
            ctx->pc = 0x1CF978u;
            return;
        }
    }
    ctx->pc = 0x1CF930u;
}
