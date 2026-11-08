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

// Function: entry_001459fc
// Address: 0x1459fc - 0x145a0c
void entry_001459fc_0x1459fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001459fc_0x1459fc");
#endif

    ctx->pc = 0x1459fcu;

    // 0x1459fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1459FCu;
    {
        const bool branch_taken_0x1459fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x145A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1459FCu;
        // 0x145a00: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1459fc) {
            ctx->pc = 0x145A14u;
            return;
        }
    }
    ctx->pc = 0x145A04u;
    // 0x145a04: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x145A04u;
    {
        const bool branch_taken_0x145a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145a04) {
            ctx->pc = 0x145A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145A04u;
            // 0x145a08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145A18u;
            return;
        }
    }
    ctx->pc = 0x145A0Cu;
}
