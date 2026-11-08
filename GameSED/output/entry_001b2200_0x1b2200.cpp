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

// Function: entry_001b2200
// Address: 0x1b2200 - 0x1b2228
void entry_001b2200_0x1b2200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2200_0x1b2200");
#endif

    ctx->pc = 0x1b2200u;

label_1b2200:
    // 0x1b2200: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x1b2200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1b2204: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b2204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2208: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b2208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b220c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1b220cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b2210: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1b2210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1b2214: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1b2214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b2218: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B2218u;
    {
        const bool branch_taken_0x1b2218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2218u;
        // 0x1b221c: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2218) {
            ctx->pc = 0x1B2200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2200;
        }
    }
    ctx->pc = 0x1B2220u;
    // 0x1b2220: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1B2220u;
    {
        const bool branch_taken_0x1b2220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2220u;
        // 0x1b2224: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2220) {
            ctx->pc = 0x1B23DCu;
            return;
        }
    }
    ctx->pc = 0x1B2228u;
}
