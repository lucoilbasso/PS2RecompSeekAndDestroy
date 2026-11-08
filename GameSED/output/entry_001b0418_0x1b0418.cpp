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

// Function: entry_001b0418
// Address: 0x1b0418 - 0x1b0448
void entry_001b0418_0x1b0418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0418_0x1b0418");
#endif

    ctx->pc = 0x1b0418u;

    // 0x1b0418: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1b0418u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1b041c: 0x52480012  beql        $s2, $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B041Cu;
    {
        const bool branch_taken_0x1b041c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        if (branch_taken_0x1b041c) {
            ctx->pc = 0x1B0420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B041Cu;
            // 0x1b0420: 0x26b07ed0  addiu       $s0, $s5, 0x7ED0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 32464));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B0424u;
    // 0x1b0424: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b0424u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0428: 0x14470007  bne         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0428u;
    {
        const bool branch_taken_0x1b0428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1B042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0428u;
        // 0x1b042c: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0428) {
            ctx->pc = 0x1B0448u;
            return;
        }
    }
    ctx->pc = 0x1B0430u;
    // 0x1b0430: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1b0430u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b0434: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b0434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b0438: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x1b0438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b043c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B043Cu;
    {
        const bool branch_taken_0x1b043c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B043Cu;
        // 0x1b0440: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b043c) {
            ctx->pc = 0x1B0464u;
            return;
        }
    }
    ctx->pc = 0x1B0444u;
    // 0x1b0444: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1b0444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1b0448u;
}
