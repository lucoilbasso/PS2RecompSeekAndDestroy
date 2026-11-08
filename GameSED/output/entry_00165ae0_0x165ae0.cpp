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

// Function: entry_00165ae0
// Address: 0x165ae0 - 0x165b00
void entry_00165ae0_0x165ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165ae0_0x165ae0");
#endif

    ctx->pc = 0x165ae0u;

    // 0x165ae0: 0x8c821258  lw          $v0, 0x1258($a0)
    ctx->pc = 0x165ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4696)));
    // 0x165ae4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x165ae4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ae8: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x165ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x165aec: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x165AECu;
    {
        const bool branch_taken_0x165aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165AECu;
        // 0x165af0: 0xac801260  sw          $zero, 0x1260($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165aec) {
            ctx->pc = 0x165AD8u;
            return;
        }
    }
    ctx->pc = 0x165AF4u;
    // 0x165af4: 0x24071250  addiu       $a3, $zero, 0x1250
    ctx->pc = 0x165af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4688));
    // 0x165af8: 0x24061250  addiu       $a2, $zero, 0x1250
    ctx->pc = 0x165af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4688));
    // 0x165afc: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x165afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    ctx->pc = 0x165b00u;
}
