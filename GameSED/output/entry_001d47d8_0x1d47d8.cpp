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

// Function: entry_001d47d8
// Address: 0x1d47d8 - 0x1d47f8
void entry_001d47d8_0x1d47d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d47d8_0x1d47d8");
#endif

    ctx->pc = 0x1d47d8u;

    // 0x1d47d8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D47D8u;
    {
        const bool branch_taken_0x1d47d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D47DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47D8u;
        // 0x1d47dc: 0x2465005b  addiu       $a1, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47d8) {
            ctx->pc = 0x1D4820u;
            return;
        }
    }
    ctx->pc = 0x1D47E0u;
    // 0x1d47e0: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x1d47e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x1d47e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D47E4u;
    {
        const bool branch_taken_0x1d47e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47E4u;
        // 0x1d47e8: 0x2c620155  sltiu       $v0, $v1, 0x155 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47e4) {
            ctx->pc = 0x1D47F8u;
            return;
        }
    }
    ctx->pc = 0x1D47ECu;
    // 0x1d47ec: 0x81302  srl         $v0, $t0, 12
    ctx->pc = 0x1d47ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 12));
    // 0x1d47f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D47F0u;
    {
        const bool branch_taken_0x1d47f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47F0u;
        // 0x1d47f4: 0x2445006e  addiu       $a1, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47f0) {
            ctx->pc = 0x1D4820u;
            return;
        }
    }
    ctx->pc = 0x1D47F8u;
}
