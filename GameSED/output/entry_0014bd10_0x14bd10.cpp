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

// Function: entry_0014bd10
// Address: 0x14bd10 - 0x14bd20
void entry_0014bd10_0x14bd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bd10_0x14bd10");
#endif

    ctx->pc = 0x14bd10u;

    // 0x14bd10: 0x56220003  bnel        $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BD10u;
    {
        const bool branch_taken_0x14bd10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x14bd10) {
            ctx->pc = 0x14BD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BD10u;
            // 0x14bd14: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BD20u;
            return;
        }
    }
    ctx->pc = 0x14BD18u;
    // 0x14bd18: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x14BD18u;
    {
        const bool branch_taken_0x14bd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD18u;
        // 0x14bd1c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd18) {
            ctx->pc = 0x14BE6Cu;
            return;
        }
    }
    ctx->pc = 0x14BD20u;
}
