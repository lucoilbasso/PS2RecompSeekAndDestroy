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

// Function: entry_001e1724
// Address: 0x1e1724 - 0x1e1738
void entry_001e1724_0x1e1724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1724_0x1e1724");
#endif

    ctx->pc = 0x1e1724u;

    // 0x1e1724: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1e1724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1728: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1e1728u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e172c: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1E172Cu;
    {
        const bool branch_taken_0x1e172c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e172c) {
            ctx->pc = 0x1E1730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E172Cu;
            // 0x1e1730: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1768u;
            return;
        }
    }
    ctx->pc = 0x1E1734u;
    // 0x1e1734: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e1738u;
}
