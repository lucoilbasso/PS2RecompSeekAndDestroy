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

// Function: entry_001504dc
// Address: 0x1504dc - 0x1504f8
void entry_001504dc_0x1504dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001504dc_0x1504dc");
#endif

    ctx->pc = 0x1504dcu;

    // 0x1504dc: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1504dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1504e0: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1504e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1504e4: 0x2ae20005  slti        $v0, $s7, 0x5
    ctx->pc = 0x1504e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1504e8: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x1504E8u;
    {
        const bool branch_taken_0x1504e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1504ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1504E8u;
        // 0x1504ec: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1504e8) {
            ctx->pc = 0x150400u;
            return;
        }
    }
    ctx->pc = 0x1504F0u;
    // 0x1504f0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1504F0u;
    {
        const bool branch_taken_0x1504f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1504F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1504F0u;
        // 0x1504f4: 0x26440600  addiu       $a0, $s2, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1504f0) {
            ctx->pc = 0x15060Cu;
            return;
        }
    }
    ctx->pc = 0x1504F8u;
}
