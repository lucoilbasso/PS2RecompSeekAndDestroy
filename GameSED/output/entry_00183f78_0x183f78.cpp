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

// Function: entry_00183f78
// Address: 0x183f78 - 0x183f94
void entry_00183f78_0x183f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183f78_0x183f78");
#endif

    ctx->pc = 0x183f78u;

label_183f78:
    // 0x183f78: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x183f78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x183f7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x183f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x183f80: 0xa0600007  sb          $zero, 0x7($v1)
    ctx->pc = 0x183f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x183f84: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x183f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x183f88: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x183f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x183f8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x183F8Cu;
    {
        const bool branch_taken_0x183f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F8Cu;
        // 0x183f90: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f8c) {
            ctx->pc = 0x183F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183f78;
        }
    }
    ctx->pc = 0x183F94u;
}
