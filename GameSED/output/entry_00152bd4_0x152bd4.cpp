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

// Function: entry_00152bd4
// Address: 0x152bd4 - 0x152be8
void entry_00152bd4_0x152bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152bd4_0x152bd4");
#endif

    ctx->pc = 0x152bd4u;

    // 0x152bd4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x152BD4u;
    {
        const bool branch_taken_0x152bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152bd4) {
            ctx->pc = 0x152BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152BD4u;
            // 0x152bd8: 0x8e700008  lw          $s0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152BECu;
            return;
        }
    }
    ctx->pc = 0x152BDCu;
    // 0x152bdc: 0x8e420184  lw          $v0, 0x184($s2)
    ctx->pc = 0x152bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x152be0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x152be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x152be4: 0xae420184  sw          $v0, 0x184($s2)
    ctx->pc = 0x152be4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 2));
    ctx->pc = 0x152be8u;
}
