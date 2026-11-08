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

// Function: entry_001b4a78
// Address: 0x1b4a78 - 0x1b4aa4
void entry_001b4a78_0x1b4a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4a78_0x1b4a78");
#endif

    ctx->pc = 0x1b4a78u;

label_1b4a78:
    // 0x1b4a78: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1b4a78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b4a7c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B4A7Cu;
    {
        const bool branch_taken_0x1b4a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A7Cu;
        // 0x1b4a80: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a7c) {
            ctx->pc = 0x1B4AB0u;
            return;
        }
    }
    ctx->pc = 0x1B4A84u;
    // 0x1b4a84: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x1b4a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1b4a88: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b4a88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4a8c: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x1b4a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b4a90: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b4a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b4a94: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B4A94u;
    {
        const bool branch_taken_0x1b4a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a94) {
            ctx->pc = 0x1B4A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4A94u;
            // 0x1b4a98: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4a78;
        }
    }
    ctx->pc = 0x1B4A9Cu;
    // 0x1b4a9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4A9Cu;
    {
        const bool branch_taken_0x1b4a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A9Cu;
        // 0x1b4aa0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a9c) {
            ctx->pc = 0x1B4AB4u;
            return;
        }
    }
    ctx->pc = 0x1B4AA4u;
}
