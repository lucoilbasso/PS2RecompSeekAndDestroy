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

// Function: entry_0017e9f4
// Address: 0x17e9f4 - 0x17ea04
void entry_0017e9f4_0x17e9f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e9f4_0x17e9f4");
#endif

    ctx->pc = 0x17e9f4u;

    // 0x17e9f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17e9f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17e9f8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x17e9f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17e9fc: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17E9FCu;
    {
        const bool branch_taken_0x17e9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e9fc) {
            ctx->pc = 0x17EA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E9FCu;
            // 0x17ea00: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E9B0u;
            return;
        }
    }
    ctx->pc = 0x17EA04u;
}
