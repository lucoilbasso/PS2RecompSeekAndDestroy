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

// Function: entry_001cf950
// Address: 0x1cf950 - 0x1cf968
void entry_001cf950_0x1cf950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf950_0x1cf950");
#endif

    ctx->pc = 0x1cf950u;

    // 0x1cf950: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF950u;
    {
        const bool branch_taken_0x1cf950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF950u;
        // 0x1cf954: 0x2c620555  sltiu       $v0, $v1, 0x555 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf950) {
            ctx->pc = 0x1CF968u;
            return;
        }
    }
    ctx->pc = 0x1CF958u;
    // 0x1cf958: 0x1113c2  srl         $v0, $s1, 15
    ctx->pc = 0x1cf958u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 15));
    // 0x1cf95c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF95Cu;
    {
        const bool branch_taken_0x1cf95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF95Cu;
        // 0x1cf960: 0x244a0077  addiu       $t2, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf95c) {
            ctx->pc = 0x1CF978u;
            return;
        }
    }
    ctx->pc = 0x1CF964u;
    // 0x1cf964: 0x0  nop
    ctx->pc = 0x1cf964u;
    // NOP
    ctx->pc = 0x1cf968u;
}
