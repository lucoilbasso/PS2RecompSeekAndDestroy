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

// Function: entry_0015ff30
// Address: 0x15ff30 - 0x15ff40
void entry_0015ff30_0x15ff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ff30_0x15ff30");
#endif

    ctx->pc = 0x15ff30u;

    // 0x15ff30: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15FF30u;
    {
        const bool branch_taken_0x15ff30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF30u;
        // 0x15ff34: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff30) {
            ctx->pc = 0x15FF60u;
            return;
        }
    }
    ctx->pc = 0x15FF38u;
    // 0x15ff38: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15FF38u;
    {
        const bool branch_taken_0x15ff38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF38u;
        // 0x15ff3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff38) {
            ctx->pc = 0x15FF88u;
            return;
        }
    }
    ctx->pc = 0x15FF40u;
}
