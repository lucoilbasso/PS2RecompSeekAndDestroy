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

// Function: entry_001b0b18
// Address: 0x1b0b18 - 0x1b0b38
void entry_001b0b18_0x1b0b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0b18_0x1b0b18");
#endif

    ctx->pc = 0x1b0b18u;

label_1b0b18:
    // 0x1b0b18: 0x32220007  andi        $v0, $s1, 0x7
    ctx->pc = 0x1b0b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x1b0b1c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1b0b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1b0b20: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x1b0b20u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x1b0b24: 0x1188fa  dsrl        $s1, $s1, 3
    ctx->pc = 0x1b0b24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 3);
    // 0x1b0b28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b0b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b0b2c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1b0b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b0b30: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B0B30u;
    {
        const bool branch_taken_0x1b0b30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0b30) {
            ctx->pc = 0x1B0B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0b18;
        }
    }
    ctx->pc = 0x1B0B38u;
}
