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

// Function: entry_00181d0c
// Address: 0x181d0c - 0x181d24
void entry_00181d0c_0x181d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181d0c_0x181d0c");
#endif

    ctx->pc = 0x181d0cu;

    // 0x181d0c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x181D0Cu;
    {
        const bool branch_taken_0x181d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x181D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D0Cu;
        // 0x181d10: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d0c) {
            ctx->pc = 0x181D24u;
            return;
        }
    }
    ctx->pc = 0x181D14u;
    // 0x181d14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181D14u;
    {
        const bool branch_taken_0x181d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D14u;
        // 0x181d18: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d14) {
            ctx->pc = 0x181D24u;
            return;
        }
    }
    ctx->pc = 0x181D1Cu;
    // 0x181d1c: 0x544000c4  bnel        $v0, $zero, . + 4 + (0xC4 << 2)
    ctx->pc = 0x181D1Cu;
    {
        const bool branch_taken_0x181d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181d1c) {
            ctx->pc = 0x181D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181D1Cu;
            // 0x181d20: 0x95c20002  lhu         $v0, 0x2($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182030u;
            return;
        }
    }
    ctx->pc = 0x181D24u;
}
