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

// Function: entry_0012bef4
// Address: 0x12bef4 - 0x12bf04
void entry_0012bef4_0x12bef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bef4_0x12bef4");
#endif

    ctx->pc = 0x12bef4u;

    // 0x12bef4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12BEF4u;
    {
        const bool branch_taken_0x12bef4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEF4u;
        // 0x12bef8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bef4) {
            ctx->pc = 0x12BF04u;
            return;
        }
    }
    ctx->pc = 0x12BEFCu;
    // 0x12befc: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BEFCu;
    {
        const bool branch_taken_0x12befc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x12befc) {
            ctx->pc = 0x12BF10u;
            return;
        }
    }
    ctx->pc = 0x12BF04u;
}
