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

// Function: WTxPanelSetStrValue__FP9WcTxPaneliPci
// Address: 0x18eef0 - 0x18ef88
void WTxPanelSetStrValue__FP9WcTxPaneliPci_0x18eef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelSetStrValue__FP9WcTxPaneliPci_0x18eef0");
#endif

    switch (ctx->pc) {
        case 0x18ef30u: goto label_18ef30;
        case 0x18ef44u: goto label_18ef44;
        default: break;
    }

    ctx->pc = 0x18eef0u;

    // 0x18eef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18eef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18eef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18eef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18eef8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18eef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eefc: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x18eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x18ef00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18ef00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18ef04: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x18ef04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x18ef08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18ef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18ef0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18ef0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18ef10: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18ef10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18ef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18ef18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18ef18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef1c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18EF1Cu;
    {
        const bool branch_taken_0x18ef1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF1Cu;
        // 0x18ef20: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef1c) {
            ctx->pc = 0x18EF44u;
            goto label_18ef44;
        }
    }
    ctx->pc = 0x18EF24u;
    // 0x18ef24: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x18ef24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x18ef28: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x18EF28u;
    SET_GPR_U32(ctx, 31, 0x18EF30u);
    ctx->pc = 0x18EF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF28u;
    // 0x18ef2c: 0x24848140  addiu       $a0, $a0, -0x7EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x18EF28u, 0x18EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF30u;
label_18ef30:
    // 0x18ef30: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18ef30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18ef34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18ef34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef38: 0x24a58158  addiu       $a1, $a1, -0x7EA8
    ctx->pc = 0x18ef38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934872));
    // 0x18ef3c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18EF3Cu;
    SET_GPR_U32(ctx, 31, 0x18EF44u);
    ctx->pc = 0x18EF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF3Cu;
    // 0x18ef40: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18EF3Cu, 0x18EF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF44u;
label_18ef44:
    // 0x18ef44: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x18ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x18ef48: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x18ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x18ef4c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18ef50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18ef50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ef54: 0x24631b88  addiu       $v1, $v1, 0x1B88
    ctx->pc = 0x18ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7048));
    // 0x18ef58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18ef5c: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x18ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x18ef60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18ef60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18ef64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ef68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18ef68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ef6c: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x18ef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x18ef70: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x18ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x18ef74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18ef74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ef78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18ef78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef7c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18ef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x18ef80: 0x3e00008  jr          $ra
    ctx->pc = 0x18EF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF80u;
        // 0x18ef84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EF88u;
}
