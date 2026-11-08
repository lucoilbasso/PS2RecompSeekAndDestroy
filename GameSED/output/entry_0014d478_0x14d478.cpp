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

// Function: entry_0014d478
// Address: 0x14d478 - 0x14d4a8
void entry_0014d478_0x14d478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d478_0x14d478");
#endif

    ctx->pc = 0x14d478u;

label_14d478:
    // 0x14d478: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14d478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14d47c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x14d47cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x14d480: 0x0  nop
    ctx->pc = 0x14d480u;
    // NOP
    // 0x14d484: 0x0  nop
    ctx->pc = 0x14d484u;
    // NOP
    // 0x14d488: 0x0  nop
    ctx->pc = 0x14d488u;
    // NOP
    // 0x14d48c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14D48Cu;
    {
        const bool branch_taken_0x14d48c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x14D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D48Cu;
        // 0x14d490: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d48c) {
            ctx->pc = 0x14D478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d478;
        }
    }
    ctx->pc = 0x14D494u;
    // 0x14d494: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14d494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14d498: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14d498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d49c: 0x260206dc  addiu       $v0, $s0, 0x6DC
    ctx->pc = 0x14d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1756));
    // 0x14d4a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14d4a4: 0x0  nop
    ctx->pc = 0x14d4a4u;
    // NOP
    ctx->pc = 0x14d4a8u;
}
