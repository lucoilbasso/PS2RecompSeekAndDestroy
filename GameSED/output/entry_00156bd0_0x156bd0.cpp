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

// Function: entry_00156bd0
// Address: 0x156bd0 - 0x156be0
void entry_00156bd0_0x156bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156bd0_0x156bd0");
#endif

    ctx->pc = 0x156bd0u;

    // 0x156bd0: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x156bd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x156bd4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x156BD4u;
    {
        const bool branch_taken_0x156bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156bd4) {
            ctx->pc = 0x156BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156BD4u;
            // 0x156bd8: 0x8cc3000c  lw          $v1, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156C00u;
            return;
        }
    }
    ctx->pc = 0x156BDCu;
    // 0x156bdc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x156bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x156be0u;
}
