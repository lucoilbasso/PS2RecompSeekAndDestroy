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

// Function: entry_001ccd04
// Address: 0x1ccd04 - 0x1ccd1c
void entry_001ccd04_0x1ccd04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccd04_0x1ccd04");
#endif

    ctx->pc = 0x1ccd04u;

    // 0x1ccd04: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CCD04u;
    {
        const bool branch_taken_0x1ccd04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd04) {
            ctx->pc = 0x1CCD1Cu;
            return;
        }
    }
    ctx->pc = 0x1CCD0Cu;
    // 0x1ccd0c: 0x5470fffc  bnel        $v1, $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1CCD0Cu;
    {
        const bool branch_taken_0x1ccd0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x1ccd0c) {
            ctx->pc = 0x1CCD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCD0Cu;
            // 0x1ccd10: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCD00u;
            return;
        }
    }
    ctx->pc = 0x1CCD14u;
    // 0x1ccd14: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCD14u;
    {
        const bool branch_taken_0x1ccd14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd14) {
            ctx->pc = 0x1CCD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCD14u;
            // 0x1ccd18: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCD28u;
            return;
        }
    }
    ctx->pc = 0x1CCD1Cu;
}
