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

// Function: entry_0017fa34
// Address: 0x17fa34 - 0x17fa3c
void entry_0017fa34_0x17fa34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fa34_0x17fa34");
#endif

    ctx->pc = 0x17fa34u;

    // 0x17fa34: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x17FA34u;
    {
        const bool branch_taken_0x17fa34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA34u;
        // 0x17fa38: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa34) {
            ctx->pc = 0x17FA08u;
            return;
        }
    }
    ctx->pc = 0x17FA3Cu;
}
