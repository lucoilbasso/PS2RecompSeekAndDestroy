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

// Function: entry_0018e1e0
// Address: 0x18e1e0 - 0x18e208
void entry_0018e1e0_0x18e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e1e0_0x18e1e0");
#endif

    ctx->pc = 0x18e1e0u;

label_18e1e0:
    // 0x18e1e0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x18e1e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18e1e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18e1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18e1e8: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x18e1e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x18e1ec: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x18e1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x18e1f0: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x18e1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e1f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E1F4u;
    {
        const bool branch_taken_0x18e1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1F4u;
        // 0x18e1f8: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1f4) {
            ctx->pc = 0x18E1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e1e0;
        }
    }
    ctx->pc = 0x18E1FCu;
    // 0x18e1fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18E1FCu;
    {
        const bool branch_taken_0x18e1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1FCu;
        // 0x18e200: 0x2502023c  addiu       $v0, $t0, 0x23C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 572));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1fc) {
            ctx->pc = 0x18E238u;
            return;
        }
    }
    ctx->pc = 0x18E204u;
    // 0x18e204: 0x0  nop
    ctx->pc = 0x18e204u;
    // NOP
    ctx->pc = 0x18e208u;
}
