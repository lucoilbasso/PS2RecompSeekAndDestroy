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

// Function: entry_001a0ef4
// Address: 0x1a0ef4 - 0x1a0f28
void entry_001a0ef4_0x1a0ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0ef4_0x1a0ef4");
#endif

    switch (ctx->pc) {
        case 0x1a0f20u: goto label_1a0f20;
        default: break;
    }

    ctx->pc = 0x1a0ef4u;

    // 0x1a0ef4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a0ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a0ef8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0efc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a0efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a0f00: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a0f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f04: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a0f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a0f08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0F08u;
    {
        const bool branch_taken_0x1a0f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F08u;
        // 0x1a0f0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f08) {
            ctx->pc = 0x1A0F28u;
            return;
        }
    }
    ctx->pc = 0x1A0F10u;
    // 0x1a0f10: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a0f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a0f14: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1a0f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a0f18: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A0F18u;
    SET_GPR_U32(ctx, 31, 0x1A0F20u);
    ctx->pc = 0x1A0F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F18u;
    // 0x1a0f1c: 0x24a58888  addiu       $a1, $a1, -0x7778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A0F18u, 0x1A0F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0F20u;
label_1a0f20:
    // 0x1a0f20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0F20u;
    {
        const bool branch_taken_0x1a0f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f20) {
            ctx->pc = 0x1A0F38u;
            return;
        }
    }
    ctx->pc = 0x1A0F28u;
}
