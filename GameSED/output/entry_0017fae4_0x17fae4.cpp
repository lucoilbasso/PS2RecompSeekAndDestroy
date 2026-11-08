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

// Function: entry_0017fae4
// Address: 0x17fae4 - 0x17faec
void entry_0017fae4_0x17fae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fae4_0x17fae4");
#endif

    ctx->pc = 0x17fae4u;

    // 0x17fae4: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17FAE4u;
    {
        const bool branch_taken_0x17fae4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FAE4u;
        // 0x17fae8: 0x62380a  movz        $a3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fae4) {
            ctx->pc = 0x17FA98u;
            return;
        }
    }
    ctx->pc = 0x17FAECu;
}
