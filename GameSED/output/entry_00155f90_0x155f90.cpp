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

// Function: entry_00155f90
// Address: 0x155f90 - 0x155f98
void entry_00155f90_0x155f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155f90_0x155f90");
#endif

    ctx->pc = 0x155f90u;

    // 0x155f90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x155F90u;
    {
        const bool branch_taken_0x155f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F90u;
        // 0x155f94: 0x249006dc  addiu       $s0, $a0, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1756));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f90) {
            ctx->pc = 0x155FACu;
            return;
        }
    }
    ctx->pc = 0x155F98u;
}
