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

// Function: entry_0019bb4c
// Address: 0x19bb4c - 0x19bb6c
void entry_0019bb4c_0x19bb4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bb4c_0x19bb4c");
#endif

    ctx->pc = 0x19bb4cu;

    // 0x19bb4c: 0x54690007  bnel        $v1, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BB4Cu;
    {
        const bool branch_taken_0x19bb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x19bb4c) {
            ctx->pc = 0x19BB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BB4Cu;
            // 0x19bb50: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BB6Cu;
            return;
        }
    }
    ctx->pc = 0x19BB54u;
    // 0x19bb54: 0x50e40005  beql        $a3, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19BB54u;
    {
        const bool branch_taken_0x19bb54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x19bb54) {
            ctx->pc = 0x19BB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BB54u;
            // 0x19bb58: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BB6Cu;
            return;
        }
    }
    ctx->pc = 0x19BB5Cu;
    // 0x19bb5c: 0x80c2ffff  lb          $v0, -0x1($a2)
    ctx->pc = 0x19bb5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x19bb60: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19BB60u;
    {
        const bool branch_taken_0x19bb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19bb60) {
            ctx->pc = 0x19BB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BB60u;
            // 0x19bb64: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BB78u;
            return;
        }
    }
    ctx->pc = 0x19BB68u;
    // 0x19bb68: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x19bb68u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x19bb6cu;
}
