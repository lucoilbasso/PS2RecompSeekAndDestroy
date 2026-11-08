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

// Function: entry_001bf658
// Address: 0x1bf658 - 0x1bf68c
void entry_001bf658_0x1bf658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf658_0x1bf658");
#endif

    ctx->pc = 0x1bf658u;

    // 0x1bf658: 0x1ae1004  sllv        $v0, $t6, $t5
    ctx->pc = 0x1bf658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf65c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1bf65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1bf660: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x1bf660u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1bf664: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF664u;
    {
        const bool branch_taken_0x1bf664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf664) {
            ctx->pc = 0x1BF668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF664u;
            // 0x1bf668: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF68Cu;
            return;
        }
    }
    ctx->pc = 0x1BF66Cu;
    // 0x1bf66c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1bf66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf670: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x1bf670u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf674: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x1bf674u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf678: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1bf678u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf67c: 0x1c22023  subu        $a0, $t6, $v0
    ctx->pc = 0x1bf67cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1bf680: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x1bf680u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x1bf684: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF684u;
    {
        const bool branch_taken_0x1bf684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF684u;
        // 0x1bf688: 0xad84000c  sw          $a0, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf684) {
            ctx->pc = 0x1BF690u;
            return;
        }
    }
    ctx->pc = 0x1BF68Cu;
}
