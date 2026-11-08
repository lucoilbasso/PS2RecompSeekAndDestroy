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

// Function: entry_0018df04
// Address: 0x18df04 - 0x18df20
void entry_0018df04_0x18df04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018df04_0x18df04");
#endif

    ctx->pc = 0x18df04u;

    // 0x18df04: 0x8c83021c  lw          $v1, 0x21C($a0)
    ctx->pc = 0x18df04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 540)));
    // 0x18df08: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x18DF08u;
    {
        const bool branch_taken_0x18df08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF08u;
        // 0x18df0c: 0x2482023c  addiu       $v0, $a0, 0x23C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 572));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df08) {
            ctx->pc = 0x18DF40u;
            return;
        }
    }
    ctx->pc = 0x18DF10u;
    // 0x18df10: 0x8c820210  lw          $v0, 0x210($a0)
    ctx->pc = 0x18df10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x18df14: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18DF14u;
    {
        const bool branch_taken_0x18df14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18df14) {
            ctx->pc = 0x18DF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DF14u;
            // 0x18df18: 0x2482023c  addiu       $v0, $a0, 0x23C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 572));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DF40u;
            return;
        }
    }
    ctx->pc = 0x18DF1Cu;
    // 0x18df1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x18df1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x18df20u;
}
