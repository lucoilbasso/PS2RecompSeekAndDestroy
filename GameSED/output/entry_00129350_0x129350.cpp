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

// Function: entry_00129350
// Address: 0x129350 - 0x129378
void entry_00129350_0x129350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129350_0x129350");
#endif

    ctx->pc = 0x129350u;

label_129350:
    // 0x129350: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x129350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129354: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x129354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x129358: 0x0  nop
    ctx->pc = 0x129358u;
    // NOP
    // 0x12935c: 0x0  nop
    ctx->pc = 0x12935cu;
    // NOP
    // 0x129360: 0x0  nop
    ctx->pc = 0x129360u;
    // NOP
    // 0x129364: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129364u;
    {
        const bool branch_taken_0x129364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129364u;
        // 0x129368: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129364) {
            ctx->pc = 0x129350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129350;
        }
    }
    ctx->pc = 0x12936Cu;
    // 0x12936c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x12936Cu;
    {
        const bool branch_taken_0x12936c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12936Cu;
        // 0x129370: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12936c) {
            ctx->pc = 0x12946Cu;
            return;
        }
    }
    ctx->pc = 0x129374u;
    // 0x129374: 0x0  nop
    ctx->pc = 0x129374u;
    // NOP
    ctx->pc = 0x129378u;
}
