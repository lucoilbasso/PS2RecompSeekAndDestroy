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

// Function: entry_0017f3a8
// Address: 0x17f3a8 - 0x17f3b8
void entry_0017f3a8_0x17f3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f3a8_0x17f3a8");
#endif

    ctx->pc = 0x17f3a8u;

    // 0x17f3a8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x17f3a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x17f3ac: 0x18b102b  sltu        $v0, $t4, $t3
    ctx->pc = 0x17f3acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x17f3b0: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x17F3B0u;
    {
        const bool branch_taken_0x17f3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3B0u;
        // 0x17f3b4: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f3b0) {
            ctx->pc = 0x17F2E8u;
            return;
        }
    }
    ctx->pc = 0x17F3B8u;
}
