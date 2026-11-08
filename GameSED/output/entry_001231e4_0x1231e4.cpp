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

// Function: entry_001231e4
// Address: 0x1231e4 - 0x1231f4
void entry_001231e4_0x1231e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001231e4_0x1231e4");
#endif

    ctx->pc = 0x1231e4u;

    // 0x1231e4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1231E4u;
    {
        const bool branch_taken_0x1231e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231E4u;
        // 0x1231e8: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231e4) {
            ctx->pc = 0x1231F4u;
            return;
        }
    }
    ctx->pc = 0x1231ECu;
    // 0x1231ec: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1231ECu;
    {
        const bool branch_taken_0x1231ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1231ec) {
            ctx->pc = 0x123200u;
            return;
        }
    }
    ctx->pc = 0x1231F4u;
}
