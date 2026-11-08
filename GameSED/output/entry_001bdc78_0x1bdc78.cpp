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

// Function: entry_001bdc78
// Address: 0x1bdc78 - 0x1bdd20
void entry_001bdc78_0x1bdc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdc78_0x1bdc78");
#endif

    switch (ctx->pc) {
        case 0x1bdca0u: goto label_1bdca0;
        case 0x1bdcc8u: goto label_1bdcc8;
        case 0x1bdcecu: goto label_1bdcec;
        case 0x1bdd10u: goto label_1bdd10;
        default: break;
    }

    ctx->pc = 0x1bdc78u;

label_1bdc78:
    // 0x1bdc78: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_1bdc7c:
    if (ctx->pc == 0x1BDC7Cu) {
        ctx->pc = 0x1BDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC78u;
        // 0x1bdc7c: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDC80u;
        goto label_1bdc80;
    }
    ctx->pc = 0x1BDC78u;
    {
        const bool branch_taken_0x1bdc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC78u;
        // 0x1bdc7c: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc78) {
            ctx->pc = 0x1BDD20u;
            return;
        }
    }
    ctx->pc = 0x1BDC80u;
label_1bdc80:
    // 0x1bdc80: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1bdc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1bdc84:
    // 0x1bdc84: 0x2442b2f0  addiu       $v0, $v0, -0x4D10
    ctx->pc = 0x1bdc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947568));
label_1bdc88:
    // 0x1bdc88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bdc8c:
    // 0x1bdc8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bdc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bdc90:
    // 0x1bdc90: 0x800008  jr          $a0
label_1bdc94:
    if (ctx->pc == 0x1BDC94u) {
        ctx->pc = 0x1BDC98u;
        goto label_1bdc98;
    }
    ctx->pc = 0x1BDC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDC90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BDC98u;
label_1bdc98:
    // 0x1bdc98: 0xc06f806  jal         func_1BE018
label_1bdc9c:
    if (ctx->pc == 0x1BDC9Cu) {
        ctx->pc = 0x1BDC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC98u;
        // 0x1bdc9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDCA0u;
        goto label_1bdca0;
    }
    ctx->pc = 0x1BDC98u;
    SET_GPR_U32(ctx, 31, 0x1BDCA0u);
    ctx->pc = 0x1BDC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDC98u;
    // 0x1bdc9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE018u, 0x1BDC98u, 0x1BDCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCA0u;
label_1bdca0:
    // 0x1bdca0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bdca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bdca4:
    // 0x1bdca4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1bdca8:
    if (ctx->pc == 0x1BDCA8u) {
        ctx->pc = 0x1BDCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCA4u;
        // 0x1bdca8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDCACu;
        goto label_1bdcac;
    }
    ctx->pc = 0x1BDCA4u;
    {
        const bool branch_taken_0x1bdca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCA4u;
        // 0x1bdca8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdca4) {
            ctx->pc = 0x1BDD20u;
            return;
        }
    }
    ctx->pc = 0x1BDCACu;
label_1bdcac:
    // 0x1bdcac: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1bdcacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_1bdcb0:
    // 0x1bdcb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bdcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bdcb4:
    // 0x1bdcb4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1bdcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_1bdcb8:
    // 0x1bdcb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdcb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bdcbc:
    // 0x1bdcbc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x1bdcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_1bdcc0:
    // 0x1bdcc0: 0xc06f79c  jal         func_1BDE70
label_1bdcc4:
    if (ctx->pc == 0x1BDCC4u) {
        ctx->pc = 0x1BDCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCC0u;
        // 0x1bdcc4: 0x8e060094  lw          $a2, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDCC8u;
        goto label_1bdcc8;
    }
    ctx->pc = 0x1BDCC0u;
    SET_GPR_U32(ctx, 31, 0x1BDCC8u);
    ctx->pc = 0x1BDCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDCC0u;
    // 0x1bdcc4: 0x8e060094  lw          $a2, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDE70u, 0x1BDCC0u, 0x1BDCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCC8u;
label_1bdcc8:
    // 0x1bdcc8: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x1bdcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1bdccc:
    // 0x1bdccc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bdcccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bdcd0:
    // 0x1bdcd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bdcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1bdcd4:
    // 0x1bdcd4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1bdcd8:
    if (ctx->pc == 0x1BDCD8u) {
        ctx->pc = 0x1BDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCD4u;
        // 0x1bdcd8: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDCDCu;
        goto label_1bdcdc;
    }
    ctx->pc = 0x1BDCD4u;
    {
        const bool branch_taken_0x1bdcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCD4u;
        // 0x1bdcd8: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcd4) {
            ctx->pc = 0x1BDD20u;
            return;
        }
    }
    ctx->pc = 0x1BDCDCu;
label_1bdcdc:
    // 0x1bdcdc: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x1bdcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1bdce0:
    // 0x1bdce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bdce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bdce4:
    // 0x1bdce4: 0xc06f79c  jal         func_1BDE70
label_1bdce8:
    if (ctx->pc == 0x1BDCE8u) {
        ctx->pc = 0x1BDCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCE4u;
        // 0x1bdce8: 0x8e060098  lw          $a2, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDCECu;
        goto label_1bdcec;
    }
    ctx->pc = 0x1BDCE4u;
    SET_GPR_U32(ctx, 31, 0x1BDCECu);
    ctx->pc = 0x1BDCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDCE4u;
    // 0x1bdce8: 0x8e060098  lw          $a2, 0x98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDE70u, 0x1BDCE4u, 0x1BDCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCECu;
label_1bdcec:
    // 0x1bdcec: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x1bdcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1bdcf0:
    // 0x1bdcf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bdcf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bdcf4:
    // 0x1bdcf4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bdcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1bdcf8:
    // 0x1bdcf8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1bdcfc:
    if (ctx->pc == 0x1BDCFCu) {
        ctx->pc = 0x1BDCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCF8u;
        // 0x1bdcfc: 0xae0300a4  sw          $v1, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDD00u;
        goto label_1bdd00;
    }
    ctx->pc = 0x1BDCF8u;
    {
        const bool branch_taken_0x1bdcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCF8u;
        // 0x1bdcfc: 0xae0300a4  sw          $v1, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcf8) {
            ctx->pc = 0x1BDD20u;
            return;
        }
    }
    ctx->pc = 0x1BDD00u;
label_1bdd00:
    // 0x1bdd00: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x1bdd00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_1bdd04:
    // 0x1bdd04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bdd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bdd08:
    // 0x1bdd08: 0xc06f79c  jal         func_1BDE70
label_1bdd0c:
    if (ctx->pc == 0x1BDD0Cu) {
        ctx->pc = 0x1BDD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD08u;
        // 0x1bdd0c: 0x8e06009c  lw          $a2, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDD10u;
        goto label_1bdd10;
    }
    ctx->pc = 0x1BDD08u;
    SET_GPR_U32(ctx, 31, 0x1BDD10u);
    ctx->pc = 0x1BDD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD08u;
    // 0x1bdd0c: 0x8e06009c  lw          $a2, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDE70u, 0x1BDD08u, 0x1BDD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD10u;
label_1bdd10:
    // 0x1bdd10: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x1bdd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_1bdd14:
    // 0x1bdd14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bdd14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bdd18:
    // 0x1bdd18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bdd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1bdd1c:
    // 0x1bdd1c: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x1bdd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    ctx->pc = 0x1bdd20u;
}
