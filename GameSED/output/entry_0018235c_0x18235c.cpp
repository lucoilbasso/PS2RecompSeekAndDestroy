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

// Function: entry_0018235c
// Address: 0x18235c - 0x182380
void entry_0018235c_0x18235c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018235c_0x18235c");
#endif

    ctx->pc = 0x18235cu;

    // 0x18235c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18235Cu;
    {
        const bool branch_taken_0x18235c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18235Cu;
        // 0x182360: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18235c) {
            ctx->pc = 0x182380u;
            return;
        }
    }
    ctx->pc = 0x182364u;
    // 0x182364: 0xae960054  sw          $s6, 0x54($s4)
    ctx->pc = 0x182364u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 22));
    // 0x182368: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x182368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x18236c: 0xae970050  sw          $s7, 0x50($s4)
    ctx->pc = 0x18236cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 23));
    // 0x182370: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x182370u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
    // 0x182374: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x182374u;
    {
        const bool branch_taken_0x182374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182374u;
        // 0x182378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182374) {
            ctx->pc = 0x182384u;
            return;
        }
    }
    ctx->pc = 0x18237Cu;
    // 0x18237c: 0x0  nop
    ctx->pc = 0x18237cu;
    // NOP
    ctx->pc = 0x182380u;
}
