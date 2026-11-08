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

// Function: entry_0019bb0c
// Address: 0x19bb0c - 0x19bb30
void entry_0019bb0c_0x19bb0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bb0c_0x19bb0c");
#endif

    ctx->pc = 0x19bb0cu;

    // 0x19bb0c: 0x54680017  bnel        $v1, $t0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19BB0Cu;
    {
        const bool branch_taken_0x19bb0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x19bb0c) {
            ctx->pc = 0x19BB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BB0Cu;
            // 0x19bb10: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BB6Cu;
            return;
        }
    }
    ctx->pc = 0x19BB14u;
    // 0x19bb14: 0x50e40015  beql        $a3, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19BB14u;
    {
        const bool branch_taken_0x19bb14 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x19bb14) {
            ctx->pc = 0x19BB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BB14u;
            // 0x19bb18: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BB6Cu;
            return;
        }
    }
    ctx->pc = 0x19BB1Cu;
    // 0x19bb1c: 0x80c2ffff  lb          $v0, -0x1($a2)
    ctx->pc = 0x19bb1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x19bb20: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x19BB20u;
    {
        const bool branch_taken_0x19bb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19bb20) {
            ctx->pc = 0x19BB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BB20u;
            // 0x19bb24: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BB6Cu;
            return;
        }
    }
    ctx->pc = 0x19BB28u;
    // 0x19bb28: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19BB28u;
    {
        const bool branch_taken_0x19bb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB28u;
        // 0x19bb2c: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb28) {
            ctx->pc = 0x19BB78u;
            return;
        }
    }
    ctx->pc = 0x19BB30u;
}
