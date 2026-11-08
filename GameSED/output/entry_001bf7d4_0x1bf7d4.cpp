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

// Function: entry_001bf7d4
// Address: 0x1bf7d4 - 0x1bf808
void entry_001bf7d4_0x1bf7d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf7d4_0x1bf7d4");
#endif

    ctx->pc = 0x1bf7d4u;

    // 0x1bf7d4: 0x1a91004  sllv        $v0, $t1, $t5
    ctx->pc = 0x1bf7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf7d8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1bf7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1bf7dc: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x1bf7dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1bf7e0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF7E0u;
    {
        const bool branch_taken_0x1bf7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf7e0) {
            ctx->pc = 0x1BF7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF7E0u;
            // 0x1bf7e4: 0xade90008  sw          $t1, 0x8($t7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF808u;
            return;
        }
    }
    ctx->pc = 0x1BF7E8u;
    // 0x1bf7e8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1bf7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf7ec: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x1bf7ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf7f0: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x1bf7f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf7f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1bf7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf7f8: 0x1222023  subu        $a0, $t1, $v0
    ctx->pc = 0x1bf7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1bf7fc: 0xade20008  sw          $v0, 0x8($t7)
    ctx->pc = 0x1bf7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 2));
    // 0x1bf800: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF800u;
    {
        const bool branch_taken_0x1bf800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF800u;
        // 0x1bf804: 0xade4000c  sw          $a0, 0xC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf800) {
            ctx->pc = 0x1BF80Cu;
            return;
        }
    }
    ctx->pc = 0x1BF808u;
}
