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

// Function: entry_00109cdc
// Address: 0x109cdc - 0x109cec
void entry_00109cdc_0x109cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109cdc_0x109cdc");
#endif

    ctx->pc = 0x109cdcu;

    // 0x109cdc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x109cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109ce0: 0x1455ffe5  bne         $v0, $s5, . + 4 + (-0x1B << 2)
    ctx->pc = 0x109CE0u;
    {
        const bool branch_taken_0x109ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x109CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CE0u;
        // 0x109ce4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ce0) {
            ctx->pc = 0x109C78u;
            return;
        }
    }
    ctx->pc = 0x109CE8u;
    // 0x109ce8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x109ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x109cecu;
}
