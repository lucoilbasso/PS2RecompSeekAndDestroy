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

// Function: entry_0018c524
// Address: 0x18c524 - 0x18c538
void entry_0018c524_0x18c524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c524_0x18c524");
#endif

    ctx->pc = 0x18c524u;

    // 0x18c524: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x18c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x18c528: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18C528u;
    {
        const bool branch_taken_0x18c528 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18c528) {
            ctx->pc = 0x18C52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C528u;
            // 0x18c52c: 0xa620023c  sh          $zero, 0x23C($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 572), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C558u;
            return;
        }
    }
    ctx->pc = 0x18C530u;
    // 0x18c530: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x18c530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x18c534: 0x0  nop
    ctx->pc = 0x18c534u;
    // NOP
    ctx->pc = 0x18c538u;
}
