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

// Function: ApVwEntGetBaseActor__FP7WcActor
// Address: 0x112a20 - 0x112a7c
void ApVwEntGetBaseActor__FP7WcActor_0x112a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApVwEntGetBaseActor__FP7WcActor_0x112a20");
#endif

    switch (ctx->pc) {
        case 0x112a68u: goto label_112a68;
        default: break;
    }

    ctx->pc = 0x112a20u;

    // 0x112a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112a24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x112a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112a2c: 0x24032118  addiu       $v1, $zero, 0x2118
    ctx->pc = 0x112a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x112a30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x112a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x112a34: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x112a34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x112a38: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x112A38u;
    {
        const bool branch_taken_0x112a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x112A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A38u;
        // 0x112a3c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a38) {
            ctx->pc = 0x112A48u;
            goto label_112a48;
        }
    }
    ctx->pc = 0x112A40u;
    // 0x112a40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x112A40u;
    {
        const bool branch_taken_0x112a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A40u;
        // 0x112a44: 0x8cb00260  lw          $s0, 0x260($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a40) {
            ctx->pc = 0x112A50u;
            goto label_112a50;
        }
    }
    ctx->pc = 0x112A48u;
label_112a48:
    // 0x112a48: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x112a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x112a4c: 0x8c70fff0  lw          $s0, -0x10($v1)
    ctx->pc = 0x112a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_112a50:
    // 0x112a50: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x112A50u;
    {
        const bool branch_taken_0x112a50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x112A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A50u;
        // 0x112a54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a50) {
            ctx->pc = 0x112A6Cu;
            goto label_112a6c;
        }
    }
    ctx->pc = 0x112A58u;
    // 0x112a58: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x112a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x112a5c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x112a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x112a60: 0xc068186  jal         func_1A0618
    ctx->pc = 0x112A60u;
    SET_GPR_U32(ctx, 31, 0x112A68u);
    ctx->pc = 0x112A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A60u;
    // 0x112a64: 0x24a53e88  addiu       $a1, $a1, 0x3E88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x112A60u, 0x112A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A68u;
label_112a68:
    // 0x112a68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x112a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_112a6c:
    // 0x112a6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112a70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x112a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x112a74: 0x3e00008  jr          $ra
    ctx->pc = 0x112A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A74u;
        // 0x112a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112A7Cu;
}
