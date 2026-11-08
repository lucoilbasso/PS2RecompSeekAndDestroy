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

// Function: entry_00168750
// Address: 0x168750 - 0x168774
void entry_00168750_0x168750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168750_0x168750");
#endif

    ctx->pc = 0x168750u;

    // 0x168750: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x168750u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x168754: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x168754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168758: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x168758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16875c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16875cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x168760: 0x3c3182a  slt         $v1, $fp, $v1
    ctx->pc = 0x168760u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x168764: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x168764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x168768: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x168768u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x16876c: 0x1460ff88  bnez        $v1, . + 4 + (-0x78 << 2)
    ctx->pc = 0x16876Cu;
    {
        const bool branch_taken_0x16876c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16876Cu;
        // 0x168770: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16876c) {
            ctx->pc = 0x168590u;
            return;
        }
    }
    ctx->pc = 0x168774u;
}
