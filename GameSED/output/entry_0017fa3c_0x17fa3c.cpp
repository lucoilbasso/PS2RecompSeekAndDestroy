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

// Function: entry_0017fa3c
// Address: 0x17fa3c - 0x17fa4c
void entry_0017fa3c_0x17fa3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fa3c_0x17fa3c");
#endif

    ctx->pc = 0x17fa3cu;

    // 0x17fa3c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x17fa3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x17fa40: 0x16c102b  sltu        $v0, $t3, $t4
    ctx->pc = 0x17fa40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x17fa44: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x17FA44u;
    {
        const bool branch_taken_0x17fa44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fa44) {
            ctx->pc = 0x17FA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FA44u;
            // 0x17fa48: 0x8ca2001c  lw          $v0, 0x1C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F9E0u;
            return;
        }
    }
    ctx->pc = 0x17FA4Cu;
}
