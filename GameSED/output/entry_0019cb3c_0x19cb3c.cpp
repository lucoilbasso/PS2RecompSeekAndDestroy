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

// Function: entry_0019cb3c
// Address: 0x19cb3c - 0x19cb58
void entry_0019cb3c_0x19cb3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cb3c_0x19cb3c");
#endif

    ctx->pc = 0x19cb3cu;

    // 0x19cb3c: 0x50c90006  beql        $a2, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19CB3Cu;
    {
        const bool branch_taken_0x19cb3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x19cb3c) {
            ctx->pc = 0x19CB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CB3Cu;
            // 0x19cb40: 0xa0680000  sb          $t0, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CB58u;
            return;
        }
    }
    ctx->pc = 0x19CB44u;
    // 0x19cb44: 0x50cc0004  beql        $a2, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x19CB44u;
    {
        const bool branch_taken_0x19cb44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 12));
        if (branch_taken_0x19cb44) {
            ctx->pc = 0x19CB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CB44u;
            // 0x19cb48: 0xa0680000  sb          $t0, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CB58u;
            return;
        }
    }
    ctx->pc = 0x19CB4Cu;
    // 0x19cb4c: 0x54cb0004  bnel        $a2, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19CB4Cu;
    {
        const bool branch_taken_0x19cb4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 11));
        if (branch_taken_0x19cb4c) {
            ctx->pc = 0x19CB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CB4Cu;
            // 0x19cb50: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CB60u;
            return;
        }
    }
    ctx->pc = 0x19CB54u;
    // 0x19cb54: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x19cb54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
    ctx->pc = 0x19cb58u;
}
