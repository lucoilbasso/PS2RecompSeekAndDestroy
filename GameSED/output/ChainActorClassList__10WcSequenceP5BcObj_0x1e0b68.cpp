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

// Function: ChainActorClassList__10WcSequenceP5BcObj
// Address: 0x1e0b68 - 0x1e0be0
void ChainActorClassList__10WcSequenceP5BcObj_0x1e0b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChainActorClassList__10WcSequenceP5BcObj_0x1e0b68");
#endif

    switch (ctx->pc) {
        case 0x1e0b68u: goto label_1e0b68;
        case 0x1e0b6cu: goto label_1e0b6c;
        case 0x1e0b70u: goto label_1e0b70;
        case 0x1e0b74u: goto label_1e0b74;
        case 0x1e0b78u: goto label_1e0b78;
        case 0x1e0b7cu: goto label_1e0b7c;
        case 0x1e0b80u: goto label_1e0b80;
        case 0x1e0b84u: goto label_1e0b84;
        case 0x1e0b88u: goto label_1e0b88;
        case 0x1e0b8cu: goto label_1e0b8c;
        case 0x1e0b90u: goto label_1e0b90;
        case 0x1e0b94u: goto label_1e0b94;
        case 0x1e0b98u: goto label_1e0b98;
        case 0x1e0b9cu: goto label_1e0b9c;
        case 0x1e0ba0u: goto label_1e0ba0;
        case 0x1e0ba4u: goto label_1e0ba4;
        case 0x1e0ba8u: goto label_1e0ba8;
        case 0x1e0bacu: goto label_1e0bac;
        case 0x1e0bb0u: goto label_1e0bb0;
        case 0x1e0bb4u: goto label_1e0bb4;
        case 0x1e0bb8u: goto label_1e0bb8;
        case 0x1e0bbcu: goto label_1e0bbc;
        case 0x1e0bc0u: goto label_1e0bc0;
        case 0x1e0bc4u: goto label_1e0bc4;
        case 0x1e0bc8u: goto label_1e0bc8;
        case 0x1e0bccu: goto label_1e0bcc;
        case 0x1e0bd0u: goto label_1e0bd0;
        case 0x1e0bd4u: goto label_1e0bd4;
        case 0x1e0bd8u: goto label_1e0bd8;
        case 0x1e0bdcu: goto label_1e0bdc;
        default: break;
    }

    ctx->pc = 0x1e0b68u;

label_1e0b68:
    // 0x1e0b68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e0b6c:
    // 0x1e0b6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e0b70:
    // 0x1e0b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e0b74:
    // 0x1e0b74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e0b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e0b78:
    // 0x1e0b78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e0b78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e0b7c:
    // 0x1e0b7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e0b80:
    // 0x1e0b80: 0xc0684de  jal         func_1A1378
label_1e0b84:
    if (ctx->pc == 0x1E0B84u) {
        ctx->pc = 0x1E0B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B80u;
        // 0x1e0b84: 0x8e04007c  lw          $a0, 0x7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B88u;
        goto label_1e0b88;
    }
    ctx->pc = 0x1E0B80u;
    SET_GPR_U32(ctx, 31, 0x1E0B88u);
    ctx->pc = 0x1E0B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0B80u;
    // 0x1e0b84: 0x8e04007c  lw          $a0, 0x7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1378u, 0x1E0B80u, 0x1E0B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0B88u;
label_1e0b88:
    // 0x1e0b88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e0b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e0b8c:
    // 0x1e0b8c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1e0b90:
    if (ctx->pc == 0x1E0B90u) {
        ctx->pc = 0x1E0B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B8Cu;
        // 0x1e0b90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B94u;
        goto label_1e0b94;
    }
    ctx->pc = 0x1E0B8Cu;
    {
        const bool branch_taken_0x1e0b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B8Cu;
        // 0x1e0b90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b8c) {
            ctx->pc = 0x1E0BC8u;
            goto label_1e0bc8;
        }
    }
    ctx->pc = 0x1E0B94u;
label_1e0b94:
    // 0x1e0b94: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e0b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e0b98:
    // 0x1e0b98: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1e0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1e0b9c:
    // 0x1e0b9c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1e0b9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e0ba0:
    // 0x1e0ba0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e0ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e0ba4:
    // 0x1e0ba4: 0x60f809  jalr        $v1
label_1e0ba8:
    if (ctx->pc == 0x1E0BA8u) {
        ctx->pc = 0x1E0BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BA4u;
        // 0x1e0ba8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0BACu;
        goto label_1e0bac;
    }
    ctx->pc = 0x1E0BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0BACu);
        ctx->pc = 0x1E0BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BA4u;
        // 0x1e0ba8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0BA4u, 0x1E0BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0BACu;
label_1e0bac:
    // 0x1e0bac: 0x2604007c  addiu       $a0, $s0, 0x7C
    ctx->pc = 0x1e0bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
label_1e0bb0:
    // 0x1e0bb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e0bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e0bb4:
    // 0x1e0bb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e0bb8:
    // 0x1e0bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0bbc:
    // 0x1e0bbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0bc0:
    // 0x1e0bc0: 0x80683b6  j           func_1A0ED8
label_1e0bc4:
    if (ctx->pc == 0x1E0BC4u) {
        ctx->pc = 0x1E0BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BC0u;
        // 0x1e0bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0BC8u;
        goto label_1e0bc8;
    }
    ctx->pc = 0x1E0BC0u;
    ctx->pc = 0x1E0BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0BC0u;
    // 0x1e0bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    BObjListChainObject__FPP8BObjListP5BcObj_0x1a0ed8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E0BC8u;
label_1e0bc8:
    // 0x1e0bc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0bcc:
    // 0x1e0bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0bd0:
    // 0x1e0bd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e0bd4:
    // 0x1e0bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0bd8:
    // 0x1e0bd8: 0x3e00008  jr          $ra
label_1e0bdc:
    if (ctx->pc == 0x1E0BDCu) {
        ctx->pc = 0x1E0BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BD8u;
        // 0x1e0bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0BE0u;
        goto label_fallthrough_0x1e0bd8;
    }
    ctx->pc = 0x1E0BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BD8u;
        // 0x1e0bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e0bd8:
    ctx->pc = 0x1E0BE0u;
}
