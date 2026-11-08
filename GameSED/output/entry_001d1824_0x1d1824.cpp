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

// Function: entry_001d1824
// Address: 0x1d1824 - 0x1d1838
void entry_001d1824_0x1d1824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1824_0x1d1824");
#endif

    ctx->pc = 0x1d1824u;

    // 0x1d1824: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x1D1824u;
    {
        const bool branch_taken_0x1d1824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1824u;
        // 0x1d1828: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1824) {
            ctx->pc = 0x1D1B54u;
            return;
        }
    }
    ctx->pc = 0x1D182Cu;
    // 0x1d182c: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1D182Cu;
    {
        const bool branch_taken_0x1d182c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D182Cu;
        // 0x1d1830: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d182c) {
            ctx->pc = 0x1D1B54u;
            return;
        }
    }
    ctx->pc = 0x1D1834u;
    // 0x1d1834: 0x0  nop
    ctx->pc = 0x1d1834u;
    // NOP
    ctx->pc = 0x1d1838u;
}
