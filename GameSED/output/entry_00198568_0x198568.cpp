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

// Function: entry_00198568
// Address: 0x198568 - 0x198578
void entry_00198568_0x198568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198568_0x198568");
#endif

    ctx->pc = 0x198568u;

    // 0x198568: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x198568u;
    {
        const bool branch_taken_0x198568 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x19856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198568u;
        // 0x19856c: 0x8f838c54  lw          $v1, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198568) {
            ctx->pc = 0x19857Cu;
            return;
        }
    }
    ctx->pc = 0x198570u;
    // 0x198570: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x198570u;
    SET_GPR_U32(ctx, 31, 0x198578u);
    ctx->pc = 0x198574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198570u;
    // 0x198574: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x198570u, 0x198578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198578u;
}
