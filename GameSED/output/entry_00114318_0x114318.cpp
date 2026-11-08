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

// Function: entry_00114318
// Address: 0x114318 - 0x114328
void entry_00114318_0x114318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114318_0x114318");
#endif

    ctx->pc = 0x114318u;

    // 0x114318: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114318u;
    {
        const bool branch_taken_0x114318 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x11431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114318u;
        // 0x11431c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114318) {
            ctx->pc = 0x114338u;
            return;
        }
    }
    ctx->pc = 0x114320u;
    // 0x114320: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x114320u;
    {
        const bool branch_taken_0x114320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114320u;
        // 0x114324: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114320) {
            ctx->pc = 0x114358u;
            return;
        }
    }
    ctx->pc = 0x114328u;
}
