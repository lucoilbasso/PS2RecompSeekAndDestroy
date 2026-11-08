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

// Function: WSequenceJobChainExec__FP10WcSequenceP5BcJobi
// Address: 0x199af8 - 0x199b84
void WSequenceJobChainExec__FP10WcSequenceP5BcJobi_0x199af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSequenceJobChainExec__FP10WcSequenceP5BcJobi_0x199af8");
#endif

    switch (ctx->pc) {
        case 0x199af8u: goto label_199af8;
        case 0x199afcu: goto label_199afc;
        case 0x199b00u: goto label_199b00;
        case 0x199b04u: goto label_199b04;
        case 0x199b08u: goto label_199b08;
        case 0x199b0cu: goto label_199b0c;
        case 0x199b10u: goto label_199b10;
        case 0x199b14u: goto label_199b14;
        case 0x199b18u: goto label_199b18;
        case 0x199b1cu: goto label_199b1c;
        case 0x199b20u: goto label_199b20;
        case 0x199b24u: goto label_199b24;
        case 0x199b28u: goto label_199b28;
        case 0x199b2cu: goto label_199b2c;
        case 0x199b30u: goto label_199b30;
        case 0x199b34u: goto label_199b34;
        case 0x199b38u: goto label_199b38;
        case 0x199b3cu: goto label_199b3c;
        case 0x199b40u: goto label_199b40;
        case 0x199b44u: goto label_199b44;
        case 0x199b48u: goto label_199b48;
        case 0x199b4cu: goto label_199b4c;
        case 0x199b50u: goto label_199b50;
        case 0x199b54u: goto label_199b54;
        case 0x199b58u: goto label_199b58;
        case 0x199b5cu: goto label_199b5c;
        case 0x199b60u: goto label_199b60;
        case 0x199b64u: goto label_199b64;
        case 0x199b68u: goto label_199b68;
        case 0x199b6cu: goto label_199b6c;
        case 0x199b70u: goto label_199b70;
        case 0x199b74u: goto label_199b74;
        case 0x199b78u: goto label_199b78;
        case 0x199b7cu: goto label_199b7c;
        case 0x199b80u: goto label_199b80;
        default: break;
    }

    ctx->pc = 0x199af8u;

label_199af8:
    // 0x199af8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_199afc:
    // 0x199afc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x199afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_199b00:
    // 0x199b00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x199b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_199b04:
    // 0x199b04: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x199b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_199b08:
    // 0x199b08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_199b0c:
    // 0x199b0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x199b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_199b10:
    // 0x199b10: 0xc05dd1a  jal         func_177468
label_199b14:
    if (ctx->pc == 0x199B14u) {
        ctx->pc = 0x199B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B10u;
        // 0x199b14: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B18u;
        goto label_199b18;
    }
    ctx->pc = 0x199B10u;
    SET_GPR_U32(ctx, 31, 0x199B18u);
    ctx->pc = 0x199B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199B10u;
    // 0x199b14: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177468u, 0x199B10u, 0x199B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B18u;
label_199b18:
    // 0x199b18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x199b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199b1c:
    // 0x199b1c: 0x0  nop
    ctx->pc = 0x199b1cu;
    // NOP
label_199b20:
    // 0x199b20: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x199b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_199b24:
    // 0x199b24: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x199b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_199b28:
    // 0x199b28: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_199b2c:
    if (ctx->pc == 0x199B2Cu) {
        ctx->pc = 0x199B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B28u;
        // 0x199b2c: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B30u;
        goto label_199b30;
    }
    ctx->pc = 0x199B28u;
    {
        const bool branch_taken_0x199b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B28u;
        // 0x199b2c: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b28) {
            ctx->pc = 0x199B58u;
            goto label_199b58;
        }
    }
    ctx->pc = 0x199B30u;
label_199b30:
    // 0x199b30: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x199b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_199b34:
    // 0x199b34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_199b38:
    if (ctx->pc == 0x199B38u) {
        ctx->pc = 0x199B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B34u;
        // 0x199b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B3Cu;
        goto label_199b3c;
    }
    ctx->pc = 0x199B34u;
    {
        const bool branch_taken_0x199b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B34u;
        // 0x199b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b34) {
            ctx->pc = 0x199B50u;
            goto label_199b50;
        }
    }
    ctx->pc = 0x199B3Cu;
label_199b3c:
    // 0x199b3c: 0x40f809  jalr        $v0
label_199b40:
    if (ctx->pc == 0x199B40u) {
        ctx->pc = 0x199B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B3Cu;
        // 0x199b40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B44u;
        goto label_199b44;
    }
    ctx->pc = 0x199B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199B44u);
        ctx->pc = 0x199B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B3Cu;
        // 0x199b40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199B3Cu, 0x199B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199B44u;
label_199b44:
    // 0x199b44: 0x10000005  b           . + 4 + (0x5 << 2)
label_199b48:
    if (ctx->pc == 0x199B48u) {
        ctx->pc = 0x199B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B44u;
        // 0x199b48: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B4Cu;
        goto label_199b4c;
    }
    ctx->pc = 0x199B44u;
    {
        const bool branch_taken_0x199b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B44u;
        // 0x199b48: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b44) {
            ctx->pc = 0x199B5Cu;
            goto label_199b5c;
        }
    }
    ctx->pc = 0x199B4Cu;
label_199b4c:
    // 0x199b4c: 0x0  nop
    ctx->pc = 0x199b4cu;
    // NOP
label_199b50:
    // 0x199b50: 0xc0685ca  jal         func_1A1728
label_199b54:
    if (ctx->pc == 0x199B54u) {
        ctx->pc = 0x199B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B50u;
        // 0x199b54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B58u;
        goto label_199b58;
    }
    ctx->pc = 0x199B50u;
    SET_GPR_U32(ctx, 31, 0x199B58u);
    ctx->pc = 0x199B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199B50u;
    // 0x199b54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1728u, 0x199B50u, 0x199B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B58u;
label_199b58:
    // 0x199b58: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x199b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_199b5c:
    // 0x199b5c: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x199b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_199b60:
    // 0x199b60: 0x5600ffef  bnel        $s0, $zero, . + 4 + (-0x11 << 2)
label_199b64:
    if (ctx->pc == 0x199B64u) {
        ctx->pc = 0x199B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B60u;
        // 0x199b64: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B68u;
        goto label_199b68;
    }
    ctx->pc = 0x199B60u;
    {
        const bool branch_taken_0x199b60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x199b60) {
            ctx->pc = 0x199B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199B60u;
            // 0x199b64: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199b20;
        }
    }
    ctx->pc = 0x199B68u;
label_199b68:
    // 0x199b68: 0xc05dd1c  jal         func_177470
label_199b6c:
    if (ctx->pc == 0x199B6Cu) {
        ctx->pc = 0x199B70u;
        goto label_199b70;
    }
    ctx->pc = 0x199B68u;
    SET_GPR_U32(ctx, 31, 0x199B70u);
    ctx->pc = 0x177470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177470u, 0x199B68u, 0x199B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B70u;
label_199b70:
    // 0x199b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_199b74:
    // 0x199b74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x199b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_199b78:
    // 0x199b78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x199b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_199b7c:
    // 0x199b7c: 0x3e00008  jr          $ra
label_199b80:
    if (ctx->pc == 0x199B80u) {
        ctx->pc = 0x199B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B7Cu;
        // 0x199b80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B84u;
        goto label_fallthrough_0x199b7c;
    }
    ctx->pc = 0x199B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B7Cu;
        // 0x199b80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x199b7c:
    ctx->pc = 0x199B84u;
}
