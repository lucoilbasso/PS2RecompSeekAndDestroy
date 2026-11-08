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

// Function: entry_0019cb08
// Address: 0x19cb08 - 0x19cb18
void entry_0019cb08_0x19cb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cb08_0x19cb08");
#endif

    ctx->pc = 0x19cb08u;

    // 0x19cb08: 0x10c90003  beq         $a2, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CB08u;
    {
        const bool branch_taken_0x19cb08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x19CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB08u;
        // 0x19cb0c: 0x94e20000  lhu         $v0, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb08) {
            ctx->pc = 0x19CB18u;
            return;
        }
    }
    ctx->pc = 0x19CB10u;
    // 0x19cb10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CB10u;
    {
        const bool branch_taken_0x19cb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB10u;
        // 0x19cb14: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb10) {
            ctx->pc = 0x19CB20u;
            return;
        }
    }
    ctx->pc = 0x19CB18u;
}
