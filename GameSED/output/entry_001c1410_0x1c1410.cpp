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

// Function: entry_001c1410
// Address: 0x1c1410 - 0x1c1428
void entry_001c1410_0x1c1410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1410_0x1c1410");
#endif

    ctx->pc = 0x1c1410u;

    // 0x1c1410: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x1c1410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x1c1414: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1c1414u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1418: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1418u;
    {
        const bool branch_taken_0x1c1418 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1418u;
        // 0x1c141c: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1418) {
            ctx->pc = 0x1C1428u;
            return;
        }
    }
    ctx->pc = 0x1C1420u;
    // 0x1c1420: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x1c1420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x1c1424: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x1c1424u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1c1428u;
}
