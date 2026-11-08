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

// Function: entry_00107fc8
// Address: 0x107fc8 - 0x107fec
void entry_00107fc8_0x107fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107fc8_0x107fc8");
#endif

    switch (ctx->pc) {
        case 0x107fe8u: goto label_107fe8;
        default: break;
    }

    ctx->pc = 0x107fc8u;

    // 0x107fc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x107fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x107fcc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x107fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x107fd0: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x107fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x107fd4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x107fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107fd8: 0x10460004  beq         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x107FD8u;
    {
        const bool branch_taken_0x107fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x107FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FD8u;
        // 0x107fdc: 0x8c720024  lw          $s2, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107fd8) {
            ctx->pc = 0x107FECu;
            return;
        }
    }
    ctx->pc = 0x107FE0u;
    // 0x107fe0: 0xc041f0a  jal         func_107C28
    ctx->pc = 0x107FE0u;
    SET_GPR_U32(ctx, 31, 0x107FE8u);
    ctx->pc = 0x107C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107C28u, 0x107FE0u, 0x107FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107FE8u;
label_107fe8:
    // 0x107fe8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x107fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107fecu;
}
