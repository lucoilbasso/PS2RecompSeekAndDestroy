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

// Function: entry_001b32f8
// Address: 0x1b32f8 - 0x1b3318
void entry_001b32f8_0x1b32f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b32f8_0x1b32f8");
#endif

    ctx->pc = 0x1b32f8u;

label_1b32f8:
    // 0x1b32f8: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x1b32f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1b32fc: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1b32fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1b3300: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b3300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3304: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b3304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b3308: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1b3308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b330c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1b330cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3310: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B3310u;
    {
        const bool branch_taken_0x1b3310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3310) {
            ctx->pc = 0x1B32F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b32f8;
        }
    }
    ctx->pc = 0x1B3318u;
}
