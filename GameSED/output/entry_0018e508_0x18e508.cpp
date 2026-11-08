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

// Function: entry_0018e508
// Address: 0x18e508 - 0x18e524
void entry_0018e508_0x18e508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e508_0x18e508");
#endif

    ctx->pc = 0x18e508u;

label_18e508:
    // 0x18e508: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x18e508u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18e50c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18e510: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x18e510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x18e514: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x18e514u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e518: 0x0  nop
    ctx->pc = 0x18e518u;
    // NOP
    // 0x18e51c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E51Cu;
    {
        const bool branch_taken_0x18e51c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E51Cu;
        // 0x18e520: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e51c) {
            ctx->pc = 0x18E508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e508;
        }
    }
    ctx->pc = 0x18E524u;
}
