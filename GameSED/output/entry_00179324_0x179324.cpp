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

// Function: entry_00179324
// Address: 0x179324 - 0x179330
void entry_00179324_0x179324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179324_0x179324");
#endif

    ctx->pc = 0x179324u;

    // 0x179324: 0xae424040  sw          $v0, 0x4040($s2)
    ctx->pc = 0x179324u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16448), GPR_U32(ctx, 2));
    // 0x179328: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x179328u;
    {
        const bool branch_taken_0x179328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179328u;
        // 0x17932c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179328) {
            ctx->pc = 0x179348u;
            return;
        }
    }
    ctx->pc = 0x179330u;
}
