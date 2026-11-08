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

// Function: entry_00132990
// Address: 0x132990 - 0x1329b0
void entry_00132990_0x132990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132990_0x132990");
#endif

    ctx->pc = 0x132990u;

    // 0x132990: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x132990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x132994: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x132994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x132998: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x132998u;
    {
        const bool branch_taken_0x132998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132998) {
            ctx->pc = 0x13299Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132998u;
            // 0x13299c: 0x8e100060  lw          $s0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1329B4u;
            return;
        }
    }
    ctx->pc = 0x1329A0u;
    // 0x1329a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1329a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1329a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1329a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1329a8: 0xc04c10a  jal         func_130428
    ctx->pc = 0x1329A8u;
    SET_GPR_U32(ctx, 31, 0x1329B0u);
    ctx->pc = 0x1329ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1329A8u;
    // 0x1329ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130428u, 0x1329A8u, 0x1329B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1329B0u;
}
