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

// Function: entry_00191804
// Address: 0x191804 - 0x191834
void entry_00191804_0x191804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191804_0x191804");
#endif

    ctx->pc = 0x191804u;

    // 0x191804: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x191804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x191808: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x191808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19180c: 0x2882003f  slti        $v0, $a0, 0x3F
    ctx->pc = 0x19180cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x191810: 0x0  nop
    ctx->pc = 0x191810u;
    // NOP
    // 0x191814: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x191814u;
    {
        const bool branch_taken_0x191814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191814u;
        // 0x191818: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191814) {
            ctx->pc = 0x1917F8u;
            return;
        }
    }
    ctx->pc = 0x19181Cu;
    // 0x19181c: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x19181cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x191820: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x191820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x191824: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x191824u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x191828: 0xaca307e0  sw          $v1, 0x7E0($a1)
    ctx->pc = 0x191828u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2016), GPR_U32(ctx, 3));
    // 0x19182c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x19182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x191830: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x191830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->pc = 0x191834u;
}
