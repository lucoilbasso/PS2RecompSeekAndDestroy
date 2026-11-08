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

// Function: entry_001d6610
// Address: 0x1d6610 - 0x1d6628
void entry_001d6610_0x1d6610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6610_0x1d6610");
#endif

    ctx->pc = 0x1d6610u;

    // 0x1d6610: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1d6610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1d6614: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1d6614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1d6618: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1d6618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1d661c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D661Cu;
    {
        const bool branch_taken_0x1d661c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D661Cu;
        // 0x1d6620: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d661c) {
            ctx->pc = 0x1D6630u;
            return;
        }
    }
    ctx->pc = 0x1D6624u;
    // 0x1d6624: 0x0  nop
    ctx->pc = 0x1d6624u;
    // NOP
    ctx->pc = 0x1d6628u;
}
