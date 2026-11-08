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

// Function: entry_001318f0
// Address: 0x1318f0 - 0x131904
void entry_001318f0_0x1318f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001318f0_0x1318f0");
#endif

    ctx->pc = 0x1318f0u;

    // 0x1318f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1318f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1318f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1318f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1318f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1318f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1318fc: 0x1462ffbc  bne         $v1, $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x1318FCu;
    {
        const bool branch_taken_0x1318fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x131900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318FCu;
        // 0x131900: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1318fc) {
            ctx->pc = 0x1317F0u;
            return;
        }
    }
    ctx->pc = 0x131904u;
}
