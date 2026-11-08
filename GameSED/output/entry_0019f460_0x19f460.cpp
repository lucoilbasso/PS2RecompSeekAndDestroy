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

// Function: entry_0019f460
// Address: 0x19f460 - 0x19f490
void entry_0019f460_0x19f460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f460_0x19f460");
#endif

    switch (ctx->pc) {
        case 0x19f470u: goto label_19f470;
        default: break;
    }

    ctx->pc = 0x19f460u;

    // 0x19f460: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x19f460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x19f464: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19f464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x19f468: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x19F468u;
    SET_GPR_U32(ctx, 31, 0x19F470u);
    ctx->pc = 0x19F46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F468u;
    // 0x19f46c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x19F468u, 0x19F470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F470u;
label_19f470:
    // 0x19f470: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x19f470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x19f474: 0xaf928e0c  sw          $s2, -0x71F4($gp)
    ctx->pc = 0x19f474u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938124), GPR_U32(ctx, 18));
    // 0x19f478: 0x2463f640  addiu       $v1, $v1, -0x9C0
    ctx->pc = 0x19f478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964800));
    // 0x19f47c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x23F640u));
    // 0x19f480: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19F480u;
    {
        const bool branch_taken_0x19f480 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F480u;
        // 0x19f484: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f480) {
            ctx->pc = 0x19F4B4u;
            return;
        }
    }
    ctx->pc = 0x19F488u;
    // 0x19f488: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19f488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19f48c: 0x0  nop
    ctx->pc = 0x19f48cu;
    // NOP
    ctx->pc = 0x19f490u;
}
