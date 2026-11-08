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

// Function: entry_001c7540
// Address: 0x1c7540 - 0x1c7560
void entry_001c7540_0x1c7540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7540_0x1c7540");
#endif

    ctx->pc = 0x1c7540u;

    // 0x1c7540: 0xfef40000  sd          $s4, 0x0($s7)
    ctx->pc = 0x1c7540u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 20));
    // 0x1c7544: 0x3d2102a  slt         $v0, $fp, $s2
    ctx->pc = 0x1c7544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c7548: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1c7548u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1c754c: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x1c754cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x1c7550: 0x1040ffdf  beqz        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C7550u;
    {
        const bool branch_taken_0x1c7550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7550u;
        // 0x1c7554: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7550) {
            ctx->pc = 0x1C74D0u;
            return;
        }
    }
    ctx->pc = 0x1C7558u;
    // 0x1c7558: 0x1000fef7  b           . + 4 + (-0x109 << 2)
    ctx->pc = 0x1C7558u;
    {
        const bool branch_taken_0x1c7558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7558u;
        // 0x1c755c: 0x3c0b02d  daddu       $s6, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7558) {
            ctx->pc = 0x1C7138u;
            return;
        }
    }
    ctx->pc = 0x1C7560u;
}
