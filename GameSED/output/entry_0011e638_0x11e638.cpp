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

// Function: entry_0011e638
// Address: 0x11e638 - 0x11e66c
void entry_0011e638_0x11e638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e638_0x11e638");
#endif

    ctx->pc = 0x11e638u;

label_11e638:
    // 0x11e638: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11e638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e63c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11e640: 0x2c830045  sltiu       $v1, $a0, 0x45
    ctx->pc = 0x11e640u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e644: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11E644u;
    {
        const bool branch_taken_0x11e644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E644u;
        // 0x11e648: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e644) {
            ctx->pc = 0x11E670u;
            return;
        }
    }
    ctx->pc = 0x11E64Cu;
    // 0x11e64c: 0x10870008  beq         $a0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E64Cu;
    {
        const bool branch_taken_0x11e64c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x11E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E64Cu;
        // 0x11e650: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e64c) {
            ctx->pc = 0x11E670u;
            return;
        }
    }
    ctx->pc = 0x11E654u;
    // 0x11e654: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e658: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e65c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11e65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e660: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x11e660u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e664: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11E664u;
    {
        const bool branch_taken_0x11e664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e664) {
            ctx->pc = 0x11E668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E664u;
            // 0x11e668: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e638;
        }
    }
    ctx->pc = 0x11E66Cu;
}
