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

// Function: entry_001182ac
// Address: 0x1182ac - 0x1182c8
void entry_001182ac_0x1182ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001182ac_0x1182ac");
#endif

    ctx->pc = 0x1182acu;

    // 0x1182ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1182acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1182b0: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x1182b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1182b4: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1182B4u;
    {
        const bool branch_taken_0x1182b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1182B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182B4u;
        // 0x1182b8: 0x131840  sll         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182b4) {
            ctx->pc = 0x1181D8u;
            return;
        }
    }
    ctx->pc = 0x1182BCu;
    // 0x1182bc: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x1182bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x1182c0: 0x26420fe4  addiu       $v0, $s2, 0xFE4
    ctx->pc = 0x1182c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4068));
    // 0x1182c4: 0x0  nop
    ctx->pc = 0x1182c4u;
    // NOP
    ctx->pc = 0x1182c8u;
}
