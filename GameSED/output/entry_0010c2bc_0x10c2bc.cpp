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

// Function: entry_0010c2bc
// Address: 0x10c2bc - 0x10c2c4
void entry_0010c2bc_0x10c2bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c2bc_0x10c2bc");
#endif

    ctx->pc = 0x10c2bcu;

    // 0x10c2bc: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C2BCu;
    {
        const bool branch_taken_0x10c2bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2BCu;
        // 0x10c2c0: 0x24030046  addiu       $v1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2bc) {
            ctx->pc = 0x10C2D0u;
            return;
        }
    }
    ctx->pc = 0x10C2C4u;
}
