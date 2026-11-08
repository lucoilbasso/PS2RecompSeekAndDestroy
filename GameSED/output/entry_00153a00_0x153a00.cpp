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

// Function: entry_00153a00
// Address: 0x153a00 - 0x153a10
void entry_00153a00_0x153a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153a00_0x153a00");
#endif

    ctx->pc = 0x153a00u;

    // 0x153a00: 0x8e22068c  lw          $v0, 0x68C($s1)
    ctx->pc = 0x153a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
    // 0x153a04: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x153A04u;
    {
        const bool branch_taken_0x153a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A04u;
        // 0x153a08: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153a04) {
            ctx->pc = 0x153A10u;
            return;
        }
    }
    ctx->pc = 0x153A0Cu;
    // 0x153a0c: 0xae22068c  sw          $v0, 0x68C($s1)
    ctx->pc = 0x153a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1676), GPR_U32(ctx, 2));
    ctx->pc = 0x153a10u;
}
