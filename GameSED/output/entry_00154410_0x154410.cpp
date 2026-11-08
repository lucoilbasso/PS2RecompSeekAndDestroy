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

// Function: entry_00154410
// Address: 0x154410 - 0x154420
void entry_00154410_0x154410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154410_0x154410");
#endif

    ctx->pc = 0x154410u;

    // 0x154410: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x154410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x154414: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x154414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x154418: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x154418u;
    {
        const bool branch_taken_0x154418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154418u;
        // 0x15441c: 0xac4306a8  sw          $v1, 0x6A8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154418) {
            ctx->pc = 0x15442Cu;
            return;
        }
    }
    ctx->pc = 0x154420u;
}
