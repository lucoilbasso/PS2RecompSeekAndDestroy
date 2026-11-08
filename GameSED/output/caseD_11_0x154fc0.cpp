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

// Function: caseD_11
// Address: 0x154fc0 - 0x154fe0
void caseD_11_0x154fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x154fc0");
#endif

    switch (ctx->pc) {
        case 0x154fc8u: goto label_154fc8;
        default: break;
    }

    ctx->pc = 0x154fc0u;

    // 0x154fc0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x154FC0u;
    SET_GPR_U32(ctx, 31, 0x154FC8u);
    ctx->pc = 0x154FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154FC0u;
    // 0x154fc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154FC0u, 0x154FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FC8u;
label_154fc8:
    // 0x154fc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154FC8u;
    {
        const bool branch_taken_0x154fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FC8u;
        // 0x154fcc: 0x8e0203b0  lw          $v0, 0x3B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fc8) {
            ctx->pc = 0x154FE0u;
            return;
        }
    }
    ctx->pc = 0x154FD0u;
    // 0x154fd0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x154fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x154fd4: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x154FD4u;
    {
        const bool branch_taken_0x154fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FD4u;
        // 0x154fd8: 0xae0203b0  sw          $v0, 0x3B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fd4) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x154FDCu;
    // 0x154fdc: 0x0  nop
    ctx->pc = 0x154fdcu;
    // NOP
    ctx->pc = 0x154fe0u;
}
