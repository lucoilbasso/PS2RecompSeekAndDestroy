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

// Function: entry_001d4460
// Address: 0x1d4460 - 0x1d4484
void entry_001d4460_0x1d4460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4460_0x1d4460");
#endif

    ctx->pc = 0x1d4460u;

label_1d4460:
    // 0x1d4460: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x1d4460u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d4464: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D4464u;
    {
        const bool branch_taken_0x1d4464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4464u;
        // 0x1d4468: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4464) {
            ctx->pc = 0x1D44C0u;
            return;
        }
    }
    ctx->pc = 0x1D446Cu;
    // 0x1d446c: 0x0  nop
    ctx->pc = 0x1d446cu;
    // NOP
    // 0x1d4470: 0x0  nop
    ctx->pc = 0x1d4470u;
    // NOP
    // 0x1d4474: 0x0  nop
    ctx->pc = 0x1d4474u;
    // NOP
    // 0x1d4478: 0x0  nop
    ctx->pc = 0x1d4478u;
    // NOP
    // 0x1d447c: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D447Cu;
    {
        const bool branch_taken_0x1d447c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D447Cu;
        // 0x1d4480: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d447c) {
            ctx->pc = 0x1D4460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4460;
        }
    }
    ctx->pc = 0x1D4484u;
}
