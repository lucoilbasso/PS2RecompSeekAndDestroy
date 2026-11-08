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

// Function: entry_0018d9fc
// Address: 0x18d9fc - 0x18da20
void entry_0018d9fc_0x18d9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d9fc_0x18d9fc");
#endif

    ctx->pc = 0x18d9fcu;

    // 0x18d9fc: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x18d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x18da00: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x18da00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x18da04: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DA04u;
    {
        const bool branch_taken_0x18da04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da04) {
            ctx->pc = 0x18DA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DA04u;
            // 0x18da08: 0x2462ff9f  addiu       $v0, $v1, -0x61 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DA20u;
            return;
        }
    }
    ctx->pc = 0x18DA0Cu;
    // 0x18da0c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x18da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x18da10: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18da10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18da14: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x18da14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x18da18: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18DA18u;
    {
        const bool branch_taken_0x18da18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA18u;
        // 0x18da1c: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da18) {
            ctx->pc = 0x18DA5Cu;
            return;
        }
    }
    ctx->pc = 0x18DA20u;
}
