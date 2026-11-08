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

// Function: entry_001b39c0
// Address: 0x1b39c0 - 0x1b39ec
void entry_001b39c0_0x1b39c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b39c0_0x1b39c0");
#endif

    ctx->pc = 0x1b39c0u;

label_1b39c0:
    // 0x1b39c0: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1b39c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b39c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B39C4u;
    {
        const bool branch_taken_0x1b39c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B39C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39C4u;
        // 0x1b39c8: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b39c4) {
            ctx->pc = 0x1B39F8u;
            return;
        }
    }
    ctx->pc = 0x1B39CCu;
    // 0x1b39cc: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x1b39ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1b39d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b39d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b39d4: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1b39d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b39d8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b39d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b39dc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B39DCu;
    {
        const bool branch_taken_0x1b39dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b39dc) {
            ctx->pc = 0x1B39E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B39DCu;
            // 0x1b39e0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B39C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b39c0;
        }
    }
    ctx->pc = 0x1B39E4u;
    // 0x1b39e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B39E4u;
    {
        const bool branch_taken_0x1b39e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39E4u;
        // 0x1b39e8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b39e4) {
            ctx->pc = 0x1B39FCu;
            return;
        }
    }
    ctx->pc = 0x1B39ECu;
}
