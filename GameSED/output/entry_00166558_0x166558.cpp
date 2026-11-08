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

// Function: entry_00166558
// Address: 0x166558 - 0x166574
void entry_00166558_0x166558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166558_0x166558");
#endif

    ctx->pc = 0x166558u;

label_166558:
    // 0x166558: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x166558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x16655c: 0x0  nop
    ctx->pc = 0x16655cu;
    // NOP
    // 0x166560: 0x0  nop
    ctx->pc = 0x166560u;
    // NOP
    // 0x166564: 0x0  nop
    ctx->pc = 0x166564u;
    // NOP
    // 0x166568: 0x0  nop
    ctx->pc = 0x166568u;
    // NOP
    // 0x16656c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16656Cu;
    {
        const bool branch_taken_0x16656c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16656c) {
            ctx->pc = 0x166570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16656Cu;
            // 0x166570: 0xac4300e0  sw          $v1, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166558;
        }
    }
    ctx->pc = 0x166574u;
}
