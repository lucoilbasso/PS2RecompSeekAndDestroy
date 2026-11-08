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

// Function: entry_0017b148
// Address: 0x17b148 - 0x17b170
void entry_0017b148_0x17b148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b148_0x17b148");
#endif

    ctx->pc = 0x17b148u;

label_17b148:
    // 0x17b148: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17b148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17b14c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17b14cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17b150: 0x0  nop
    ctx->pc = 0x17b150u;
    // NOP
    // 0x17b154: 0x0  nop
    ctx->pc = 0x17b154u;
    // NOP
    // 0x17b158: 0x0  nop
    ctx->pc = 0x17b158u;
    // NOP
    // 0x17b15c: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17B15Cu;
    {
        const bool branch_taken_0x17b15c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B15Cu;
        // 0x17b160: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b15c) {
            ctx->pc = 0x17B148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b148;
        }
    }
    ctx->pc = 0x17B164u;
    // 0x17b164: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x17b164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x17b168: 0x2642019c  addiu       $v0, $s2, 0x19C
    ctx->pc = 0x17b168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 412));
    // 0x17b16c: 0x0  nop
    ctx->pc = 0x17b16cu;
    // NOP
    ctx->pc = 0x17b170u;
}
