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

// Function: entry_001c1108
// Address: 0x1c1108 - 0x1c1140
void entry_001c1108_0x1c1108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1108_0x1c1108");
#endif

    switch (ctx->pc) {
        case 0x1c1138u: goto label_1c1138;
        default: break;
    }

    ctx->pc = 0x1c1108u;

    // 0x1c1108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c110c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C110Cu;
    {
        const bool branch_taken_0x1c110c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C110Cu;
        // 0x1c1110: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c110c) {
            ctx->pc = 0x1C114Cu;
            return;
        }
    }
    ctx->pc = 0x1C1114u;
    // 0x1c1114: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1c1114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c1118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c111c: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x1c111cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1c1120: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1c1120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c1124: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1c1124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c1128: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1c1128u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c112c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1c112cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1130: 0xc0704b0  jal         func_1C12C0
    ctx->pc = 0x1C1130u;
    SET_GPR_U32(ctx, 31, 0x1C1138u);
    ctx->pc = 0x1C1134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1130u;
    // 0x1c1134: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C12C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C12C0u, 0x1C1130u, 0x1C1138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1138u;
label_1c1138:
    // 0x1c1138: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C1138u;
    {
        const bool branch_taken_0x1c1138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1138u;
        // 0x1c113c: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1138) {
            ctx->pc = 0x1C1170u;
            return;
        }
    }
    ctx->pc = 0x1C1140u;
}
