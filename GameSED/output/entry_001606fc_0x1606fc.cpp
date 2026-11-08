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

// Function: entry_001606fc
// Address: 0x1606fc - 0x160758
void entry_001606fc_0x1606fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001606fc_0x1606fc");
#endif

    switch (ctx->pc) {
        case 0x160704u: goto label_160704;
        case 0x160710u: goto label_160710;
        default: break;
    }

    ctx->pc = 0x1606fcu;

label_1606fc:
    // 0x1606fc: 0xc06a26e  jal         func_1A89B8
label_160700:
    if (ctx->pc == 0x160700u) {
        ctx->pc = 0x160700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606FCu;
        // 0x160700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160704u;
        goto label_160704;
    }
    ctx->pc = 0x1606FCu;
    SET_GPR_U32(ctx, 31, 0x160704u);
    ctx->pc = 0x160700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1606FCu;
    // 0x160700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1606FCu, 0x160704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160704u;
label_160704:
    // 0x160704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160708:
    // 0x160708: 0xc06a26e  jal         func_1A89B8
label_16070c:
    if (ctx->pc == 0x16070Cu) {
        ctx->pc = 0x16070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160708u;
        // 0x16070c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160710u;
        goto label_160710;
    }
    ctx->pc = 0x160708u;
    SET_GPR_U32(ctx, 31, 0x160710u);
    ctx->pc = 0x16070Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160708u;
    // 0x16070c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x160708u, 0x160710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160710u;
label_160710:
    // 0x160710: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x160710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160714:
    // 0x160714: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x160714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_160718:
    // 0x160718: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x160718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_16071c:
    // 0x16071c: 0x2404bfff  addiu       $a0, $zero, -0x4001
    ctx->pc = 0x16071cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_160720:
    // 0x160720: 0x24500da0  addiu       $s0, $v0, 0xDA0
    ctx->pc = 0x160720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
label_160724:
    // 0x160724: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x160724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_160728:
    // 0x160728: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x160728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16072c:
    // 0x16072c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x16072cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_160730:
    // 0x160730: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x160730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_160734:
    // 0x160734: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_160738:
    if (ctx->pc == 0x160738u) {
        ctx->pc = 0x160738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160734u;
        // 0x160738: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16073Cu;
        goto label_16073c;
    }
    ctx->pc = 0x160734u;
    {
        const bool branch_taken_0x160734 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x160738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160734u;
        // 0x160738: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160734) {
            ctx->pc = 0x160758u;
            return;
        }
    }
    ctx->pc = 0x16073Cu;
label_16073c:
    // 0x16073c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_160740:
    // 0x160740: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x160740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160744:
    // 0x160744: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x160744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_160748:
    // 0x160748: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x160748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16074c:
    // 0x16074c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16074cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_160750:
    // 0x160750: 0x60f809  jalr        $v1
label_160754:
    if (ctx->pc == 0x160754u) {
        ctx->pc = 0x160754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160750u;
        // 0x160754: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160758u;
        goto label_fallthrough_0x160750;
    }
    ctx->pc = 0x160750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160758u);
        ctx->pc = 0x160754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160750u;
        // 0x160754: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160750u, 0x160758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x160750:
    ctx->pc = 0x160758u;
}
