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

// Function: entry_001c5a08
// Address: 0x1c5a08 - 0x1c5a1c
void entry_001c5a08_0x1c5a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5a08_0x1c5a08");
#endif

    ctx->pc = 0x1c5a08u;

    // 0x1c5a08: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5A08u;
    {
        const bool branch_taken_0x1c5a08 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A08u;
        // 0x1c5a0c: 0x2623eec0  addiu       $v1, $s1, -0x1140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a08) {
            ctx->pc = 0x1C5A1Cu;
            return;
        }
    }
    ctx->pc = 0x1C5A10u;
    // 0x1c5a10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5a14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5A14u;
    {
        const bool branch_taken_0x1c5a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A14u;
        // 0x1c5a18: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a14) {
            ctx->pc = 0x1C5A24u;
            return;
        }
    }
    ctx->pc = 0x1C5A1Cu;
}
