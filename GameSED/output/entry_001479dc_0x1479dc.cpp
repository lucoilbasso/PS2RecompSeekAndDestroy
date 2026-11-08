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

// Function: entry_001479dc
// Address: 0x1479dc - 0x1479e8
void entry_001479dc_0x1479dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001479dc_0x1479dc");
#endif

    ctx->pc = 0x1479dcu;

    // 0x1479dc: 0xad69000c  sw          $t1, 0xC($t3)
    ctx->pc = 0x1479dcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 9));
    // 0x1479e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1479E0u;
    {
        const bool branch_taken_0x1479e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1479E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479E0u;
        // 0x1479e4: 0x34e70001  ori         $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479e0) {
            ctx->pc = 0x1479F0u;
            return;
        }
    }
    ctx->pc = 0x1479E8u;
}
