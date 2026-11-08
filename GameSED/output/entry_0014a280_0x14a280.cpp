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

// Function: entry_0014a280
// Address: 0x14a280 - 0x14a2a8
void entry_0014a280_0x14a280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a280_0x14a280");
#endif

    ctx->pc = 0x14a280u;

    // 0x14a280: 0x11200009  beqz        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14A280u;
    {
        const bool branch_taken_0x14a280 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A280u;
        // 0x14a284: 0x2862ffc0  slti        $v0, $v1, -0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967232) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a280) {
            ctx->pc = 0x14A2A8u;
            return;
        }
    }
    ctx->pc = 0x14A288u;
    // 0x14a288: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14A288u;
    {
        const bool branch_taken_0x14a288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a288) {
            ctx->pc = 0x14A28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A288u;
            // 0x14a28c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A2ACu;
            return;
        }
    }
    ctx->pc = 0x14A290u;
    // 0x14a290: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x14a290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x14a294: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A294u;
    {
        const bool branch_taken_0x14a294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a294) {
            ctx->pc = 0x14A298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A294u;
            // 0x14a298: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A2ACu;
            return;
        }
    }
    ctx->pc = 0x14A29Cu;
    // 0x14a29c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x14a29cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14a2a0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x14a2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x14a2a4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x14a2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14a2a8u;
}
