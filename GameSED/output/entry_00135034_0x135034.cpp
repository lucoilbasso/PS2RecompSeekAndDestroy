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

// Function: entry_00135034
// Address: 0x135034 - 0x135050
void entry_00135034_0x135034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135034_0x135034");
#endif

    ctx->pc = 0x135034u;

    // 0x135034: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x135034u;
    {
        const bool branch_taken_0x135034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x135038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135034u;
        // 0x135038: 0x26020370  addiu       $v0, $s0, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135034) {
            ctx->pc = 0x135050u;
            return;
        }
    }
    ctx->pc = 0x13503Cu;
    // 0x13503c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13503cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135040: 0xac52001c  sw          $s2, 0x1C($v0)
    ctx->pc = 0x135040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 18));
    // 0x135044: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x135044u;
    {
        const bool branch_taken_0x135044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135044u;
        // 0x135048: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135044) {
            ctx->pc = 0x1351FCu;
            return;
        }
    }
    ctx->pc = 0x13504Cu;
    // 0x13504c: 0x0  nop
    ctx->pc = 0x13504cu;
    // NOP
    ctx->pc = 0x135050u;
}
