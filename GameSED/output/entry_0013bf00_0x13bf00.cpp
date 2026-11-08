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

// Function: entry_0013bf00
// Address: 0x13bf00 - 0x13bf20
void entry_0013bf00_0x13bf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bf00_0x13bf00");
#endif

    ctx->pc = 0x13bf00u;

label_13bf00:
    // 0x13bf00: 0x0  nop
    ctx->pc = 0x13bf00u;
    // NOP
    // 0x13bf04: 0x0  nop
    ctx->pc = 0x13bf04u;
    // NOP
    // 0x13bf08: 0x0  nop
    ctx->pc = 0x13bf08u;
    // NOP
    // 0x13bf0c: 0x0  nop
    ctx->pc = 0x13bf0cu;
    // NOP
    // 0x13bf10: 0x0  nop
    ctx->pc = 0x13bf10u;
    // NOP
    // 0x13bf14: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13BF14u;
    {
        const bool branch_taken_0x13bf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bf14) {
            ctx->pc = 0x13BF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BF14u;
            // 0x13bf18: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bf00;
        }
    }
    ctx->pc = 0x13BF1Cu;
    // 0x13bf1c: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x13bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    ctx->pc = 0x13bf20u;
}
