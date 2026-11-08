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

// Function: entry_001b7408
// Address: 0x1b7408 - 0x1b7450
void entry_001b7408_0x1b7408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7408_0x1b7408");
#endif

    switch (ctx->pc) {
        case 0x1b7410u: goto label_1b7410;
        default: break;
    }

    ctx->pc = 0x1b7408u;

    // 0x1b7408: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B7408u;
    SET_GPR_U32(ctx, 31, 0x1B7410u);
    ctx->pc = 0x1B740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7408u;
    // 0x1b740c: 0x8ec4bab0  lw          $a0, -0x4550($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B7408u, 0x1B7410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7410u;
label_1b7410:
    // 0x1b7410: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b7410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b7414: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x1b7414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x1b7418: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b7418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b741c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1b741cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b7420: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1b7420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1b7424: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1b7424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1b7428: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x1b7428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1b742c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1b742cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7430: 0x1054000f  beq         $v0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x1B7430u;
    {
        const bool branch_taken_0x1b7430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1B7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7430u;
        // 0x1b7434: 0x28450002  slti        $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7430) {
            ctx->pc = 0x1B7470u;
            return;
        }
    }
    ctx->pc = 0x1B7438u;
    // 0x1b7438: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7438u;
    {
        const bool branch_taken_0x1b7438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7438u;
        // 0x1b743c: 0x26a4acd8  addiu       $a0, $s5, -0x5328 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7438) {
            ctx->pc = 0x1B7450u;
            return;
        }
    }
    ctx->pc = 0x1B7440u;
    // 0x1b7440: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7440u;
    {
        const bool branch_taken_0x1b7440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7440u;
        // 0x1b7444: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7440) {
            ctx->pc = 0x1B7460u;
            return;
        }
    }
    ctx->pc = 0x1B7448u;
    // 0x1b7448: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B7448u;
    {
        const bool branch_taken_0x1b7448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7448) {
            ctx->pc = 0x1B7490u;
            return;
        }
    }
    ctx->pc = 0x1B7450u;
}
