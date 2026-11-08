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

// Function: entry_00129b28
// Address: 0x129b28 - 0x129b40
void entry_00129b28_0x129b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129b28_0x129b28");
#endif

    ctx->pc = 0x129b28u;

    // 0x129b28: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x129b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x129b2c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x129b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x129b30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x129B30u;
    {
        const bool branch_taken_0x129b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129B30u;
        // 0x129b34: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b30) {
            ctx->pc = 0x129B44u;
            return;
        }
    }
    ctx->pc = 0x129B38u;
    // 0x129b38: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x129b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129b3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x129b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x129b40u;
}
