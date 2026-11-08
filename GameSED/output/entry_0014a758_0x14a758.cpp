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

// Function: entry_0014a758
// Address: 0x14a758 - 0x14a780
void entry_0014a758_0x14a758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a758_0x14a758");
#endif

    ctx->pc = 0x14a758u;

    // 0x14a758: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14A758u;
    {
        const bool branch_taken_0x14a758 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A758u;
        // 0x14a75c: 0x2862ffc0  slti        $v0, $v1, -0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967232) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a758) {
            ctx->pc = 0x14A780u;
            return;
        }
    }
    ctx->pc = 0x14A760u;
    // 0x14a760: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14A760u;
    {
        const bool branch_taken_0x14a760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a760) {
            ctx->pc = 0x14A764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A760u;
            // 0x14a764: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A784u;
            return;
        }
    }
    ctx->pc = 0x14A768u;
    // 0x14a768: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x14a768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x14a76c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A76Cu;
    {
        const bool branch_taken_0x14a76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a76c) {
            ctx->pc = 0x14A770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A76Cu;
            // 0x14a770: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A784u;
            return;
        }
    }
    ctx->pc = 0x14A774u;
    // 0x14a774: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x14a774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14a778: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x14a778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x14a77c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x14a77cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14a780u;
}
