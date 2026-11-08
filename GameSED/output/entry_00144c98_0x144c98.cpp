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

// Function: entry_00144c98
// Address: 0x144c98 - 0x144cc4
void entry_00144c98_0x144c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144c98_0x144c98");
#endif

    switch (ctx->pc) {
        case 0x144cc0u: goto label_144cc0;
        default: break;
    }

    ctx->pc = 0x144c98u;

    // 0x144c98: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x144c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x144c9c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x144C9Cu;
    {
        const bool branch_taken_0x144c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x144CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C9Cu;
        // 0x144ca0: 0x8e700018  lw          $s0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c9c) {
            ctx->pc = 0x144CC4u;
            return;
        }
    }
    ctx->pc = 0x144CA4u;
    // 0x144ca4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x144ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144ca8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x144ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x144cac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x144CACu;
    {
        const bool branch_taken_0x144cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CACu;
        // 0x144cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144cac) {
            ctx->pc = 0x144CC4u;
            return;
        }
    }
    ctx->pc = 0x144CB4u;
    // 0x144cb4: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x144cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x144cb8: 0xc04fa80  jal         func_13EA00
    ctx->pc = 0x144CB8u;
    SET_GPR_U32(ctx, 31, 0x144CC0u);
    ctx->pc = 0x144CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144CB8u;
    // 0x144cbc: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EA00u, 0x144CB8u, 0x144CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CC0u;
label_144cc0:
    // 0x144cc0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x144cc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144cc4u;
}
