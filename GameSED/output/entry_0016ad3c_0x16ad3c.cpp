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

// Function: entry_0016ad3c
// Address: 0x16ad3c - 0x16ad64
void entry_0016ad3c_0x16ad3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ad3c_0x16ad3c");
#endif

    ctx->pc = 0x16ad3cu;

    // 0x16ad3c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x16ad3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x16ad40: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x16ad40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16ad44: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x16ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x16ad48: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x16ad48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x16ad4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16ad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ad50: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AD50u;
    {
        const bool branch_taken_0x16ad50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD50u;
        // 0x16ad54: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad50) {
            ctx->pc = 0x16AD64u;
            return;
        }
    }
    ctx->pc = 0x16AD58u;
    // 0x16ad58: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x16ad58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16ad5c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x16AD5Cu;
    {
        const bool branch_taken_0x16ad5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD5Cu;
        // 0x16ad60: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad5c) {
            ctx->pc = 0x16AD10u;
            return;
        }
    }
    ctx->pc = 0x16AD64u;
}
