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

// Function: entry_001b5500
// Address: 0x1b5500 - 0x1b552c
void entry_001b5500_0x1b5500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5500_0x1b5500");
#endif

    ctx->pc = 0x1b5500u;

label_1b5500:
    // 0x1b5500: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1b5500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b5504: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B5504u;
    {
        const bool branch_taken_0x1b5504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5504u;
        // 0x1b5508: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5504) {
            ctx->pc = 0x1B553Cu;
            return;
        }
    }
    ctx->pc = 0x1B550Cu;
    // 0x1b550c: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1b550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1b5510: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b5510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5514: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x1b5514u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b5518: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b5518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b551c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B551Cu;
    {
        const bool branch_taken_0x1b551c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b551c) {
            ctx->pc = 0x1B5520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B551Cu;
            // 0x1b5520: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5500;
        }
    }
    ctx->pc = 0x1B5524u;
    // 0x1b5524: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5524u;
    {
        const bool branch_taken_0x1b5524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5524u;
        // 0x1b5528: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5524) {
            ctx->pc = 0x1B5540u;
            return;
        }
    }
    ctx->pc = 0x1B552Cu;
}
