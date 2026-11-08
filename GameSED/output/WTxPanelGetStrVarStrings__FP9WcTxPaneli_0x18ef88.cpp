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

// Function: WTxPanelGetStrVarStrings__FP9WcTxPaneli
// Address: 0x18ef88 - 0x18f02c
void WTxPanelGetStrVarStrings__FP9WcTxPaneli_0x18ef88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelGetStrVarStrings__FP9WcTxPaneli_0x18ef88");
#endif

    switch (ctx->pc) {
        case 0x18efb8u: goto label_18efb8;
        case 0x18efccu: goto label_18efcc;
        case 0x18f014u: goto label_18f014;
        default: break;
    }

    ctx->pc = 0x18ef88u;

    // 0x18ef88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ef88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ef8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18ef8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18ef90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18ef90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef94: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x18ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x18ef98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18ef98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18ef9c: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x18ef9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x18efa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18efa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18efa4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18EFA4u;
    {
        const bool branch_taken_0x18efa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFA4u;
        // 0x18efa8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18efa4) {
            ctx->pc = 0x18EFCCu;
            goto label_18efcc;
        }
    }
    ctx->pc = 0x18EFACu;
    // 0x18efac: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x18efacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x18efb0: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x18EFB0u;
    SET_GPR_U32(ctx, 31, 0x18EFB8u);
    ctx->pc = 0x18EFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EFB0u;
    // 0x18efb4: 0x24848140  addiu       $a0, $a0, -0x7EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x18EFB0u, 0x18EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EFB8u;
label_18efb8:
    // 0x18efb8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18efb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18efbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18efbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18efc0: 0x24a58158  addiu       $a1, $a1, -0x7EA8
    ctx->pc = 0x18efc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934872));
    // 0x18efc4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18EFC4u;
    SET_GPR_U32(ctx, 31, 0x18EFCCu);
    ctx->pc = 0x18EFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EFC4u;
    // 0x18efc8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18EFC4u, 0x18EFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EFCCu;
label_18efcc:
    // 0x18efcc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x18efccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x18efd0: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x18efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x18efd4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18efd8: 0x24421b88  addiu       $v0, $v0, 0x1B88
    ctx->pc = 0x18efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7048));
    // 0x18efdc: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x18efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x18efe0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18efe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18efe4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18efe8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x18efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18efec: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18EFECu;
    {
        const bool branch_taken_0x18efec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFECu;
        // 0x18eff0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18efec) {
            ctx->pc = 0x18F000u;
            goto label_18f000;
        }
    }
    ctx->pc = 0x18EFF4u;
    // 0x18eff4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18EFF4u;
    {
        const bool branch_taken_0x18eff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFF4u;
        // 0x18eff8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eff4) {
            ctx->pc = 0x18F018u;
            goto label_18f018;
        }
    }
    ctx->pc = 0x18EFFCu;
    // 0x18effc: 0x0  nop
    ctx->pc = 0x18effcu;
    // NOP
label_18f000:
    // 0x18f000: 0x3c100027  lui         $s0, 0x27
    ctx->pc = 0x18f000u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)39 << 16));
    // 0x18f004: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x18f004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18f008: 0x2610ddb8  addiu       $s0, $s0, -0x2248
    ctx->pc = 0x18f008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958520));
    // 0x18f00c: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x18F00Cu;
    SET_GPR_U32(ctx, 31, 0x18F014u);
    ctx->pc = 0x18F010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F00Cu;
    // 0x18f010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x18F00Cu, 0x18F014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F014u;
label_18f014:
    // 0x18f014: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18f014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f018:
    // 0x18f018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18f018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f01c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18f01cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18f020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18f020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f024: 0x3e00008  jr          $ra
    ctx->pc = 0x18F024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F024u;
        // 0x18f028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F02Cu;
}
