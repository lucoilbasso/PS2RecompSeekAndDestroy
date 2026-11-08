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

// Function: entry_001d7560
// Address: 0x1d7560 - 0x1d7584
void entry_001d7560_0x1d7560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7560_0x1d7560");
#endif

    ctx->pc = 0x1d7560u;

label_1d7560:
    // 0x1d7560: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1d7560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1d7564: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d7564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d7568: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1d7568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1d756c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1d756cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d7570: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1d7570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1d7574: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d7574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d7578: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1d7578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1d757c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D757Cu;
    {
        const bool branch_taken_0x1d757c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D757Cu;
        // 0x1d7580: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d757c) {
            ctx->pc = 0x1D7560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7560;
        }
    }
    ctx->pc = 0x1D7584u;
}
