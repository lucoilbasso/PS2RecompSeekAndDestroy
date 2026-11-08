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

// Function: entry_00166440
// Address: 0x166440 - 0x166460
void entry_00166440_0x166440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166440_0x166440");
#endif

    ctx->pc = 0x166440u;

label_166440:
    // 0x166440: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x166440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x166444: 0x0  nop
    ctx->pc = 0x166444u;
    // NOP
    // 0x166448: 0x0  nop
    ctx->pc = 0x166448u;
    // NOP
    // 0x16644c: 0x0  nop
    ctx->pc = 0x16644cu;
    // NOP
    // 0x166450: 0x0  nop
    ctx->pc = 0x166450u;
    // NOP
    // 0x166454: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x166454u;
    {
        const bool branch_taken_0x166454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166454) {
            ctx->pc = 0x166458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166454u;
            // 0x166458: 0xac4000e0  sw          $zero, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166440;
        }
    }
    ctx->pc = 0x16645Cu;
    // 0x16645c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x16645cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x166460u;
}
