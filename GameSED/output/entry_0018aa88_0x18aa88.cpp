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

// Function: entry_0018aa88
// Address: 0x18aa88 - 0x18aaa0
void entry_0018aa88_0x18aa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018aa88_0x18aa88");
#endif

    ctx->pc = 0x18aa88u;

    // 0x18aa88: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x18AA88u;
    {
        const bool branch_taken_0x18aa88 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA88u;
        // 0x18aa8c: 0x2623002c  addiu       $v1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa88) {
            ctx->pc = 0x18AAA0u;
            return;
        }
    }
    ctx->pc = 0x18AA90u;
    // 0x18aa90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18aa94: 0xae020130  sw          $v0, 0x130($s0)
    ctx->pc = 0x18aa94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
    // 0x18aa98: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x18AA98u;
    {
        const bool branch_taken_0x18aa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA98u;
        // 0x18aa9c: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa98) {
            ctx->pc = 0x18AB48u;
            return;
        }
    }
    ctx->pc = 0x18AAA0u;
}
