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

// Function: entry_0018da20
// Address: 0x18da20 - 0x18da40
void entry_0018da20_0x18da20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018da20_0x18da20");
#endif

    ctx->pc = 0x18da20u;

    // 0x18da20: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x18da20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x18da24: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DA24u;
    {
        const bool branch_taken_0x18da24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da24) {
            ctx->pc = 0x18DA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DA24u;
            // 0x18da28: 0x2462ffbf  addiu       $v0, $v1, -0x41 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DA40u;
            return;
        }
    }
    ctx->pc = 0x18DA2Cu;
    // 0x18da2c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x18da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x18da30: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18da30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18da34: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x18da34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x18da38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18DA38u;
    {
        const bool branch_taken_0x18da38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA38u;
        // 0x18da3c: 0x2442ffa9  addiu       $v0, $v0, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da38) {
            ctx->pc = 0x18DA5Cu;
            return;
        }
    }
    ctx->pc = 0x18DA40u;
}
