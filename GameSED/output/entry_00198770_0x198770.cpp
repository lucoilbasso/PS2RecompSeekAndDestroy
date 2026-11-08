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

// Function: entry_00198770
// Address: 0x198770 - 0x198784
void entry_00198770_0x198770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198770_0x198770");
#endif

    ctx->pc = 0x198770u;

    // 0x198770: 0xae1e03d0  sw          $fp, 0x3D0($s0)
    ctx->pc = 0x198770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 976), GPR_U32(ctx, 30));
    // 0x198774: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198774u;
    {
        const bool branch_taken_0x198774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198774u;
        // 0x198778: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198774) {
            ctx->pc = 0x198784u;
            return;
        }
    }
    ctx->pc = 0x19877Cu;
    // 0x19877c: 0x8fc201bc  lw          $v0, 0x1BC($fp)
    ctx->pc = 0x19877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 444)));
    // 0x198780: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x198780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x198784u;
}
