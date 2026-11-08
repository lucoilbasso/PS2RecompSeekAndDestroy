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

// Function: entry_00165b00
// Address: 0x165b00 - 0x165b10
void entry_00165b00_0x165b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165b00_0x165b00");
#endif

    ctx->pc = 0x165b00u;

    // 0x165b00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x165b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165b04: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x165B04u;
    {
        const bool branch_taken_0x165b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B04u;
        // 0x165b08: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b04) {
            ctx->pc = 0x165B2Cu;
            return;
        }
    }
    ctx->pc = 0x165B0Cu;
    // 0x165b0c: 0xac4300e0  sw          $v1, 0xE0($v0)
    ctx->pc = 0x165b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
    ctx->pc = 0x165b10u;
}
