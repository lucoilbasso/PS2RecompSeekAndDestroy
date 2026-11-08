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

// Function: entry_0019c7e8
// Address: 0x19c7e8 - 0x19c808
void entry_0019c7e8_0x19c7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c7e8_0x19c7e8");
#endif

    ctx->pc = 0x19c7e8u;

label_19c7e8:
    // 0x19c7e8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x19c7e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19c7ec: 0x0  nop
    ctx->pc = 0x19c7ecu;
    // NOP
    // 0x19c7f0: 0x0  nop
    ctx->pc = 0x19c7f0u;
    // NOP
    // 0x19c7f4: 0x0  nop
    ctx->pc = 0x19c7f4u;
    // NOP
    // 0x19c7f8: 0x0  nop
    ctx->pc = 0x19c7f8u;
    // NOP
    // 0x19c7fc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19C7FCu;
    {
        const bool branch_taken_0x19c7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c7fc) {
            ctx->pc = 0x19C800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C7FCu;
            // 0x19c800: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c7e8;
        }
    }
    ctx->pc = 0x19C804u;
    // 0x19c804: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19c804u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x19c808u;
}
