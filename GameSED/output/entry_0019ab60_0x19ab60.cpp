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

// Function: entry_0019ab60
// Address: 0x19ab60 - 0x19ab78
void entry_0019ab60_0x19ab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ab60_0x19ab60");
#endif

    ctx->pc = 0x19ab60u;

    // 0x19ab60: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x19ab60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x19ab64: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19ab64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19ab68: 0x10480003  beq         $v0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AB68u;
    {
        const bool branch_taken_0x19ab68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x19AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB68u;
        // 0x19ab6c: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab68) {
            ctx->pc = 0x19AB78u;
            return;
        }
    }
    ctx->pc = 0x19AB70u;
    // 0x19ab70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19AB70u;
    {
        const bool branch_taken_0x19ab70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB70u;
        // 0x19ab74: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab70) {
            ctx->pc = 0x19AB7Cu;
            return;
        }
    }
    ctx->pc = 0x19AB78u;
}
