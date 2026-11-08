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

// Function: entry_00163358
// Address: 0x163358 - 0x163370
void entry_00163358_0x163358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163358_0x163358");
#endif

    ctx->pc = 0x163358u;

    // 0x163358: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163358u;
    {
        const bool branch_taken_0x163358 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x163358) {
            ctx->pc = 0x16335Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163358u;
            // 0x16335c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163370u;
            return;
        }
    }
    ctx->pc = 0x163360u;
    // 0x163360: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x163360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x163364: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x163364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x163368: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x163368u;
    {
        const bool branch_taken_0x163368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163368u;
        // 0x16336c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163368) {
            ctx->pc = 0x163394u;
            return;
        }
    }
    ctx->pc = 0x163370u;
}
