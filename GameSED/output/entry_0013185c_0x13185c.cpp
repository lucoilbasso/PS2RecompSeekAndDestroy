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

// Function: entry_0013185c
// Address: 0x13185c - 0x131890
void entry_0013185c_0x13185c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013185c_0x13185c");
#endif

    switch (ctx->pc) {
        case 0x131884u: goto label_131884;
        default: break;
    }

    ctx->pc = 0x13185cu;

    // 0x13185c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13185cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131860: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x131860u;
    {
        const bool branch_taken_0x131860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x131864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131860u;
        // 0x131864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131860) {
            ctx->pc = 0x131908u;
            return;
        }
    }
    ctx->pc = 0x131868u;
    // 0x131868: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x131868u;
    {
        const bool branch_taken_0x131868 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x13186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131868u;
        // 0x13186c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131868) {
            ctx->pc = 0x131890u;
            return;
        }
    }
    ctx->pc = 0x131870u;
    // 0x131870: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x131870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x131874: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x131874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131878: 0x24456288  addiu       $a1, $v0, 0x6288
    ctx->pc = 0x131878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25224));
    // 0x13187c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x13187Cu;
    SET_GPR_U32(ctx, 31, 0x131884u);
    ctx->pc = 0x131880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13187Cu;
    // 0x131880: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x13187Cu, 0x131884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131884u;
label_131884:
    // 0x131884: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x131884u;
    {
        const bool branch_taken_0x131884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131884u;
        // 0x131888: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131884) {
            ctx->pc = 0x1318F0u;
            return;
        }
    }
    ctx->pc = 0x13188Cu;
    // 0x13188c: 0x0  nop
    ctx->pc = 0x13188cu;
    // NOP
    ctx->pc = 0x131890u;
}
