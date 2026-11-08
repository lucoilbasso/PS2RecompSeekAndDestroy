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

// Function: entry_0019fd88
// Address: 0x19fd88 - 0x19fdc0
void entry_0019fd88_0x19fd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fd88_0x19fd88");
#endif

    switch (ctx->pc) {
        case 0x19fd94u: goto label_19fd94;
        default: break;
    }

    ctx->pc = 0x19fd88u;

    // 0x19fd88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19fd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd8c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x19FD8Cu;
    SET_GPR_U32(ctx, 31, 0x19FD94u);
    ctx->pc = 0x19FD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD8Cu;
    // 0x19fd90: 0x24848810  addiu       $a0, $a0, -0x77F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x19FD8Cu, 0x19FD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD94u;
label_19fd94:
    // 0x19fd94: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x19FD94u;
    {
        const bool branch_taken_0x19fd94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD94u;
        // 0x19fd98: 0x3c03fff0  lui         $v1, 0xFFF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd94) {
            ctx->pc = 0x19FDC0u;
            return;
        }
    }
    ctx->pc = 0x19FD9Cu;
    // 0x19fd9c: 0x3c0201ef  lui         $v0, 0x1EF
    ctx->pc = 0x19fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)495 << 16));
    // 0x19fda0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x19fda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x19fda4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19fda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19fda8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x19fda8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19fdac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FDACu;
    {
        const bool branch_taken_0x19fdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDACu;
        // 0x19fdb0: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdac) {
            ctx->pc = 0x19FDC4u;
            return;
        }
    }
    ctx->pc = 0x19FDB4u;
    // 0x19fdb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19FDB4u;
    {
        const bool branch_taken_0x19fdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDB4u;
        // 0x19fdb8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdb4) {
            ctx->pc = 0x19FDC4u;
            return;
        }
    }
    ctx->pc = 0x19FDBCu;
    // 0x19fdbc: 0x0  nop
    ctx->pc = 0x19fdbcu;
    // NOP
    ctx->pc = 0x19fdc0u;
}
