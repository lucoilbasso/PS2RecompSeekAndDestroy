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

// Function: entry_0013ef68
// Address: 0x13ef68 - 0x13ef74
void entry_0013ef68_0x13ef68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ef68_0x13ef68");
#endif

    ctx->pc = 0x13ef68u;

    // 0x13ef68: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x13ef68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13ef6c: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13EF6Cu;
    {
        const bool branch_taken_0x13ef6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ef6c) {
            ctx->pc = 0x13EF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EF6Cu;
            // 0x13ef70: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EF50u;
            return;
        }
    }
    ctx->pc = 0x13EF74u;
}
