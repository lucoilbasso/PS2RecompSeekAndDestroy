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

// Function: entry_00136eb4
// Address: 0x136eb4 - 0x136ed0
void entry_00136eb4_0x136eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136eb4_0x136eb4");
#endif

    ctx->pc = 0x136eb4u;

    // 0x136eb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x136EB4u;
    {
        const bool branch_taken_0x136eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EB4u;
        // 0x136eb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136eb4) {
            ctx->pc = 0x136ED0u;
            return;
        }
    }
    ctx->pc = 0x136EBCu;
    // 0x136ebc: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x136ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x136ec0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x136ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ec4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x136ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136ec8: 0xc061468  jal         func_1851A0
    ctx->pc = 0x136EC8u;
    SET_GPR_U32(ctx, 31, 0x136ED0u);
    ctx->pc = 0x136ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EC8u;
    // 0x136ecc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1851A0u, 0x136EC8u, 0x136ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136ED0u;
}
