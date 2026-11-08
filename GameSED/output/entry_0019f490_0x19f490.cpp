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

// Function: entry_0019f490
// Address: 0x19f490 - 0x19f4b4
void entry_0019f490_0x19f490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f490_0x19f490");
#endif

    ctx->pc = 0x19f490u;

label_19f490:
    // 0x19f490: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x19f490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x19f494: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F494u;
    {
        const bool branch_taken_0x19f494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F494u;
        // 0x19f498: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f494) {
            ctx->pc = 0x19F4B4u;
            return;
        }
    }
    ctx->pc = 0x19F49Cu;
    // 0x19f49c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f4a0: 0x0  nop
    ctx->pc = 0x19f4a0u;
    // NOP
    // 0x19f4a4: 0x0  nop
    ctx->pc = 0x19f4a4u;
    // NOP
    // 0x19f4a8: 0x0  nop
    ctx->pc = 0x19f4a8u;
    // NOP
    // 0x19f4ac: 0x5622fff8  bnel        $s1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19F4ACu;
    {
        const bool branch_taken_0x19f4ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f4ac) {
            ctx->pc = 0x19F4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F4ACu;
            // 0x19f4b0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f490;
        }
    }
    ctx->pc = 0x19F4B4u;
}
