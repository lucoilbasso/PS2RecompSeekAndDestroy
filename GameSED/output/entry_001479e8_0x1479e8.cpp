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

// Function: entry_001479e8
// Address: 0x1479e8 - 0x1479f0
void entry_001479e8_0x1479e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001479e8_0x1479e8");
#endif

    ctx->pc = 0x1479e8u;

    // 0x1479e8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1479E8u;
    {
        const bool branch_taken_0x1479e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1479e8) {
            ctx->pc = 0x1479ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1479E8u;
            // 0x1479ec: 0xad69000c  sw          $t1, 0xC($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1479F0u;
            return;
        }
    }
    ctx->pc = 0x1479F0u;
}
