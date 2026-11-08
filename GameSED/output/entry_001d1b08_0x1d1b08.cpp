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

// Function: entry_001d1b08
// Address: 0x1d1b08 - 0x1d1b30
void entry_001d1b08_0x1d1b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1b08_0x1d1b08");
#endif

    ctx->pc = 0x1d1b08u;

label_1d1b08:
    // 0x1d1b08: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x1d1b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x1d1b0c: 0x2041024  and         $v0, $s0, $a0
    ctx->pc = 0x1d1b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x1d1b10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d1b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d1b14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d1b14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d1b18: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d1b18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1d1b1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d1b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d1b20: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x1d1b20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x1d1b24: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1d1b24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1b28: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D1B28u;
    {
        const bool branch_taken_0x1d1b28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B28u;
        // 0x1d1b2c: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b28) {
            ctx->pc = 0x1D1B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b08;
        }
    }
    ctx->pc = 0x1D1B30u;
}
