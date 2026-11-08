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

// Function: WFileUnLoadMemFile__FP6WcFile
// Address: 0x17cce0 - 0x17cd5c
void WFileUnLoadMemFile__FP6WcFile_0x17cce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WFileUnLoadMemFile__FP6WcFile_0x17cce0");
#endif

    switch (ctx->pc) {
        case 0x17cce0u: goto label_17cce0;
        case 0x17cce4u: goto label_17cce4;
        case 0x17cce8u: goto label_17cce8;
        case 0x17ccecu: goto label_17ccec;
        case 0x17ccf0u: goto label_17ccf0;
        case 0x17ccf4u: goto label_17ccf4;
        case 0x17ccf8u: goto label_17ccf8;
        case 0x17ccfcu: goto label_17ccfc;
        case 0x17cd00u: goto label_17cd00;
        case 0x17cd04u: goto label_17cd04;
        case 0x17cd08u: goto label_17cd08;
        case 0x17cd0cu: goto label_17cd0c;
        case 0x17cd10u: goto label_17cd10;
        case 0x17cd14u: goto label_17cd14;
        case 0x17cd18u: goto label_17cd18;
        case 0x17cd1cu: goto label_17cd1c;
        case 0x17cd20u: goto label_17cd20;
        case 0x17cd24u: goto label_17cd24;
        case 0x17cd28u: goto label_17cd28;
        case 0x17cd2cu: goto label_17cd2c;
        case 0x17cd30u: goto label_17cd30;
        case 0x17cd34u: goto label_17cd34;
        case 0x17cd38u: goto label_17cd38;
        case 0x17cd3cu: goto label_17cd3c;
        case 0x17cd40u: goto label_17cd40;
        case 0x17cd44u: goto label_17cd44;
        case 0x17cd48u: goto label_17cd48;
        case 0x17cd4cu: goto label_17cd4c;
        case 0x17cd50u: goto label_17cd50;
        case 0x17cd54u: goto label_17cd54;
        case 0x17cd58u: goto label_17cd58;
        default: break;
    }

    ctx->pc = 0x17cce0u;

label_17cce0:
    // 0x17cce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17cce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17cce4:
    // 0x17cce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17cce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17cce8:
    // 0x17cce8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17cce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17ccec:
    // 0x17ccec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17ccecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_17ccf0:
    // 0x17ccf0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x17ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17ccf4:
    // 0x17ccf4: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_17ccf8:
    if (ctx->pc == 0x17CCF8u) {
        ctx->pc = 0x17CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CCF4u;
        // 0x17ccf8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CCFCu;
        goto label_17ccfc;
    }
    ctx->pc = 0x17CCF4u;
    {
        const bool branch_taken_0x17ccf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ccf4) {
            ctx->pc = 0x17CCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CCF4u;
            // 0x17ccf8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CD50u;
            goto label_17cd50;
        }
    }
    ctx->pc = 0x17CCFCu;
label_17ccfc:
    // 0x17ccfc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17cd00:
    // 0x17cd00: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x17cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_17cd04:
    // 0x17cd04: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x17cd04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_17cd08:
    // 0x17cd08: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x17cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17cd0c:
    // 0x17cd0c: 0x60f809  jalr        $v1
label_17cd10:
    if (ctx->pc == 0x17CD10u) {
        ctx->pc = 0x17CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD0Cu;
        // 0x17cd10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CD14u;
        goto label_17cd14;
    }
    ctx->pc = 0x17CD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17CD14u);
        ctx->pc = 0x17CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD0Cu;
        // 0x17cd10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CD0Cu, 0x17CD14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17CD14u;
label_17cd14:
    // 0x17cd14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17cd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17cd18:
    // 0x17cd18: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x17cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_17cd1c:
    // 0x17cd1c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x17cd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_17cd20:
    // 0x17cd20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17cd24:
    if (ctx->pc == 0x17CD24u) {
        ctx->pc = 0x17CD28u;
        goto label_17cd28;
    }
    ctx->pc = 0x17CD20u;
    {
        const bool branch_taken_0x17cd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cd20) {
            ctx->pc = 0x17CD30u;
            goto label_17cd30;
        }
    }
    ctx->pc = 0x17CD28u;
label_17cd28:
    // 0x17cd28: 0xc067f04  jal         func_19FC10
label_17cd2c:
    if (ctx->pc == 0x17CD2Cu) {
        ctx->pc = 0x17CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD28u;
        // 0x17cd2c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CD30u;
        goto label_17cd30;
    }
    ctx->pc = 0x17CD28u;
    SET_GPR_U32(ctx, 31, 0x17CD30u);
    ctx->pc = 0x17CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD28u;
    // 0x17cd2c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17CD28u, 0x17CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CD30u;
label_17cd30:
    // 0x17cd30: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x17cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_17cd34:
    // 0x17cd34: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x17cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_17cd38:
    // 0x17cd38: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_17cd3c:
    // 0x17cd3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17cd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_17cd40:
    // 0x17cd40: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x17cd40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_17cd44:
    // 0x17cd44: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x17cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_17cd48:
    // 0x17cd48: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x17cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_17cd4c:
    // 0x17cd4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17cd4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17cd50:
    // 0x17cd50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17cd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17cd54:
    // 0x17cd54: 0x3e00008  jr          $ra
label_17cd58:
    if (ctx->pc == 0x17CD58u) {
        ctx->pc = 0x17CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD54u;
        // 0x17cd58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CD5Cu;
        goto label_fallthrough_0x17cd54;
    }
    ctx->pc = 0x17CD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD54u;
        // 0x17cd58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17cd54:
    ctx->pc = 0x17CD5Cu;
}
