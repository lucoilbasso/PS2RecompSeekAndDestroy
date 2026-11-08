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

// Function: entry_00117738
// Address: 0x117738 - 0x117758
void entry_00117738_0x117738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117738_0x117738");
#endif

    ctx->pc = 0x117738u;

    // 0x117738: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x117738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11773c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x11773cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x117740: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x117740u;
    {
        const bool branch_taken_0x117740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x117744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117740u;
        // 0x117744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117740) {
            ctx->pc = 0x117758u;
            return;
        }
    }
    ctx->pc = 0x117748u;
    // 0x117748: 0x5062001f  beql        $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x117748u;
    {
        const bool branch_taken_0x117748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x117748) {
            ctx->pc = 0x11774Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117748u;
            // 0x11774c: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1177C8u;
            return;
        }
    }
    ctx->pc = 0x117750u;
    // 0x117750: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x117750u;
    {
        const bool branch_taken_0x117750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117750u;
        // 0x117754: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117750) {
            ctx->pc = 0x117818u;
            return;
        }
    }
    ctx->pc = 0x117758u;
}
