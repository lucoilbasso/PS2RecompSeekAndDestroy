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

// Function: ImagePageDestroy__9ApcObjRsci
// Address: 0x103e80 - 0x103ef0
void ImagePageDestroy__9ApcObjRsci_0x103e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ImagePageDestroy__9ApcObjRsci_0x103e80");
#endif

    switch (ctx->pc) {
        case 0x103e80u: goto label_103e80;
        case 0x103e84u: goto label_103e84;
        case 0x103e88u: goto label_103e88;
        case 0x103e8cu: goto label_103e8c;
        case 0x103e90u: goto label_103e90;
        case 0x103e94u: goto label_103e94;
        case 0x103e98u: goto label_103e98;
        case 0x103e9cu: goto label_103e9c;
        case 0x103ea0u: goto label_103ea0;
        case 0x103ea4u: goto label_103ea4;
        case 0x103ea8u: goto label_103ea8;
        case 0x103eacu: goto label_103eac;
        case 0x103eb0u: goto label_103eb0;
        case 0x103eb4u: goto label_103eb4;
        case 0x103eb8u: goto label_103eb8;
        case 0x103ebcu: goto label_103ebc;
        case 0x103ec0u: goto label_103ec0;
        case 0x103ec4u: goto label_103ec4;
        case 0x103ec8u: goto label_103ec8;
        case 0x103eccu: goto label_103ecc;
        case 0x103ed0u: goto label_103ed0;
        case 0x103ed4u: goto label_103ed4;
        case 0x103ed8u: goto label_103ed8;
        case 0x103edcu: goto label_103edc;
        case 0x103ee0u: goto label_103ee0;
        case 0x103ee4u: goto label_103ee4;
        case 0x103ee8u: goto label_103ee8;
        case 0x103eecu: goto label_103eec;
        default: break;
    }

    ctx->pc = 0x103e80u;

label_103e80:
    // 0x103e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x103e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_103e84:
    // 0x103e84: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x103e84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_103e88:
    // 0x103e88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_103e8c:
    // 0x103e8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x103e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_103e90:
    // 0x103e90: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x103e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_103e94:
    // 0x103e94: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x103e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_103e98:
    // 0x103e98: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x103e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_103e9c:
    // 0x103e9c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_103ea0:
    if (ctx->pc == 0x103EA0u) {
        ctx->pc = 0x103EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E9Cu;
        // 0x103ea0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103EA4u;
        goto label_103ea4;
    }
    ctx->pc = 0x103E9Cu;
    {
        const bool branch_taken_0x103e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E9Cu;
        // 0x103ea0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e9c) {
            ctx->pc = 0x103EACu;
            goto label_103eac;
        }
    }
    ctx->pc = 0x103EA4u;
label_103ea4:
    // 0x103ea4: 0xc067f04  jal         func_19FC10
label_103ea8:
    if (ctx->pc == 0x103EA8u) {
        ctx->pc = 0x103EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EA4u;
        // 0x103ea8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103EACu;
        goto label_103eac;
    }
    ctx->pc = 0x103EA4u;
    SET_GPR_U32(ctx, 31, 0x103EACu);
    ctx->pc = 0x103EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103EA4u;
    // 0x103ea8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x103EA4u, 0x103EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103EACu;
label_103eac:
    // 0x103eac: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x103eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_103eb0:
    // 0x103eb0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_103eb4:
    if (ctx->pc == 0x103EB4u) {
        ctx->pc = 0x103EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EB0u;
        // 0x103eb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103EB8u;
        goto label_103eb8;
    }
    ctx->pc = 0x103EB0u;
    {
        const bool branch_taken_0x103eb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x103EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EB0u;
        // 0x103eb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103eb0) {
            ctx->pc = 0x103ED0u;
            goto label_103ed0;
        }
    }
    ctx->pc = 0x103EB8u;
label_103eb8:
    // 0x103eb8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x103eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_103ebc:
    // 0x103ebc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x103ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_103ec0:
    // 0x103ec0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x103ec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_103ec4:
    // 0x103ec4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x103ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_103ec8:
    // 0x103ec8: 0x60f809  jalr        $v1
label_103ecc:
    if (ctx->pc == 0x103ECCu) {
        ctx->pc = 0x103ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EC8u;
        // 0x103ecc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103ED0u;
        goto label_103ed0;
    }
    ctx->pc = 0x103EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x103ED0u);
        ctx->pc = 0x103ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EC8u;
        // 0x103ecc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103EC8u, 0x103ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103ED0u;
label_103ed0:
    // 0x103ed0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x103ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_103ed4:
    // 0x103ed4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x103ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_103ed8:
    // 0x103ed8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x103ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_103edc:
    // 0x103edc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x103edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_103ee0:
    // 0x103ee0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x103ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_103ee4:
    // 0x103ee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_103ee8:
    // 0x103ee8: 0x3e00008  jr          $ra
label_103eec:
    if (ctx->pc == 0x103EECu) {
        ctx->pc = 0x103EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EE8u;
        // 0x103eec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103EF0u;
        goto label_fallthrough_0x103ee8;
    }
    ctx->pc = 0x103EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EE8u;
        // 0x103eec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x103ee8:
    ctx->pc = 0x103EF0u;
}
