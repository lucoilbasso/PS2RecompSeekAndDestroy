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

// Function: entry_001a04e8
// Address: 0x1a04e8 - 0x1a0510
void entry_001a04e8_0x1a04e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a04e8_0x1a04e8");
#endif

    ctx->pc = 0x1a04e8u;

label_1a04e8:
    // 0x1a04e8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1a04e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a04ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a04ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a04f0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1a04f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a04f4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1a04f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a04f8: 0x0  nop
    ctx->pc = 0x1a04f8u;
    // NOP
    // 0x1a04fc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A04FCu;
    {
        const bool branch_taken_0x1a04fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04FCu;
        // 0x1a0500: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a04fc) {
            ctx->pc = 0x1A04E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a04e8;
        }
    }
    ctx->pc = 0x1A0504u;
    // 0x1a0504: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A0504u;
    {
        const bool branch_taken_0x1a0504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0504u;
        // 0x1a0508: 0x8f829170  lw          $v0, -0x6E90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0504) {
            ctx->pc = 0x1A0530u;
            return;
        }
    }
    ctx->pc = 0x1A050Cu;
    // 0x1a050c: 0x0  nop
    ctx->pc = 0x1a050cu;
    // NOP
    ctx->pc = 0x1a0510u;
}
