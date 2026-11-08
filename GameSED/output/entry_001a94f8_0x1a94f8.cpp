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

// Function: entry_001a94f8
// Address: 0x1a94f8 - 0x1a952c
void entry_001a94f8_0x1a94f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a94f8_0x1a94f8");
#endif

    switch (ctx->pc) {
        case 0x1a9528u: goto label_1a9528;
        default: break;
    }

    ctx->pc = 0x1a94f8u;

    // 0x1a94f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a94f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a94fc: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x1a94fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a9500: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a9500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a9504: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a9504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a9508: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a9508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a950c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a950cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a9510: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1a9510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a9514: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a9514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a9518: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9518u;
    {
        const bool branch_taken_0x1a9518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9518u;
        // 0x1a951c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9518) {
            ctx->pc = 0x1A952Cu;
            return;
        }
    }
    ctx->pc = 0x1A9520u;
    // 0x1a9520: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A9520u;
    SET_GPR_U32(ctx, 31, 0x1A9528u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A9520u, 0x1A9528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9528u;
label_1a9528:
    // 0x1a9528: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a9528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a952cu;
}
