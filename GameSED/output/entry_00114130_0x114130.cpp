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

// Function: entry_00114130
// Address: 0x114130 - 0x11414c
void entry_00114130_0x114130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114130_0x114130");
#endif

    ctx->pc = 0x114130u;

label_114130:
    // 0x114130: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x114130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x114134: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x114134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x114138: 0x0  nop
    ctx->pc = 0x114138u;
    // NOP
    // 0x11413c: 0x0  nop
    ctx->pc = 0x11413cu;
    // NOP
    // 0x114140: 0x0  nop
    ctx->pc = 0x114140u;
    // NOP
    // 0x114144: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x114144u;
    {
        const bool branch_taken_0x114144 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x114148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114144u;
        // 0x114148: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114144) {
            ctx->pc = 0x114130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114130;
        }
    }
    ctx->pc = 0x11414Cu;
}
