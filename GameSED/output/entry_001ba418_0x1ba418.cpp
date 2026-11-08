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

// Function: entry_001ba418
// Address: 0x1ba418 - 0x1ba43c
void entry_001ba418_0x1ba418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba418_0x1ba418");
#endif

    ctx->pc = 0x1ba418u;

label_1ba418:
    // 0x1ba418: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x1ba418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1ba41c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA41Cu;
    {
        const bool branch_taken_0x1ba41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA41Cu;
        // 0x1ba420: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba41c) {
            ctx->pc = 0x1BA43Cu;
            return;
        }
    }
    ctx->pc = 0x1BA424u;
    // 0x1ba424: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x1ba424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ba428: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ba428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ba42c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ba42cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ba430: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1ba430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1ba434: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BA434u;
    {
        const bool branch_taken_0x1ba434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba434) {
            ctx->pc = 0x1BA438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA434u;
            // 0x1ba438: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba418;
        }
    }
    ctx->pc = 0x1BA43Cu;
}
