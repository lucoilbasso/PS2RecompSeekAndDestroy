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

// Function: entry_00179330
// Address: 0x179330 - 0x179340
void entry_00179330_0x179330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179330_0x179330");
#endif

    ctx->pc = 0x179330u;

    // 0x179330: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x179330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x179334: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x179334u;
    {
        const bool branch_taken_0x179334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179334u;
        // 0x179338: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179334) {
            ctx->pc = 0x179348u;
            return;
        }
    }
    ctx->pc = 0x17933Cu;
    // 0x17933c: 0x0  nop
    ctx->pc = 0x17933cu;
    // NOP
    ctx->pc = 0x179340u;
}
