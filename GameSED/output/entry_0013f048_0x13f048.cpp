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

// Function: entry_0013f048
// Address: 0x13f048 - 0x13f058
void entry_0013f048_0x13f048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f048_0x13f048");
#endif

    ctx->pc = 0x13f048u;

    // 0x13f048: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x13f048u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13f04c: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13F04Cu;
    {
        const bool branch_taken_0x13f04c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f04c) {
            ctx->pc = 0x13F050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F04Cu;
            // 0x13f050: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F030u;
            return;
        }
    }
    ctx->pc = 0x13F054u;
    // 0x13f054: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13f054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    ctx->pc = 0x13f058u;
}
