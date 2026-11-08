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

// Function: entry_001cfd80
// Address: 0x1cfd80 - 0x1cfda8
void entry_001cfd80_0x1cfd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfd80_0x1cfd80");
#endif

    ctx->pc = 0x1cfd80u;

label_1cfd80:
    // 0x1cfd80: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x1cfd80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
    // 0x1cfd84: 0x1231024  and         $v0, $t1, $v1
    ctx->pc = 0x1cfd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x1cfd88: 0x0  nop
    ctx->pc = 0x1cfd88u;
    // NOP
    // 0x1cfd8c: 0x0  nop
    ctx->pc = 0x1cfd8cu;
    // NOP
    // 0x1cfd90: 0x0  nop
    ctx->pc = 0x1cfd90u;
    // NOP
    // 0x1cfd94: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CFD94u;
    {
        const bool branch_taken_0x1cfd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD94u;
        // 0x1cfd98: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd94) {
            ctx->pc = 0x1CFD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfd80;
        }
    }
    ctx->pc = 0x1CFD9Cu;
    // 0x1cfd9c: 0x1000ffba  b           . + 4 + (-0x46 << 2)
    ctx->pc = 0x1CFD9Cu;
    {
        const bool branch_taken_0x1cfd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD9Cu;
        // 0x1cfda0: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd9c) {
            ctx->pc = 0x1CFC88u;
            return;
        }
    }
    ctx->pc = 0x1CFDA4u;
    // 0x1cfda4: 0x0  nop
    ctx->pc = 0x1cfda4u;
    // NOP
    ctx->pc = 0x1cfda8u;
}
