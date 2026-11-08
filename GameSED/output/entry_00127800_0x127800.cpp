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

// Function: entry_00127800
// Address: 0x127800 - 0x127824
void entry_00127800_0x127800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127800_0x127800");
#endif

    ctx->pc = 0x127800u;

    // 0x127800: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127800u;
    {
        const bool branch_taken_0x127800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x127804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127800u;
        // 0x127804: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127800) {
            ctx->pc = 0x127824u;
            return;
        }
    }
    ctx->pc = 0x127808u;
    // 0x127808: 0x8c830114  lw          $v1, 0x114($a0)
    ctx->pc = 0x127808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x12780c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12780Cu;
    {
        const bool branch_taken_0x12780c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x127810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12780Cu;
        // 0x127810: 0x8f8289d8  lw          $v0, -0x7628($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12780c) {
            ctx->pc = 0x127828u;
            return;
        }
    }
    ctx->pc = 0x127814u;
    // 0x127814: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x127814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x127818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12781c: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x12781Cu;
    {
        const bool branch_taken_0x12781c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x127820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12781Cu;
        // 0x127820: 0xdfb000f0  ld          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12781c) {
            ctx->pc = 0x1279B4u;
            return;
        }
    }
    ctx->pc = 0x127824u;
}
