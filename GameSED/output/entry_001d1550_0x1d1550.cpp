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

// Function: entry_001d1550
// Address: 0x1d1550 - 0x1d1568
void entry_001d1550_0x1d1550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1550_0x1d1550");
#endif

    ctx->pc = 0x1d1550u;

    // 0x1d1550: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1d1550u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1554: 0x2a82ffff  slti        $v0, $s4, -0x1
    ctx->pc = 0x1d1554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1d1558: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x1D1558u;
    {
        const bool branch_taken_0x1d1558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1558) {
            ctx->pc = 0x1D155Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1558u;
            // 0x1d155c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D146Cu;
            return;
        }
    }
    ctx->pc = 0x1D1560u;
    // 0x1d1560: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x1D1560u;
    {
        const bool branch_taken_0x1d1560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1560u;
        // 0x1d1564: 0x2623ffe0  addiu       $v1, $s1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1560) {
            ctx->pc = 0x1D1470u;
            return;
        }
    }
    ctx->pc = 0x1D1568u;
}
