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

// Function: entry_00156b34
// Address: 0x156b34 - 0x156b3c
void entry_00156b34_0x156b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156b34_0x156b34");
#endif

    ctx->pc = 0x156b34u;

    // 0x156b34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156B34u;
    {
        const bool branch_taken_0x156b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B34u;
        // 0x156b38: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b34) {
            ctx->pc = 0x156B44u;
            return;
        }
    }
    ctx->pc = 0x156B3Cu;
}
