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

// Function: entry_0017dc88
// Address: 0x17dc88 - 0x17dc90
void entry_0017dc88_0x17dc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dc88_0x17dc88");
#endif

    ctx->pc = 0x17dc88u;

    // 0x17dc88: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x17DC88u;
    {
        const bool branch_taken_0x17dc88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC88u;
        // 0x17dc8c: 0xa7a40000  sh          $a0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc88) {
            ctx->pc = 0x17DC50u;
            return;
        }
    }
    ctx->pc = 0x17DC90u;
}
