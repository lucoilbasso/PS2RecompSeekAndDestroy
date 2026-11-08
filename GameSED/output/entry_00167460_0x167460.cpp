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

// Function: entry_00167460
// Address: 0x167460 - 0x167480
void entry_00167460_0x167460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167460_0x167460");
#endif

    ctx->pc = 0x167460u;

label_167460:
    // 0x167460: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x167460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x167464: 0x0  nop
    ctx->pc = 0x167464u;
    // NOP
    // 0x167468: 0x0  nop
    ctx->pc = 0x167468u;
    // NOP
    // 0x16746c: 0x0  nop
    ctx->pc = 0x16746cu;
    // NOP
    // 0x167470: 0x0  nop
    ctx->pc = 0x167470u;
    // NOP
    // 0x167474: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x167474u;
    {
        const bool branch_taken_0x167474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167474) {
            ctx->pc = 0x167478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167474u;
            // 0x167478: 0xac4400e0  sw          $a0, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167460;
        }
    }
    ctx->pc = 0x16747Cu;
    // 0x16747c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x16747cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x167480u;
}
