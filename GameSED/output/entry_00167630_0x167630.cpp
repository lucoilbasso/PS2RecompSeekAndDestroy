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

// Function: entry_00167630
// Address: 0x167630 - 0x167650
void entry_00167630_0x167630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167630_0x167630");
#endif

    ctx->pc = 0x167630u;

label_167630:
    // 0x167630: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x167630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x167634: 0x0  nop
    ctx->pc = 0x167634u;
    // NOP
    // 0x167638: 0x0  nop
    ctx->pc = 0x167638u;
    // NOP
    // 0x16763c: 0x0  nop
    ctx->pc = 0x16763cu;
    // NOP
    // 0x167640: 0x0  nop
    ctx->pc = 0x167640u;
    // NOP
    // 0x167644: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x167644u;
    {
        const bool branch_taken_0x167644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167644) {
            ctx->pc = 0x167648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167644u;
            // 0x167648: 0xac4000e0  sw          $zero, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167630;
        }
    }
    ctx->pc = 0x16764Cu;
    // 0x16764c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x16764cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x167650u;
}
