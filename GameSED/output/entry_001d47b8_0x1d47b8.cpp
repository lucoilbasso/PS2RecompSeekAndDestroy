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

// Function: entry_001d47b8
// Address: 0x1d47b8 - 0x1d47d8
void entry_001d47b8_0x1d47b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d47b8_0x1d47b8");
#endif

    ctx->pc = 0x1d47b8u;

    // 0x1d47b8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D47B8u;
    {
        const bool branch_taken_0x1d47b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47B8u;
        // 0x1d47bc: 0x828c2  srl         $a1, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47b8) {
            ctx->pc = 0x1D4820u;
            return;
        }
    }
    ctx->pc = 0x1D47C0u;
    // 0x1d47c0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1d47c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d47c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D47C4u;
    {
        const bool branch_taken_0x1d47c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47C4u;
        // 0x1d47c8: 0x2c620015  sltiu       $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47c4) {
            ctx->pc = 0x1D47D8u;
            return;
        }
    }
    ctx->pc = 0x1D47CCu;
    // 0x1d47cc: 0x81182  srl         $v0, $t0, 6
    ctx->pc = 0x1d47ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 6));
    // 0x1d47d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D47D0u;
    {
        const bool branch_taken_0x1d47d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47D0u;
        // 0x1d47d4: 0x24450038  addiu       $a1, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47d0) {
            ctx->pc = 0x1D4820u;
            return;
        }
    }
    ctx->pc = 0x1D47D8u;
}
