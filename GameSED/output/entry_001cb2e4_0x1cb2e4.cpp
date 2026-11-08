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

// Function: entry_001cb2e4
// Address: 0x1cb2e4 - 0x1cb308
void entry_001cb2e4_0x1cb2e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb2e4_0x1cb2e4");
#endif

    ctx->pc = 0x1cb2e4u;

    // 0x1cb2e4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CB2E4u;
    {
        const bool branch_taken_0x1cb2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb2e4) {
            ctx->pc = 0x1CB2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB2E4u;
            // 0x1cb2e8: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB2C0u;
            return;
        }
    }
    ctx->pc = 0x1CB2ECu;
    // 0x1cb2ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cb2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cb2f0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1cb2f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cb2f4: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1CB2F4u;
    {
        const bool branch_taken_0x1cb2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb2f4) {
            ctx->pc = 0x1CB2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB2F4u;
            // 0x1cb2f8: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB2C0u;
            return;
        }
    }
    ctx->pc = 0x1CB2FCu;
    // 0x1cb2fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB2FCu;
    {
        const bool branch_taken_0x1cb2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB2FCu;
        // 0x1cb300: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb2fc) {
            ctx->pc = 0x1CB318u;
            return;
        }
    }
    ctx->pc = 0x1CB304u;
    // 0x1cb304: 0x0  nop
    ctx->pc = 0x1cb304u;
    // NOP
    ctx->pc = 0x1cb308u;
}
