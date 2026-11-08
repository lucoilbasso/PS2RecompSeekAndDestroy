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

// Function: entry_0011e558
// Address: 0x11e558 - 0x11e58c
void entry_0011e558_0x11e558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e558_0x11e558");
#endif

    ctx->pc = 0x11e558u;

label_11e558:
    // 0x11e558: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e55c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11e560: 0x2c830045  sltiu       $v1, $a0, 0x45
    ctx->pc = 0x11e560u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e564: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11E564u;
    {
        const bool branch_taken_0x11e564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E564u;
        // 0x11e568: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e564) {
            ctx->pc = 0x11E590u;
            return;
        }
    }
    ctx->pc = 0x11E56Cu;
    // 0x11e56c: 0x10880008  beq         $a0, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E56Cu;
    {
        const bool branch_taken_0x11e56c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x11E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E56Cu;
        // 0x11e570: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e56c) {
            ctx->pc = 0x11E590u;
            return;
        }
    }
    ctx->pc = 0x11E574u;
    // 0x11e574: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e578: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e57c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11e57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e580: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x11e580u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e584: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11E584u;
    {
        const bool branch_taken_0x11e584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e584) {
            ctx->pc = 0x11E588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E584u;
            // 0x11e588: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e558;
        }
    }
    ctx->pc = 0x11E58Cu;
}
