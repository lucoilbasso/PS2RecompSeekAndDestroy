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

// Function: entry_00163468
// Address: 0x163468 - 0x163488
void entry_00163468_0x163468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163468_0x163468");
#endif

    ctx->pc = 0x163468u;

    // 0x163468: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x163468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x16346c: 0x8c430c00  lw          $v1, 0xC00($v0)
    ctx->pc = 0x16346cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3072)));
    // 0x163470: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x163470u;
    {
        const bool branch_taken_0x163470 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x163474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163470u;
        // 0x163474: 0x32180  sll         $a0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163470) {
            ctx->pc = 0x163488u;
            return;
        }
    }
    ctx->pc = 0x163478u;
    // 0x163478: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x163478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x16347c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16347Cu;
    {
        const bool branch_taken_0x16347c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16347Cu;
        // 0x163480: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16347c) {
            ctx->pc = 0x16348Cu;
            return;
        }
    }
    ctx->pc = 0x163484u;
    // 0x163484: 0x0  nop
    ctx->pc = 0x163484u;
    // NOP
    ctx->pc = 0x163488u;
}
