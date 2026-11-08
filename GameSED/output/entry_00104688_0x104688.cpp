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

// Function: entry_00104688
// Address: 0x104688 - 0x104690
void entry_00104688_0x104688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104688_0x104688");
#endif

    ctx->pc = 0x104688u;

    // 0x104688: 0x1620ffeb  bnez        $s1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x104688u;
    {
        const bool branch_taken_0x104688 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x10468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104688u;
        // 0x10468c: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104688) {
            ctx->pc = 0x104638u;
            return;
        }
    }
    ctx->pc = 0x104690u;
}
