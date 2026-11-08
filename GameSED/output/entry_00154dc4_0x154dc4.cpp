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

// Function: entry_00154dc4
// Address: 0x154dc4 - 0x154dd0
void entry_00154dc4_0x154dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154dc4_0x154dc4");
#endif

    ctx->pc = 0x154dc4u;

    // 0x154dc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x154dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x154dc8: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x154DC8u;
    {
        const bool branch_taken_0x154dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DC8u;
        // 0x154dcc: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154dc8) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x154DD0u;
}
