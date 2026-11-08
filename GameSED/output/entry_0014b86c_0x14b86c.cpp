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

// Function: entry_0014b86c
// Address: 0x14b86c - 0x14b8a0
void entry_0014b86c_0x14b86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b86c_0x14b86c");
#endif

    switch (ctx->pc) {
        case 0x14b884u: goto label_14b884;
        default: break;
    }

    ctx->pc = 0x14b86cu;

    // 0x14b86c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14b870: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14B870u;
    {
        const bool branch_taken_0x14b870 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x14B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B870u;
        // 0x14b874: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b870) {
            ctx->pc = 0x14B8A0u;
            return;
        }
    }
    ctx->pc = 0x14B878u;
    // 0x14b878: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14b878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b87c: 0xc04eec2  jal         func_13BB08
    ctx->pc = 0x14B87Cu;
    SET_GPR_U32(ctx, 31, 0x14B884u);
    ctx->pc = 0x14B880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B87Cu;
    // 0x14b880: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB08u, 0x14B87Cu, 0x14B884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B884u;
label_14b884:
    // 0x14b884: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B884u;
    {
        const bool branch_taken_0x14b884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B884u;
        // 0x14b888: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b884) {
            ctx->pc = 0x14B8A4u;
            return;
        }
    }
    ctx->pc = 0x14B88Cu;
    // 0x14b88c: 0x16a00053  bnez        $s5, . + 4 + (0x53 << 2)
    ctx->pc = 0x14B88Cu;
    {
        const bool branch_taken_0x14b88c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B88Cu;
        // 0x14b890: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b88c) {
            ctx->pc = 0x14B9DCu;
            return;
        }
    }
    ctx->pc = 0x14B894u;
    // 0x14b894: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x14b894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x14b898: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x14b898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x14b89c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14b89cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x14b8a0u;
}
