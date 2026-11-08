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

// Function: entry_0018e040
// Address: 0x18e040 - 0x18e05c
void entry_0018e040_0x18e040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e040_0x18e040");
#endif

    ctx->pc = 0x18e040u;

label_18e040:
    // 0x18e040: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18e040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18e044: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x18e044u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x18e048: 0x0  nop
    ctx->pc = 0x18e048u;
    // NOP
    // 0x18e04c: 0x0  nop
    ctx->pc = 0x18e04cu;
    // NOP
    // 0x18e050: 0x0  nop
    ctx->pc = 0x18e050u;
    // NOP
    // 0x18e054: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E054u;
    {
        const bool branch_taken_0x18e054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E054u;
        // 0x18e058: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e054) {
            ctx->pc = 0x18E040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e040;
        }
    }
    ctx->pc = 0x18E05Cu;
}
