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

// Function: entry_001d4174
// Address: 0x1d4174 - 0x1d4190
void entry_001d4174_0x1d4174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4174_0x1d4174");
#endif

    ctx->pc = 0x1d4174u;

label_1d4174:
    // 0x1d4174: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1d4174u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d4178: 0x0  nop
    ctx->pc = 0x1d4178u;
    // NOP
    // 0x1d417c: 0x0  nop
    ctx->pc = 0x1d417cu;
    // NOP
    // 0x1d4180: 0x0  nop
    ctx->pc = 0x1d4180u;
    // NOP
    // 0x1d4184: 0x0  nop
    ctx->pc = 0x1d4184u;
    // NOP
    // 0x1d4188: 0x5043fffa  beql        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D4188u;
    {
        const bool branch_taken_0x1d4188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d4188) {
            ctx->pc = 0x1D418Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4188u;
            // 0x1d418c: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4174u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4174;
        }
    }
    ctx->pc = 0x1D4190u;
}
