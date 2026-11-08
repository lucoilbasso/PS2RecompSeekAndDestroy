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

// Function: entry_0019bb78
// Address: 0x19bb78 - 0x19bb80
void entry_0019bb78_0x19bb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bb78_0x19bb78");
#endif

    ctx->pc = 0x19bb78u;

    // 0x19bb78: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x19BB78u;
    {
        const bool branch_taken_0x19bb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB78u;
        // 0x19bb7c: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb78) {
            ctx->pc = 0x19BAE0u;
            return;
        }
    }
    ctx->pc = 0x19BB80u;
}
