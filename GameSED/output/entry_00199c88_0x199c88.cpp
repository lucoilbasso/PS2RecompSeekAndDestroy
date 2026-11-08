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

// Function: entry_00199c88
// Address: 0x199c88 - 0x199c98
void entry_00199c88_0x199c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199c88_0x199c88");
#endif

    ctx->pc = 0x199c88u;

    // 0x199c88: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x199c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x199c8c: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x199c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x199c90: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x199C90u;
    {
        const bool branch_taken_0x199c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C90u;
        // 0x199c94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c90) {
            ctx->pc = 0x199BD8u;
            return;
        }
    }
    ctx->pc = 0x199C98u;
}
