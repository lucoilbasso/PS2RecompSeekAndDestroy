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

// Function: entry_001d47f8
// Address: 0x1d47f8 - 0x1d4810
void entry_001d47f8_0x1d47f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d47f8_0x1d47f8");
#endif

    ctx->pc = 0x1d47f8u;

    // 0x1d47f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D47F8u;
    {
        const bool branch_taken_0x1d47f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47F8u;
        // 0x1d47fc: 0x2c620555  sltiu       $v0, $v1, 0x555 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47f8) {
            ctx->pc = 0x1D4810u;
            return;
        }
    }
    ctx->pc = 0x1D4800u;
    // 0x1d4800: 0x813c2  srl         $v0, $t0, 15
    ctx->pc = 0x1d4800u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 15));
    // 0x1d4804: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4804u;
    {
        const bool branch_taken_0x1d4804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4804u;
        // 0x1d4808: 0x24450077  addiu       $a1, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4804) {
            ctx->pc = 0x1D4820u;
            return;
        }
    }
    ctx->pc = 0x1D480Cu;
    // 0x1d480c: 0x0  nop
    ctx->pc = 0x1d480cu;
    // NOP
    ctx->pc = 0x1d4810u;
}
