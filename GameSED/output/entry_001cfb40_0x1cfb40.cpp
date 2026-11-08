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

// Function: entry_001cfb40
// Address: 0x1cfb40 - 0x1cfb58
void entry_001cfb40_0x1cfb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfb40_0x1cfb40");
#endif

    ctx->pc = 0x1cfb40u;

    // 0x1cfb40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CFB40u;
    {
        const bool branch_taken_0x1cfb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB40u;
        // 0x1cfb44: 0x2c620555  sltiu       $v0, $v1, 0x555 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb40) {
            ctx->pc = 0x1CFB58u;
            return;
        }
    }
    ctx->pc = 0x1CFB48u;
    // 0x1cfb48: 0x613c2  srl         $v0, $a2, 15
    ctx->pc = 0x1cfb48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 15));
    // 0x1cfb4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CFB4Cu;
    {
        const bool branch_taken_0x1cfb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB4Cu;
        // 0x1cfb50: 0x24450077  addiu       $a1, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb4c) {
            ctx->pc = 0x1CFB68u;
            return;
        }
    }
    ctx->pc = 0x1CFB54u;
    // 0x1cfb54: 0x0  nop
    ctx->pc = 0x1cfb54u;
    // NOP
    ctx->pc = 0x1cfb58u;
}
