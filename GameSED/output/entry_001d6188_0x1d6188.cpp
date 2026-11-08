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

// Function: entry_001d6188
// Address: 0x1d6188 - 0x1d61a8
void entry_001d6188_0x1d6188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6188_0x1d6188");
#endif

    ctx->pc = 0x1d6188u;

    // 0x1d6188: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6188u;
    {
        const bool branch_taken_0x1d6188 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6188u;
        // 0x1d618c: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6188) {
            ctx->pc = 0x1D61A8u;
            return;
        }
    }
    ctx->pc = 0x1D6190u;
    // 0x1d6190: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x1d6190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1d6194: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1d6194u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d6198: 0x2442fbcd  addiu       $v0, $v0, -0x433
    ctx->pc = 0x1d6198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966221));
    // 0x1d619c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D619Cu;
    {
        const bool branch_taken_0x1d619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D61A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D619Cu;
        // 0x1d61a0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d619c) {
            ctx->pc = 0x1D61C8u;
            return;
        }
    }
    ctx->pc = 0x1D61A4u;
    // 0x1d61a4: 0x0  nop
    ctx->pc = 0x1d61a4u;
    // NOP
    ctx->pc = 0x1d61a8u;
}
