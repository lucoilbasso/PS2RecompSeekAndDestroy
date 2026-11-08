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

// Function: entry_001cf930
// Address: 0x1cf930 - 0x1cf950
void entry_001cf930_0x1cf930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf930_0x1cf930");
#endif

    ctx->pc = 0x1cf930u;

    // 0x1cf930: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CF930u;
    {
        const bool branch_taken_0x1cf930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF930u;
        // 0x1cf934: 0x246a005b  addiu       $t2, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf930) {
            ctx->pc = 0x1CF978u;
            return;
        }
    }
    ctx->pc = 0x1CF938u;
    // 0x1cf938: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x1cf938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x1cf93c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF93Cu;
    {
        const bool branch_taken_0x1cf93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF93Cu;
        // 0x1cf940: 0x2c620155  sltiu       $v0, $v1, 0x155 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf93c) {
            ctx->pc = 0x1CF950u;
            return;
        }
    }
    ctx->pc = 0x1CF944u;
    // 0x1cf944: 0x111302  srl         $v0, $s1, 12
    ctx->pc = 0x1cf944u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 12));
    // 0x1cf948: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1CF948u;
    {
        const bool branch_taken_0x1cf948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF948u;
        // 0x1cf94c: 0x244a006e  addiu       $t2, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf948) {
            ctx->pc = 0x1CF978u;
            return;
        }
    }
    ctx->pc = 0x1CF950u;
}
