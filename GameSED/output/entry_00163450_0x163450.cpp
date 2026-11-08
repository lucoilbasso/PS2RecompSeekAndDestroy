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

// Function: entry_00163450
// Address: 0x163450 - 0x163468
void entry_00163450_0x163450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163450_0x163450");
#endif

    ctx->pc = 0x163450u;

    // 0x163450: 0x4830005  bgezl       $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163450u;
    {
        const bool branch_taken_0x163450 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x163450) {
            ctx->pc = 0x163454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163450u;
            // 0x163454: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163468u;
            return;
        }
    }
    ctx->pc = 0x163458u;
    // 0x163458: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x163458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x16345c: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x16345cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x163460: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x163460u;
    {
        const bool branch_taken_0x163460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163460u;
        // 0x163464: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163460) {
            ctx->pc = 0x16348Cu;
            return;
        }
    }
    ctx->pc = 0x163468u;
}
