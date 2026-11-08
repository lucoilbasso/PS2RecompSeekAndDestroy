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

// Function: entry_0019ad28
// Address: 0x19ad28 - 0x19ad40
void entry_0019ad28_0x19ad28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ad28_0x19ad28");
#endif

    ctx->pc = 0x19ad28u;

    // 0x19ad28: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x19ad28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x19ad2c: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x19ad2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19ad30: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AD30u;
    {
        const bool branch_taken_0x19ad30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x19AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD30u;
        // 0x19ad34: 0x90e30000  lbu         $v1, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad30) {
            ctx->pc = 0x19AD40u;
            return;
        }
    }
    ctx->pc = 0x19AD38u;
    // 0x19ad38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19AD38u;
    {
        const bool branch_taken_0x19ad38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD38u;
        // 0x19ad3c: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad38) {
            ctx->pc = 0x19AD44u;
            return;
        }
    }
    ctx->pc = 0x19AD40u;
}
