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

// Function: entry_001c9e48
// Address: 0x1c9e48 - 0x1c9e70
void entry_001c9e48_0x1c9e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9e48_0x1c9e48");
#endif

    ctx->pc = 0x1c9e48u;

label_1c9e48:
    // 0x1c9e48: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c9e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c9e4c: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x1c9e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x1c9e50: 0x14c1824  and         $v1, $t2, $t4
    ctx->pc = 0x1c9e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
    // 0x1c9e54: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x1c9e54u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1c9e58: 0x0  nop
    ctx->pc = 0x1c9e58u;
    // NOP
    // 0x1c9e5c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C9E5Cu;
    {
        const bool branch_taken_0x1c9e5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E5Cu;
        // 0x1c9e60: 0x625025  or          $t2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e5c) {
            ctx->pc = 0x1C9E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9e48;
        }
    }
    ctx->pc = 0x1C9E64u;
    // 0x1c9e64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C9E64u;
    {
        const bool branch_taken_0x1c9e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E64u;
        // 0x1c9e68: 0x8d640004  lw          $a0, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e64) {
            ctx->pc = 0x1C9E90u;
            return;
        }
    }
    ctx->pc = 0x1C9E6Cu;
    // 0x1c9e6c: 0x0  nop
    ctx->pc = 0x1c9e6cu;
    // NOP
    ctx->pc = 0x1c9e70u;
}
