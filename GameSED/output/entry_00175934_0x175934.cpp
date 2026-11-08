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

// Function: entry_00175934
// Address: 0x175934 - 0x17593c
void entry_00175934_0x175934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175934_0x175934");
#endif

    ctx->pc = 0x175934u;

    // 0x175934: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x175934u;
    {
        const bool branch_taken_0x175934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175934) {
            ctx->pc = 0x175938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175934u;
            // 0x175938: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17594Cu;
            return;
        }
    }
    ctx->pc = 0x17593Cu;
}
