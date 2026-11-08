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

// Function: entry_0017f920
// Address: 0x17f920 - 0x17f960
void entry_0017f920_0x17f920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f920_0x17f920");
#endif

    switch (ctx->pc) {
        case 0x17f928u: goto label_17f928;
        case 0x17f930u: goto label_17f930;
        case 0x17f94cu: goto label_17f94c;
        default: break;
    }

    ctx->pc = 0x17f920u;

label_17f920:
    // 0x17f920: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17F920u;
    SET_GPR_U32(ctx, 31, 0x17F928u);
    ctx->pc = 0x17F924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F920u;
    // 0x17f924: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17F920u, 0x17F928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F928u;
label_17f928:
    // 0x17f928: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17F928u;
    SET_GPR_U32(ctx, 31, 0x17F930u);
    ctx->pc = 0x17F92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F928u;
    // 0x17f92c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17F928u, 0x17F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F930u;
label_17f930:
    // 0x17f930: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x17f930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x17f934: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x17f934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17f938: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17f938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f93c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17f93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f940: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17f940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17f944: 0xc05fbfc  jal         func_17EFF0
    ctx->pc = 0x17F944u;
    SET_GPR_U32(ctx, 31, 0x17F94Cu);
    ctx->pc = 0x17F948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F944u;
    // 0x17f948: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EFF0u, 0x17F944u, 0x17F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F94Cu;
label_17f94c:
    // 0x17f94c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x17f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17f950: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x17f950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17f954: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x17F954u;
    {
        const bool branch_taken_0x17f954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f954) {
            ctx->pc = 0x17F920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f920;
        }
    }
    ctx->pc = 0x17F95Cu;
    // 0x17f95c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f95cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x17f960u;
}
