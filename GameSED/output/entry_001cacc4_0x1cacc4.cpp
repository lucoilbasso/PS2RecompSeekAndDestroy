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

// Function: entry_001cacc4
// Address: 0x1cacc4 - 0x1cace0
void entry_001cacc4_0x1cacc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cacc4_0x1cacc4");
#endif

    ctx->pc = 0x1cacc4u;

    // 0x1cacc4: 0x2dc20002  sltiu       $v0, $t6, 0x2
    ctx->pc = 0x1cacc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cacc8: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1CACC8u;
    {
        const bool branch_taken_0x1cacc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CACC8u;
        // 0x1caccc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cacc8) {
            ctx->pc = 0x1CADC8u;
            return;
        }
    }
    ctx->pc = 0x1CACD0u;
    // 0x1cacd0: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x1cacd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1cacd4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cacd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cacd8: 0x4c7021  addu        $t6, $v0, $t4
    ctx->pc = 0x1cacd8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1cacdc: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x1cacdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    ctx->pc = 0x1cace0u;
}
