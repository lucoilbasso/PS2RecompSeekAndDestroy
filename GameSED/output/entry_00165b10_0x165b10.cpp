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

// Function: entry_00165b10
// Address: 0x165b10 - 0x165b2c
void entry_00165b10_0x165b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165b10_0x165b10");
#endif

    ctx->pc = 0x165b10u;

label_165b10:
    // 0x165b10: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x165b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x165b14: 0x0  nop
    ctx->pc = 0x165b14u;
    // NOP
    // 0x165b18: 0x0  nop
    ctx->pc = 0x165b18u;
    // NOP
    // 0x165b1c: 0x0  nop
    ctx->pc = 0x165b1cu;
    // NOP
    // 0x165b20: 0x0  nop
    ctx->pc = 0x165b20u;
    // NOP
    // 0x165b24: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x165B24u;
    {
        const bool branch_taken_0x165b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165b24) {
            ctx->pc = 0x165B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165B24u;
            // 0x165b28: 0xac4300e0  sw          $v1, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165b10;
        }
    }
    ctx->pc = 0x165B2Cu;
}
