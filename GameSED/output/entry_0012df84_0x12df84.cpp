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

// Function: entry_0012df84
// Address: 0x12df84 - 0x12df94
void entry_0012df84_0x12df84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012df84_0x12df84");
#endif

    ctx->pc = 0x12df84u;

    // 0x12df84: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12DF84u;
    {
        const bool branch_taken_0x12df84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF84u;
        // 0x12df88: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df84) {
            ctx->pc = 0x12DF94u;
            return;
        }
    }
    ctx->pc = 0x12DF8Cu;
    // 0x12df8c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DF8Cu;
    {
        const bool branch_taken_0x12df8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x12df8c) {
            ctx->pc = 0x12DFA0u;
            return;
        }
    }
    ctx->pc = 0x12DF94u;
}
