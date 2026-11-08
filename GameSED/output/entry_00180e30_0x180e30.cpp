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

// Function: entry_00180e30
// Address: 0x180e30 - 0x180e4c
void entry_00180e30_0x180e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180e30_0x180e30");
#endif

    ctx->pc = 0x180e30u;

    // 0x180e30: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x180e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x180e34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x180E34u;
    {
        const bool branch_taken_0x180e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E34u;
        // 0x180e38: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e34) {
            ctx->pc = 0x180E4Cu;
            return;
        }
    }
    ctx->pc = 0x180E3Cu;
    // 0x180e3c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x180E3Cu;
    {
        const bool branch_taken_0x180e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x180E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E3Cu;
        // 0x180e40: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e3c) {
            ctx->pc = 0x180E4Cu;
            return;
        }
    }
    ctx->pc = 0x180E44u;
    // 0x180e44: 0x54400154  bnel        $v0, $zero, . + 4 + (0x154 << 2)
    ctx->pc = 0x180E44u;
    {
        const bool branch_taken_0x180e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180e44) {
            ctx->pc = 0x180E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180E44u;
            // 0x180e48: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181398u;
            return;
        }
    }
    ctx->pc = 0x180E4Cu;
}
