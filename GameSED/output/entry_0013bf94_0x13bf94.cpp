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

// Function: entry_0013bf94
// Address: 0x13bf94 - 0x13bf9c
void entry_0013bf94_0x13bf94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bf94_0x13bf94");
#endif

    ctx->pc = 0x13bf94u;

    // 0x13bf94: 0x5640ffcc  bnel        $s2, $zero, . + 4 + (-0x34 << 2)
    ctx->pc = 0x13BF94u;
    {
        const bool branch_taken_0x13bf94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bf94) {
            ctx->pc = 0x13BF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BF94u;
            // 0x13bf98: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BEC8u;
            return;
        }
    }
    ctx->pc = 0x13BF9Cu;
}
