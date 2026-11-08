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

// Function: entry_001d7358
// Address: 0x1d7358 - 0x1d737c
void entry_001d7358_0x1d7358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7358_0x1d7358");
#endif

    ctx->pc = 0x1d7358u;

label_1d7358:
    // 0x1d7358: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1d7358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1d735c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d735cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d7360: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1d7360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1d7364: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1d7364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1d7368: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1d7368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1d736c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d736cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d7370: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1d7370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1d7374: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D7374u;
    {
        const bool branch_taken_0x1d7374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7374u;
        // 0x1d7378: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7374) {
            ctx->pc = 0x1D7358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7358;
        }
    }
    ctx->pc = 0x1D737Cu;
}
