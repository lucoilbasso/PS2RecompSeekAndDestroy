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

// Function: entry_00155300
// Address: 0x155300 - 0x155318
void entry_00155300_0x155300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155300_0x155300");
#endif

    ctx->pc = 0x155300u;

    // 0x155300: 0x314c3  sra         $v0, $v1, 19
    ctx->pc = 0x155300u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 19));
    // 0x155304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x155304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x155308: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155308u;
    {
        const bool branch_taken_0x155308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155308u;
        // 0x15530c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155308) {
            ctx->pc = 0x155318u;
            return;
        }
    }
    ctx->pc = 0x155310u;
    // 0x155310: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x155310u;
    {
        const bool branch_taken_0x155310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155310u;
        // 0x155314: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155310) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x155318u;
}
