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

// Function: entry_0011ab78
// Address: 0x11ab78 - 0x11abe0
void entry_0011ab78_0x11ab78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ab78_0x11ab78");
#endif

    switch (ctx->pc) {
        case 0x11ab84u: goto label_11ab84;
        case 0x11ab94u: goto label_11ab94;
        case 0x11aba4u: goto label_11aba4;
        case 0x11abb8u: goto label_11abb8;
        case 0x11abdcu: goto label_11abdc;
        default: break;
    }

    ctx->pc = 0x11ab78u;

label_11ab78:
    // 0x11ab78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11ab78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11ab7c:
    // 0x11ab7c: 0xc0640ca  jal         func_190328
label_11ab80:
    if (ctx->pc == 0x11AB80u) {
        ctx->pc = 0x11AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB7Cu;
        // 0x11ab80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AB84u;
        goto label_11ab84;
    }
    ctx->pc = 0x11AB7Cu;
    SET_GPR_U32(ctx, 31, 0x11AB84u);
    ctx->pc = 0x11AB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB7Cu;
    // 0x11ab80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x11AB7Cu, 0x11AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB84u;
label_11ab84:
    // 0x11ab84: 0x8f848978  lw          $a0, -0x7688($gp)
    ctx->pc = 0x11ab84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_11ab88:
    // 0x11ab88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11ab88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11ab8c:
    // 0x11ab8c: 0xc0640ca  jal         func_190328
label_11ab90:
    if (ctx->pc == 0x11AB90u) {
        ctx->pc = 0x11AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB8Cu;
        // 0x11ab90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AB94u;
        goto label_11ab94;
    }
    ctx->pc = 0x11AB8Cu;
    SET_GPR_U32(ctx, 31, 0x11AB94u);
    ctx->pc = 0x11AB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB8Cu;
    // 0x11ab90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x11AB8Cu, 0x11AB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB94u;
label_11ab94:
    // 0x11ab94: 0x96b00020  lhu         $s0, 0x20($s5)
    ctx->pc = 0x11ab94u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 32)));
label_11ab98:
    // 0x11ab98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11ab98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ab9c:
    // 0x11ab9c: 0xc05be74  jal         func_16F9D0
label_11aba0:
    if (ctx->pc == 0x11ABA0u) {
        ctx->pc = 0x11ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB9Cu;
        // 0x11aba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ABA4u;
        goto label_11aba4;
    }
    ctx->pc = 0x11AB9Cu;
    SET_GPR_U32(ctx, 31, 0x11ABA4u);
    ctx->pc = 0x11ABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB9Cu;
    // 0x11aba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F9D0u, 0x11AB9Cu, 0x11ABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ABA4u;
label_11aba4:
    // 0x11aba4: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x11aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
label_11aba8:
    // 0x11aba8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11aba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11abac:
    // 0x11abac: 0x32100900  andi        $s0, $s0, 0x900
    ctx->pc = 0x11abacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2304);
label_11abb0:
    // 0x11abb0: 0xc05bca8  jal         func_16F2A0
label_11abb4:
    if (ctx->pc == 0x11ABB4u) {
        ctx->pc = 0x11ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABB0u;
        // 0x11abb4: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ABB8u;
        goto label_11abb8;
    }
    ctx->pc = 0x11ABB0u;
    SET_GPR_U32(ctx, 31, 0x11ABB8u);
    ctx->pc = 0x11ABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ABB0u;
    // 0x11abb4: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x11ABB0u, 0x11ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ABB8u;
label_11abb8:
    // 0x11abb8: 0x24020900  addiu       $v0, $zero, 0x900
    ctx->pc = 0x11abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
label_11abbc:
    // 0x11abbc: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
label_11abc0:
    if (ctx->pc == 0x11ABC0u) {
        ctx->pc = 0x11ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABBCu;
        // 0x11abc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ABC4u;
        goto label_11abc4;
    }
    ctx->pc = 0x11ABBCu;
    {
        const bool branch_taken_0x11abbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x11abbc) {
            ctx->pc = 0x11ABC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11ABBCu;
            // 0x11abc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11ABE0u;
            return;
        }
    }
    ctx->pc = 0x11ABC4u;
label_11abc4:
    // 0x11abc4: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x11abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_11abc8:
    // 0x11abc8: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x11abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_11abcc:
    // 0x11abcc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11abccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11abd0:
    // 0x11abd0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11abd4:
    // 0x11abd4: 0x60f809  jalr        $v1
label_11abd8:
    if (ctx->pc == 0x11ABD8u) {
        ctx->pc = 0x11ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABD4u;
        // 0x11abd8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ABDCu;
        goto label_11abdc;
    }
    ctx->pc = 0x11ABD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11ABDCu);
        ctx->pc = 0x11ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABD4u;
        // 0x11abd8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ABD4u, 0x11ABDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11ABDCu;
label_11abdc:
    // 0x11abdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11abdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x11abe0u;
}
