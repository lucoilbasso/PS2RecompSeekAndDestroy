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

// Function: CtrlObjInit__8WcDaemoni
// Address: 0x1e0d30 - 0x1e0d9c
void CtrlObjInit__8WcDaemoni_0x1e0d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CtrlObjInit__8WcDaemoni_0x1e0d30");
#endif

    switch (ctx->pc) {
        case 0x1e0d60u: goto label_1e0d60;
        case 0x1e0d70u: goto label_1e0d70;
        default: break;
    }

    ctx->pc = 0x1e0d30u;

    // 0x1e0d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0d34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0d38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d3c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e0d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e0d40: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E0D40u;
    {
        const bool branch_taken_0x1e0d40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D40u;
        // 0x1e0d44: 0xae050018  sw          $a1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d40) {
            ctx->pc = 0x1E0D8Cu;
            goto label_1e0d8c;
        }
    }
    ctx->pc = 0x1E0D48u;
    // 0x1e0d48: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1e0d48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e0d4c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0D4Cu;
    {
        const bool branch_taken_0x1e0d4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D4Cu;
        // 0x1e0d50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d4c) {
            ctx->pc = 0x1E0D58u;
            goto label_1e0d58;
        }
    }
    ctx->pc = 0x1E0D54u;
    // 0x1e0d54: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e0d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e0d58:
    // 0x1e0d58: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1E0D58u;
    SET_GPR_U32(ctx, 31, 0x1E0D60u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1E0D58u, 0x1E0D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0D60u;
label_1e0d60:
    // 0x1e0d60: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1e0d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1e0d64: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0D64u;
    {
        const bool branch_taken_0x1e0d64 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1E0D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D64u;
        // 0x1e0d68: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d64) {
            ctx->pc = 0x1E0D8Cu;
            goto label_1e0d8c;
        }
    }
    ctx->pc = 0x1E0D6Cu;
    // 0x1e0d6c: 0x0  nop
    ctx->pc = 0x1e0d6cu;
    // NOP
label_1e0d70:
    // 0x1e0d70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e0d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e0d74: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e0d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e0d78: 0x0  nop
    ctx->pc = 0x1e0d78u;
    // NOP
    // 0x1e0d7c: 0x0  nop
    ctx->pc = 0x1e0d7cu;
    // NOP
    // 0x1e0d80: 0x0  nop
    ctx->pc = 0x1e0d80u;
    // NOP
    // 0x1e0d84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E0D84u;
    {
        const bool branch_taken_0x1e0d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D84u;
        // 0x1e0d88: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d84) {
            ctx->pc = 0x1E0D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0d70;
        }
    }
    ctx->pc = 0x1E0D8Cu;
label_1e0d8c:
    // 0x1e0d8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0d8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0d90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e0d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0d94: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D94u;
        // 0x1e0d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0D9Cu;
}
