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

// Function: entry_00160528
// Address: 0x160528 - 0x160540
void entry_00160528_0x160528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160528_0x160528");
#endif

    ctx->pc = 0x160528u;

    // 0x160528: 0x10820053  beq         $a0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x160528u;
    {
        const bool branch_taken_0x160528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160528u;
        // 0x16052c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160528) {
            ctx->pc = 0x160678u;
            return;
        }
    }
    ctx->pc = 0x160530u;
    // 0x160530: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x160530u;
    {
        const bool branch_taken_0x160530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x160534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160530u;
        // 0x160534: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160530) {
            ctx->pc = 0x1606D8u;
            return;
        }
    }
    ctx->pc = 0x160538u;
    // 0x160538: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x160538u;
    {
        const bool branch_taken_0x160538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160538u;
        // 0x16053c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160538) {
            ctx->pc = 0x160A3Cu;
            return;
        }
    }
    ctx->pc = 0x160540u;
}
