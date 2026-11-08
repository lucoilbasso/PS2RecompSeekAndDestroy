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

// Function: WTxPanelSetStrVar__FP9WcTxPaneliPc
// Address: 0x18ee68 - 0x18eef0
void WTxPanelSetStrVar__FP9WcTxPaneliPc_0x18ee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelSetStrVar__FP9WcTxPaneliPc_0x18ee68");
#endif

    switch (ctx->pc) {
        case 0x18eea0u: goto label_18eea0;
        case 0x18eeb4u: goto label_18eeb4;
        default: break;
    }

    ctx->pc = 0x18ee68u;

    // 0x18ee68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ee68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ee6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18ee6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18ee70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18ee70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ee74: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x18ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x18ee78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18ee78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18ee7c: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x18ee7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x18ee80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18ee80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18ee84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18ee84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x18ee88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18ee88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ee8c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18EE8Cu;
    {
        const bool branch_taken_0x18ee8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE8Cu;
        // 0x18ee90: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee8c) {
            ctx->pc = 0x18EEB4u;
            goto label_18eeb4;
        }
    }
    ctx->pc = 0x18EE94u;
    // 0x18ee94: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x18ee94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x18ee98: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x18EE98u;
    SET_GPR_U32(ctx, 31, 0x18EEA0u);
    ctx->pc = 0x18EE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EE98u;
    // 0x18ee9c: 0x24848140  addiu       $a0, $a0, -0x7EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x18EE98u, 0x18EEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EEA0u;
label_18eea0:
    // 0x18eea0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18eea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18eea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18eea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eea8: 0x24a58158  addiu       $a1, $a1, -0x7EA8
    ctx->pc = 0x18eea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934872));
    // 0x18eeac: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18EEACu;
    SET_GPR_U32(ctx, 31, 0x18EEB4u);
    ctx->pc = 0x18EEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EEACu;
    // 0x18eeb0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18EEACu, 0x18EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EEB4u;
label_18eeb4:
    // 0x18eeb4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x18eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x18eeb8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x18eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x18eebc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18eec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18eec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18eec4: 0x24631b88  addiu       $v1, $v1, 0x1B88
    ctx->pc = 0x18eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7048));
    // 0x18eec8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18eecc: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x18eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x18eed0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18eed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18eed4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18eed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18eed8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18eed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eedc: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x18eedcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x18eee0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18eee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18eee4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x18eee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x18eee8: 0x3e00008  jr          $ra
    ctx->pc = 0x18EEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EEE8u;
        // 0x18eeec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EEF0u;
}
