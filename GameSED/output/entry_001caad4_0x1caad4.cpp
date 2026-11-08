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

// Function: entry_001caad4
// Address: 0x1caad4 - 0x1caaf0
void entry_001caad4_0x1caad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caad4_0x1caad4");
#endif

    ctx->pc = 0x1caad4u;

    // 0x1caad4: 0x2da20002  sltiu       $v0, $t5, 0x2
    ctx->pc = 0x1caad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1caad8: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1CAAD8u;
    {
        const bool branch_taken_0x1caad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAAD8u;
        // 0x1caadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caad8) {
            ctx->pc = 0x1CABD8u;
            return;
        }
    }
    ctx->pc = 0x1CAAE0u;
    // 0x1caae0: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x1caae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1caae4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1caae4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caae8: 0x4c7021  addu        $t6, $v0, $t4
    ctx->pc = 0x1caae8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1caaec: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x1caaecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    ctx->pc = 0x1caaf0u;
}
