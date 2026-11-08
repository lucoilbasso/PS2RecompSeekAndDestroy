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

// Function: entry_001617d8
// Address: 0x1617d8 - 0x1617e0
void entry_001617d8_0x1617d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001617d8_0x1617d8");
#endif

    ctx->pc = 0x1617d8u;

    // 0x1617d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1617D8u;
    {
        const bool branch_taken_0x1617d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1617DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617D8u;
        // 0x1617dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1617d8) {
            ctx->pc = 0x1617F8u;
            return;
        }
    }
    ctx->pc = 0x1617E0u;
}
