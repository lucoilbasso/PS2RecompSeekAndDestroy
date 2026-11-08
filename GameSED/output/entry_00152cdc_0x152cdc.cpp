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

// Function: entry_00152cdc
// Address: 0x152cdc - 0x152cf8
void entry_00152cdc_0x152cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152cdc_0x152cdc");
#endif

    ctx->pc = 0x152cdcu;

    // 0x152cdc: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x152CDCu;
    {
        const bool branch_taken_0x152cdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x152cdc) {
            ctx->pc = 0x152CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152CDCu;
            // 0x152ce0: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152D08u;
            return;
        }
    }
    ctx->pc = 0x152CE4u;
    // 0x152ce4: 0x8e420854  lw          $v0, 0x854($s2)
    ctx->pc = 0x152ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2132)));
    // 0x152ce8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152CE8u;
    {
        const bool branch_taken_0x152ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CE8u;
        // 0x152cec: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ce8) {
            ctx->pc = 0x152CF8u;
            return;
        }
    }
    ctx->pc = 0x152CF0u;
    // 0x152cf0: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x152CF0u;
    {
        const bool branch_taken_0x152cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x152cf0) {
            ctx->pc = 0x152CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152CF0u;
            // 0x152cf4: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152D08u;
            return;
        }
    }
    ctx->pc = 0x152CF8u;
}
