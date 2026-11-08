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

// Function: entry_00189488
// Address: 0x189488 - 0x1894a0
void entry_00189488_0x189488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189488_0x189488");
#endif

    ctx->pc = 0x189488u;

    // 0x189488: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x189488u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x18948c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x18948cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x189490: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189490u;
    {
        const bool branch_taken_0x189490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189490u;
        // 0x189494: 0x24b30170  addiu       $s3, $a1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189490) {
            ctx->pc = 0x1894A0u;
            return;
        }
    }
    ctx->pc = 0x189498u;
    // 0x189498: 0xc061920  jal         func_186480
    ctx->pc = 0x189498u;
    SET_GPR_U32(ctx, 31, 0x1894A0u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x189498u, 0x1894A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1894A0u;
}
