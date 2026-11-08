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

// Function: entry_001cd9e4
// Address: 0x1cd9e4 - 0x1cda00
void entry_001cd9e4_0x1cd9e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd9e4_0x1cd9e4");
#endif

    ctx->pc = 0x1cd9e4u;

    // 0x1cd9e4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CD9E4u;
    {
        const bool branch_taken_0x1cd9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9E4u;
        // 0x1cd9e8: 0x8fa30640  lw          $v1, 0x640($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd9e4) {
            ctx->pc = 0x1CDA40u;
            return;
        }
    }
    ctx->pc = 0x1CD9ECu;
    // 0x1cd9ec: 0xac7d0000  sw          $sp, 0x0($v1)
    ctx->pc = 0x1cd9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 29));
    // 0x1cd9f0: 0x8fa40644  lw          $a0, 0x644($sp)
    ctx->pc = 0x1cd9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
    // 0x1cd9f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cd9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd9f8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1CD9F8u;
    {
        const bool branch_taken_0x1cd9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9F8u;
        // 0x1cd9fc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd9f8) {
            ctx->pc = 0x1CDA30u;
            return;
        }
    }
    ctx->pc = 0x1CDA00u;
}
