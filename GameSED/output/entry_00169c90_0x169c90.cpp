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

// Function: entry_00169c90
// Address: 0x169c90 - 0x169ca8
void entry_00169c90_0x169c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169c90_0x169c90");
#endif

    ctx->pc = 0x169c90u;

    // 0x169c90: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x169C90u;
    {
        const bool branch_taken_0x169c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x169C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C90u;
        // 0x169c94: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c90) {
            ctx->pc = 0x169CB8u;
            return;
        }
    }
    ctx->pc = 0x169C98u;
    // 0x169c98: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x169C98u;
    {
        const bool branch_taken_0x169c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x169C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C98u;
        // 0x169c9c: 0x26c50ccc  addiu       $a1, $s6, 0xCCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 3276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c98) {
            ctx->pc = 0x169CC0u;
            return;
        }
    }
    ctx->pc = 0x169CA0u;
    // 0x169ca0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x169CA0u;
    {
        const bool branch_taken_0x169ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CA0u;
        // 0x169ca4: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ca0) {
            ctx->pc = 0x169CCCu;
            return;
        }
    }
    ctx->pc = 0x169CA8u;
}
