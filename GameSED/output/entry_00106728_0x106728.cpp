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

// Function: entry_00106728
// Address: 0x106728 - 0x106744
void entry_00106728_0x106728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106728_0x106728");
#endif

    ctx->pc = 0x106728u;

label_106728:
    // 0x106728: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x106728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10672c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x10672cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x106730: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x106730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x106734: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x106734u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x106738: 0x0  nop
    ctx->pc = 0x106738u;
    // NOP
    // 0x10673c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10673Cu;
    {
        const bool branch_taken_0x10673c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10673Cu;
        // 0x106740: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10673c) {
            ctx->pc = 0x106728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106728;
        }
    }
    ctx->pc = 0x106744u;
}
