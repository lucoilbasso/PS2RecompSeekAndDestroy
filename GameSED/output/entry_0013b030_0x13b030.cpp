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

// Function: entry_0013b030
// Address: 0x13b030 - 0x13b040
void entry_0013b030_0x13b030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b030_0x13b030");
#endif

    ctx->pc = 0x13b030u;

    // 0x13b030: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13B030u;
    {
        const bool branch_taken_0x13b030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b030) {
            ctx->pc = 0x13B034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B030u;
            // 0x13b034: 0x8e220204  lw          $v0, 0x204($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B058u;
            return;
        }
    }
    ctx->pc = 0x13B038u;
    // 0x13b038: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13b038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b03c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x13b03cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x13b040u;
}
