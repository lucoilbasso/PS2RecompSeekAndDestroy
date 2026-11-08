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

// Function: entry_00100668
// Address: 0x100668 - 0x100680
void entry_00100668_0x100668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100668_0x100668");
#endif

    ctx->pc = 0x100668u;

    // 0x100668: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x100668u;
    {
        const bool branch_taken_0x100668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100668) {
            ctx->pc = 0x10066Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100668u;
            // 0x10066c: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1006D8u;
            return;
        }
    }
    ctx->pc = 0x100670u;
    // 0x100670: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x100670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x100674: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x100674u;
    {
        const bool branch_taken_0x100674 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x100678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100674u;
        // 0x100678: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100674) {
            ctx->pc = 0x1006C8u;
            return;
        }
    }
    ctx->pc = 0x10067Cu;
    // 0x10067c: 0x0  nop
    ctx->pc = 0x10067cu;
    // NOP
    ctx->pc = 0x100680u;
}
