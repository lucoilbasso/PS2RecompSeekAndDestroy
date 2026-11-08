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

// Function: entry_001a8e8c
// Address: 0x1a8e8c - 0x1a8e98
void entry_001a8e8c_0x1a8e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8e8c_0x1a8e8c");
#endif

    ctx->pc = 0x1a8e8cu;

    // 0x1a8e8c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1a8e8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a8e90: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A8E90u;
    {
        const bool branch_taken_0x1a8e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E90u;
        // 0x1a8e94: 0x30880003  andi        $t0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e90) {
            ctx->pc = 0x1A8E70u;
            return;
        }
    }
    ctx->pc = 0x1A8E98u;
}
