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

// Function: entry_001d1518
// Address: 0x1d1518 - 0x1d1528
void entry_001d1518_0x1d1518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1518_0x1d1518");
#endif

    ctx->pc = 0x1d1518u;

    // 0x1d1518: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x1d1518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x1d151c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1d151cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d1520: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D1520u;
    {
        const bool branch_taken_0x1d1520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1520u;
        // 0x1d1524: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1520) {
            ctx->pc = 0x1D1550u;
            return;
        }
    }
    ctx->pc = 0x1D1528u;
}
