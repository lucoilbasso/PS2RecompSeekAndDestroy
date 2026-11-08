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

// Function: entry_00182384
// Address: 0x182384 - 0x18239c
void entry_00182384_0x182384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182384_0x182384");
#endif

    ctx->pc = 0x182384u;

    // 0x182384: 0x14a000a6  bnez        $a1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x182384u;
    {
        const bool branch_taken_0x182384 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x182388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182384u;
        // 0x182388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182384) {
            ctx->pc = 0x182620u;
            return;
        }
    }
    ctx->pc = 0x18238Cu;
    // 0x18238c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x18238cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x182390: 0x25e9021  addu        $s2, $s2, $fp
    ctx->pc = 0x182390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x182394: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x182394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x182398: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x182398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x18239cu;
}
