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

// Function: entry_001c40b4
// Address: 0x1c40b4 - 0x1c40cc
void entry_001c40b4_0x1c40b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c40b4_0x1c40b4");
#endif

    ctx->pc = 0x1c40b4u;

    // 0x1c40b4: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x1c40b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1c40b8: 0x2c430039  sltiu       $v1, $v0, 0x39
    ctx->pc = 0x1c40b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
    // 0x1c40bc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C40BCu;
    {
        const bool branch_taken_0x1c40bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40BCu;
        // 0x1c40c0: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40bc) {
            ctx->pc = 0x1C4078u;
            return;
        }
    }
    ctx->pc = 0x1C40C4u;
    // 0x1c40c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C40C4u;
    {
        const bool branch_taken_0x1c40c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40C4u;
        // 0x1c40c8: 0x149102d  daddu       $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40c4) {
            ctx->pc = 0x1C40D8u;
            return;
        }
    }
    ctx->pc = 0x1C40CCu;
}
