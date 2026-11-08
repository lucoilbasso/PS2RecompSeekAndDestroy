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

// Function: entry_0019c818
// Address: 0x19c818 - 0x19c834
void entry_0019c818_0x19c818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c818_0x19c818");
#endif

    ctx->pc = 0x19c818u;

label_19c818:
    // 0x19c818: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x19c818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x19c81c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19c820: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19c820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19c824: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19c824u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c828: 0x0  nop
    ctx->pc = 0x19c828u;
    // NOP
    // 0x19c82c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19C82Cu;
    {
        const bool branch_taken_0x19c82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C82Cu;
        // 0x19c830: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c82c) {
            ctx->pc = 0x19C818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c818;
        }
    }
    ctx->pc = 0x19C834u;
}
