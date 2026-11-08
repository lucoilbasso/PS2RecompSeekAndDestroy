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

// Function: entry_001aa138
// Address: 0x1aa138 - 0x1aa178
void entry_001aa138_0x1aa138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa138_0x1aa138");
#endif

    switch (ctx->pc) {
        case 0x1aa168u: goto label_1aa168;
        default: break;
    }

    ctx->pc = 0x1aa138u;

    // 0x1aa138: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aa138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1aa13c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aa13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa140: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1aa140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1aa144: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1aa144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1aa148: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1aa148u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1aa14c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1AA14Cu;
    {
        const bool branch_taken_0x1aa14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA14Cu;
        // 0x1aa150: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa14c) {
            ctx->pc = 0x1AA18Cu;
            return;
        }
    }
    ctx->pc = 0x1AA154u;
    // 0x1aa154: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1aa154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1aa158: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1aa158u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa15c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1aa15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1aa160: 0xc06a80a  jal         func_1AA028
    ctx->pc = 0x1AA160u;
    SET_GPR_U32(ctx, 31, 0x1AA168u);
    ctx->pc = 0x1AA164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA160u;
    // 0x1aa164: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA028u, 0x1AA160u, 0x1AA168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA168u;
label_1aa168:
    // 0x1aa168: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA168u;
    {
        const bool branch_taken_0x1aa168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1AA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA168u;
        // 0x1aa16c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa168) {
            ctx->pc = 0x1AA178u;
            return;
        }
    }
    ctx->pc = 0x1AA170u;
    // 0x1aa170: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1AA170u;
    {
        const bool branch_taken_0x1aa170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA170u;
        // 0x1aa174: 0xae320040  sw          $s2, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa170) {
            ctx->pc = 0x1AA214u;
            return;
        }
    }
    ctx->pc = 0x1AA178u;
}
