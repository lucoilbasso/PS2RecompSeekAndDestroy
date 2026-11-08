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

// Function: entry_001bcb70
// Address: 0x1bcb70 - 0x1bcbd0
void entry_001bcb70_0x1bcb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcb70_0x1bcb70");
#endif

    switch (ctx->pc) {
        case 0x1bcb70u: goto label_1bcb70;
        case 0x1bcb74u: goto label_1bcb74;
        case 0x1bcb78u: goto label_1bcb78;
        case 0x1bcb7cu: goto label_1bcb7c;
        case 0x1bcb80u: goto label_1bcb80;
        case 0x1bcb84u: goto label_1bcb84;
        case 0x1bcb88u: goto label_1bcb88;
        case 0x1bcb8cu: goto label_1bcb8c;
        case 0x1bcb90u: goto label_1bcb90;
        case 0x1bcb94u: goto label_1bcb94;
        case 0x1bcb98u: goto label_1bcb98;
        case 0x1bcb9cu: goto label_1bcb9c;
        case 0x1bcba0u: goto label_1bcba0;
        case 0x1bcba4u: goto label_1bcba4;
        case 0x1bcba8u: goto label_1bcba8;
        case 0x1bcbacu: goto label_1bcbac;
        case 0x1bcbb0u: goto label_1bcbb0;
        case 0x1bcbb4u: goto label_1bcbb4;
        case 0x1bcbb8u: goto label_1bcbb8;
        case 0x1bcbbcu: goto label_1bcbbc;
        case 0x1bcbc0u: goto label_1bcbc0;
        case 0x1bcbc4u: goto label_1bcbc4;
        case 0x1bcbc8u: goto label_1bcbc8;
        case 0x1bcbccu: goto label_1bcbcc;
        default: break;
    }

    ctx->pc = 0x1bcb70u;

label_1bcb70:
    // 0x1bcb70: 0x16640017  bne         $s3, $a0, . + 4 + (0x17 << 2)
label_1bcb74:
    if (ctx->pc == 0x1BCB74u) {
        ctx->pc = 0x1BCB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB70u;
        // 0x1bcb74: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB78u;
        goto label_1bcb78;
    }
    ctx->pc = 0x1BCB70u;
    {
        const bool branch_taken_0x1bcb70 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x1BCB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB70u;
        // 0x1bcb74: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb70) {
            ctx->pc = 0x1BCBD0u;
            return;
        }
    }
    ctx->pc = 0x1BCB78u;
label_1bcb78:
    // 0x1bcb78: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1bcb7c:
    if (ctx->pc == 0x1BCB7Cu) {
        ctx->pc = 0x1BCB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB78u;
        // 0x1bcb7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB80u;
        goto label_1bcb80;
    }
    ctx->pc = 0x1BCB78u;
    {
        const bool branch_taken_0x1bcb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB78u;
        // 0x1bcb7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb78) {
            ctx->pc = 0x1BCBD0u;
            return;
        }
    }
    ctx->pc = 0x1BCB80u;
label_1bcb80:
    // 0x1bcb80: 0x8e450040  lw          $a1, 0x40($s2)
    ctx->pc = 0x1bcb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1bcb84:
    // 0x1bcb84: 0xc071074  jal         func_1C41D0
label_1bcb88:
    if (ctx->pc == 0x1BCB88u) {
        ctx->pc = 0x1BCB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB84u;
        // 0x1bcb88: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB8Cu;
        goto label_1bcb8c;
    }
    ctx->pc = 0x1BCB84u;
    SET_GPR_U32(ctx, 31, 0x1BCB8Cu);
    ctx->pc = 0x1BCB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB84u;
    // 0x1bcb88: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C41D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C41D0u, 0x1BCB84u, 0x1BCB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB8Cu;
label_1bcb8c:
    // 0x1bcb8c: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x1bcb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1bcb90:
    // 0x1bcb90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcb94:
    // 0x1bcb94: 0xc071074  jal         func_1C41D0
label_1bcb98:
    if (ctx->pc == 0x1BCB98u) {
        ctx->pc = 0x1BCB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB94u;
        // 0x1bcb98: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB9Cu;
        goto label_1bcb9c;
    }
    ctx->pc = 0x1BCB94u;
    SET_GPR_U32(ctx, 31, 0x1BCB9Cu);
    ctx->pc = 0x1BCB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB94u;
    // 0x1bcb98: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C41D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C41D0u, 0x1BCB94u, 0x1BCB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB9Cu;
label_1bcb9c:
    // 0x1bcb9c: 0xde430028  ld          $v1, 0x28($s2)
    ctx->pc = 0x1bcb9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 40)));
label_1bcba0:
    // 0x1bcba0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1bcba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1bcba4:
    // 0x1bcba4: 0x8e47003c  lw          $a3, 0x3C($s2)
    ctx->pc = 0x1bcba4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1bcba8:
    // 0x1bcba8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1bcba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1bcbac:
    // 0x1bcbac: 0xffa30090  sd          $v1, 0x90($sp)
    ctx->pc = 0x1bcbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 3));
label_1bcbb0:
    // 0x1bcbb0: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1bcbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_1bcbb4:
    // 0x1bcbb4: 0xde420030  ld          $v0, 0x30($s2)
    ctx->pc = 0x1bcbb4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 48)));
label_1bcbb8:
    // 0x1bcbb8: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x1bcbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1bcbbc:
    // 0x1bcbbc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1bcbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1bcbc0:
    // 0x1bcbc0: 0xafa7008c  sw          $a3, 0x8C($sp)
    ctx->pc = 0x1bcbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 7));
label_1bcbc4:
    // 0x1bcbc4: 0x60f809  jalr        $v1
label_1bcbc8:
    if (ctx->pc == 0x1BCBC8u) {
        ctx->pc = 0x1BCBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBC4u;
        // 0x1bcbc8: 0xffa20098  sd          $v0, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCBCCu;
        goto label_1bcbcc;
    }
    ctx->pc = 0x1BCBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BCBCCu);
        ctx->pc = 0x1BCBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBC4u;
        // 0x1bcbc8: 0xffa20098  sd          $v0, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCBC4u, 0x1BCBCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BCBCCu;
label_1bcbcc:
    // 0x1bcbcc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1bcbccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bcbd0u;
}
