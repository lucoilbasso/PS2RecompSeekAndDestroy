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

// Function: entry_00150c00
// Address: 0x150c00 - 0x150c20
void entry_00150c00_0x150c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150c00_0x150c00");
#endif

    ctx->pc = 0x150c00u;

    // 0x150c00: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x150C00u;
    {
        const bool branch_taken_0x150c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x150c00) {
            ctx->pc = 0x150C28u;
            return;
        }
    }
    ctx->pc = 0x150C08u;
    // 0x150c08: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x150c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x150c0c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x150C0Cu;
    {
        const bool branch_taken_0x150c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150c0c) {
            ctx->pc = 0x150C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150C0Cu;
            // 0x150c10: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150C20u;
            return;
        }
    }
    ctx->pc = 0x150C14u;
    // 0x150c14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x150C14u;
    {
        const bool branch_taken_0x150c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C14u;
        // 0x150c18: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c14) {
            ctx->pc = 0x150C28u;
            return;
        }
    }
    ctx->pc = 0x150C1Cu;
    // 0x150c1c: 0x0  nop
    ctx->pc = 0x150c1cu;
    // NOP
    ctx->pc = 0x150c20u;
}
