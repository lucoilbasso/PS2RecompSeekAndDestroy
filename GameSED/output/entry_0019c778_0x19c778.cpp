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

// Function: entry_0019c778
// Address: 0x19c778 - 0x19c794
void entry_0019c778_0x19c778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c778_0x19c778");
#endif

    ctx->pc = 0x19c778u;

label_19c778:
    // 0x19c778: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x19c778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19c77c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19c77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19c780: 0x0  nop
    ctx->pc = 0x19c780u;
    // NOP
    // 0x19c784: 0x0  nop
    ctx->pc = 0x19c784u;
    // NOP
    // 0x19c788: 0x0  nop
    ctx->pc = 0x19c788u;
    // NOP
    // 0x19c78c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19C78Cu;
    {
        const bool branch_taken_0x19c78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C78Cu;
        // 0x19c790: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c78c) {
            ctx->pc = 0x19C778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c778;
        }
    }
    ctx->pc = 0x19C794u;
}
