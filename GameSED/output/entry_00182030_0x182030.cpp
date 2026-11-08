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

// Function: entry_00182030
// Address: 0x182030 - 0x182050
void entry_00182030_0x182030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182030_0x182030");
#endif

    ctx->pc = 0x182030u;

    // 0x182030: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x182030u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x182034: 0x25290030  addiu       $t1, $t1, 0x30
    ctx->pc = 0x182034u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x182038: 0x302102a  slt         $v0, $t8, $v0
    ctx->pc = 0x182038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18203c: 0x1440ff08  bnez        $v0, . + 4 + (-0xF8 << 2)
    ctx->pc = 0x18203Cu;
    {
        const bool branch_taken_0x18203c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18203Cu;
        // 0x182040: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18203c) {
            ctx->pc = 0x181C60u;
            return;
        }
    }
    ctx->pc = 0x182044u;
    // 0x182044: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x182044u;
    {
        const bool branch_taken_0x182044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182044u;
        // 0x182048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182044) {
            ctx->pc = 0x18211Cu;
            return;
        }
    }
    ctx->pc = 0x18204Cu;
    // 0x18204c: 0x0  nop
    ctx->pc = 0x18204cu;
    // NOP
    ctx->pc = 0x182050u;
}
