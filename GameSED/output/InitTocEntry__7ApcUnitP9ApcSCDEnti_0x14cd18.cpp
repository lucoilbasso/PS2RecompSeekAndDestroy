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

// Function: InitTocEntry__7ApcUnitP9ApcSCDEnti
// Address: 0x14cd18 - 0x14cd7c
void InitTocEntry__7ApcUnitP9ApcSCDEnti_0x14cd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitTocEntry__7ApcUnitP9ApcSCDEnti_0x14cd18");
#endif

    switch (ctx->pc) {
        case 0x14cd18u: goto label_14cd18;
        case 0x14cd1cu: goto label_14cd1c;
        case 0x14cd20u: goto label_14cd20;
        case 0x14cd24u: goto label_14cd24;
        case 0x14cd28u: goto label_14cd28;
        case 0x14cd2cu: goto label_14cd2c;
        case 0x14cd30u: goto label_14cd30;
        case 0x14cd34u: goto label_14cd34;
        case 0x14cd38u: goto label_14cd38;
        case 0x14cd3cu: goto label_14cd3c;
        case 0x14cd40u: goto label_14cd40;
        case 0x14cd44u: goto label_14cd44;
        case 0x14cd48u: goto label_14cd48;
        case 0x14cd4cu: goto label_14cd4c;
        case 0x14cd50u: goto label_14cd50;
        case 0x14cd54u: goto label_14cd54;
        case 0x14cd58u: goto label_14cd58;
        case 0x14cd5cu: goto label_14cd5c;
        case 0x14cd60u: goto label_14cd60;
        case 0x14cd64u: goto label_14cd64;
        case 0x14cd68u: goto label_14cd68;
        case 0x14cd6cu: goto label_14cd6c;
        case 0x14cd70u: goto label_14cd70;
        case 0x14cd74u: goto label_14cd74;
        case 0x14cd78u: goto label_14cd78;
        default: break;
    }

    ctx->pc = 0x14cd18u;

label_14cd18:
    // 0x14cd18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14cd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_14cd1c:
    // 0x14cd1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14cd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_14cd20:
    // 0x14cd20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14cd20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14cd24:
    // 0x14cd24: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14cd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_14cd28:
    // 0x14cd28: 0xae050174  sw          $a1, 0x174($s0)
    ctx->pc = 0x14cd28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 5));
label_14cd2c:
    // 0x14cd2c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x14cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14cd30:
    // 0x14cd30: 0xae060178  sw          $a2, 0x178($s0)
    ctx->pc = 0x14cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 6));
label_14cd34:
    // 0x14cd34: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x14cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_14cd38:
    // 0x14cd38: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14cd38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14cd3c:
    // 0x14cd3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14cd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14cd40:
    // 0x14cd40: 0x60f809  jalr        $v1
label_14cd44:
    if (ctx->pc == 0x14CD44u) {
        ctx->pc = 0x14CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD40u;
        // 0x14cd44: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD48u;
        goto label_14cd48;
    }
    ctx->pc = 0x14CD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14CD48u);
        ctx->pc = 0x14CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD40u;
        // 0x14cd44: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CD40u, 0x14CD48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CD48u;
label_14cd48:
    // 0x14cd48: 0x8e050178  lw          $a1, 0x178($s0)
    ctx->pc = 0x14cd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
label_14cd4c:
    // 0x14cd4c: 0x4a20008  bltzl       $a1, . + 4 + (0x8 << 2)
label_14cd50:
    if (ctx->pc == 0x14CD50u) {
        ctx->pc = 0x14CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD4Cu;
        // 0x14cd50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD54u;
        goto label_14cd54;
    }
    ctx->pc = 0x14CD4Cu;
    {
        const bool branch_taken_0x14cd4c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x14cd4c) {
            ctx->pc = 0x14CD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CD4Cu;
            // 0x14cd50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CD70u;
            goto label_14cd70;
        }
    }
    ctx->pc = 0x14CD54u;
label_14cd54:
    // 0x14cd54: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x14cd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_14cd58:
    // 0x14cd58: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_14cd5c:
    if (ctx->pc == 0x14CD5Cu) {
        ctx->pc = 0x14CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD58u;
        // 0x14cd5c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD60u;
        goto label_14cd60;
    }
    ctx->pc = 0x14CD58u;
    {
        const bool branch_taken_0x14cd58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD58u;
        // 0x14cd5c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd58) {
            ctx->pc = 0x14CD6Cu;
            goto label_14cd6c;
        }
    }
    ctx->pc = 0x14CD60u;
label_14cd60:
    // 0x14cd60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14cd60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14cd64:
    // 0x14cd64: 0xc041228  jal         func_1048A0
label_14cd68:
    if (ctx->pc == 0x14CD68u) {
        ctx->pc = 0x14CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD64u;
        // 0x14cd68: 0x8ce801b4  lw          $t0, 0x1B4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD6Cu;
        goto label_14cd6c;
    }
    ctx->pc = 0x14CD64u;
    SET_GPR_U32(ctx, 31, 0x14CD6Cu);
    ctx->pc = 0x14CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CD64u;
    // 0x14cd68: 0x8ce801b4  lw          $t0, 0x1B4($a3) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x14CD64u, 0x14CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD6Cu;
label_14cd6c:
    // 0x14cd6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14cd6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14cd70:
    // 0x14cd70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14cd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14cd74:
    // 0x14cd74: 0x3e00008  jr          $ra
label_14cd78:
    if (ctx->pc == 0x14CD78u) {
        ctx->pc = 0x14CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD74u;
        // 0x14cd78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD7Cu;
        goto label_fallthrough_0x14cd74;
    }
    ctx->pc = 0x14CD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD74u;
        // 0x14cd78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14cd74:
    ctx->pc = 0x14CD7Cu;
}
