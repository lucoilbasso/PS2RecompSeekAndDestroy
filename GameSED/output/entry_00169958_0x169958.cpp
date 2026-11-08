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

// Function: entry_00169958
// Address: 0x169958 - 0x16996c
void entry_00169958_0x169958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169958_0x169958");
#endif

    ctx->pc = 0x169958u;

    // 0x169958: 0x8e041258  lw          $a0, 0x1258($s0)
    ctx->pc = 0x169958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4696)));
    // 0x16995c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x16995Cu;
    {
        const bool branch_taken_0x16995c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16995c) {
            ctx->pc = 0x169960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16995Cu;
            // 0x169960: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169980u;
            return;
        }
    }
    ctx->pc = 0x169964u;
    // 0x169964: 0xc04c6c6  jal         func_131B18
    ctx->pc = 0x169964u;
    SET_GPR_U32(ctx, 31, 0x16996Cu);
    ctx->pc = 0x131B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B18u, 0x169964u, 0x16996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16996Cu;
}
