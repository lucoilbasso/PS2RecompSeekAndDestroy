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

// Function: entry_001bae7c
// Address: 0x1bae7c - 0x1baec4
void entry_001bae7c_0x1bae7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bae7c_0x1bae7c");
#endif

    switch (ctx->pc) {
        case 0x1bae90u: goto label_1bae90;
        case 0x1baebcu: goto label_1baebc;
        default: break;
    }

    ctx->pc = 0x1bae7cu;

    // 0x1bae7c: 0x2690d910  addiu       $s0, $s4, -0x26F0
    ctx->pc = 0x1bae7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957328));
    // 0x1bae80: 0xae92d910  sw          $s2, -0x26F0($s4)
    ctx->pc = 0x1bae80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294957328), GPR_U32(ctx, 18));
    // 0x1bae84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bae84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bae88: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1BAE88u;
    SET_GPR_U32(ctx, 31, 0x1BAE90u);
    ctx->pc = 0x1BAE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE88u;
    // 0x1bae8c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1BAE88u, 0x1BAE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE90u;
label_1bae90:
    // 0x1bae90: 0x26f1d280  addiu       $s1, $s7, -0x2D80
    ctx->pc = 0x1bae90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294955648));
    // 0x1bae94: 0x26a4d8d0  addiu       $a0, $s5, -0x2730
    ctx->pc = 0x1bae94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957264));
    // 0x1bae98: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1bae98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bae9c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1bae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1baea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1baea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baea4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1baea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baea8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1baea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1baeac: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1baeacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baeb0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1baeb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1baeb4: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1BAEB4u;
    SET_GPR_U32(ctx, 31, 0x1BAEBCu);
    ctx->pc = 0x1BAEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAEB4u;
    // 0x1baeb8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1BAEB4u, 0x1BAEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAEBCu;
label_1baebc:
    // 0x1baebc: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BAEBCu;
    {
        const bool branch_taken_0x1baebc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1baebc) {
            ctx->pc = 0x1BAEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BAEBCu;
            // 0x1baec0: 0x8ec2c090  lw          $v0, -0x3F70($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951056)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAEE4u;
            return;
        }
    }
    ctx->pc = 0x1BAEC4u;
}
