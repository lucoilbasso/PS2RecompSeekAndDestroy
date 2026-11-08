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

// Function: caseD_16
// Address: 0x1120e0 - 0x1120f8
void caseD_16_0x1120e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_16_0x1120e0");
#endif

    ctx->pc = 0x1120e0u;

    // 0x1120e0: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1120e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1120e4: 0x24110013  addiu       $s1, $zero, 0x13
    ctx->pc = 0x1120e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1120e8: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x1120e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1120ec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1120ECu;
    {
        const bool branch_taken_0x1120ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1120F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120ECu;
        // 0x1120f0: 0x8c5e0044  lw          $fp, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120ec) {
            ctx->pc = 0x112124u;
            return;
        }
    }
    ctx->pc = 0x1120F4u;
    // 0x1120f4: 0x0  nop
    ctx->pc = 0x1120f4u;
    // NOP
    ctx->pc = 0x1120f8u;
}
