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

// Function: WEntityClearSubEntity__FP8WcEntity
// Address: 0x185fc0 - 0x186050
void WEntityClearSubEntity__FP8WcEntity_0x185fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WEntityClearSubEntity__FP8WcEntity_0x185fc0");
#endif

    switch (ctx->pc) {
        case 0x185fc0u: goto label_185fc0;
        case 0x185fc4u: goto label_185fc4;
        case 0x185fc8u: goto label_185fc8;
        case 0x185fccu: goto label_185fcc;
        case 0x185fd0u: goto label_185fd0;
        case 0x185fd4u: goto label_185fd4;
        case 0x185fd8u: goto label_185fd8;
        case 0x185fdcu: goto label_185fdc;
        case 0x185fe0u: goto label_185fe0;
        case 0x185fe4u: goto label_185fe4;
        case 0x185fe8u: goto label_185fe8;
        case 0x185fecu: goto label_185fec;
        case 0x185ff0u: goto label_185ff0;
        case 0x185ff4u: goto label_185ff4;
        case 0x185ff8u: goto label_185ff8;
        case 0x185ffcu: goto label_185ffc;
        case 0x186000u: goto label_186000;
        case 0x186004u: goto label_186004;
        case 0x186008u: goto label_186008;
        case 0x18600cu: goto label_18600c;
        case 0x186010u: goto label_186010;
        case 0x186014u: goto label_186014;
        case 0x186018u: goto label_186018;
        case 0x18601cu: goto label_18601c;
        case 0x186020u: goto label_186020;
        case 0x186024u: goto label_186024;
        case 0x186028u: goto label_186028;
        case 0x18602cu: goto label_18602c;
        case 0x186030u: goto label_186030;
        case 0x186034u: goto label_186034;
        case 0x186038u: goto label_186038;
        case 0x18603cu: goto label_18603c;
        case 0x186040u: goto label_186040;
        case 0x186044u: goto label_186044;
        case 0x186048u: goto label_186048;
        case 0x18604cu: goto label_18604c;
        default: break;
    }

    ctx->pc = 0x185fc0u;

label_185fc0:
    // 0x185fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x185fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_185fc4:
    // 0x185fc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x185fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_185fc8:
    // 0x185fc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x185fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_185fcc:
    // 0x185fcc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x185fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_185fd0:
    // 0x185fd0: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x185fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_185fd4:
    // 0x185fd4: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_185fd8:
    if (ctx->pc == 0x185FD8u) {
        ctx->pc = 0x185FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FD4u;
        // 0x185fd8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185FDCu;
        goto label_185fdc;
    }
    ctx->pc = 0x185FD4u;
    {
        const bool branch_taken_0x185fd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x185FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FD4u;
        // 0x185fd8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185fd4) {
            ctx->pc = 0x18603Cu;
            goto label_18603c;
        }
    }
    ctx->pc = 0x185FDCu;
label_185fdc:
    // 0x185fdc: 0x3c110800  lui         $s1, 0x800
    ctx->pc = 0x185fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)2048 << 16));
label_185fe0:
    // 0x185fe0: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x185fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_185fe4:
    // 0x185fe4: 0x0  nop
    ctx->pc = 0x185fe4u;
    // NOP
label_185fe8:
    // 0x185fe8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x185fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_185fec:
    // 0x185fec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_185ff0:
    if (ctx->pc == 0x185FF0u) {
        ctx->pc = 0x185FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FECu;
        // 0x185ff0: 0x8cd0001c  lw          $s0, 0x1C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185FF4u;
        goto label_185ff4;
    }
    ctx->pc = 0x185FECu;
    {
        const bool branch_taken_0x185fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FECu;
        // 0x185ff0: 0x8cd0001c  lw          $s0, 0x1C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185fec) {
            ctx->pc = 0x186018u;
            goto label_186018;
        }
    }
    ctx->pc = 0x185FF4u;
label_185ff4:
    // 0x185ff4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x185ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_185ff8:
    // 0x185ff8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185ffc:
    // 0x185ffc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x185ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_186000:
    // 0x186000: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x186000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_186004:
    // 0x186004: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x186004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_186008:
    // 0x186008: 0x60f809  jalr        $v1
label_18600c:
    if (ctx->pc == 0x18600Cu) {
        ctx->pc = 0x18600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186008u;
        // 0x18600c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186010u;
        goto label_186010;
    }
    ctx->pc = 0x186008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x186010u);
        ctx->pc = 0x18600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186008u;
        // 0x18600c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186008u, 0x186010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186010u;
label_186010:
    // 0x186010: 0x10000008  b           . + 4 + (0x8 << 2)
label_186014:
    if (ctx->pc == 0x186014u) {
        ctx->pc = 0x186014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186010u;
        // 0x186014: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186018u;
        goto label_186018;
    }
    ctx->pc = 0x186010u;
    {
        const bool branch_taken_0x186010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186010u;
        // 0x186014: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186010) {
            ctx->pc = 0x186034u;
            goto label_186034;
        }
    }
    ctx->pc = 0x186018u;
label_186018:
    // 0x186018: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x186018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_18601c:
    // 0x18601c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x18601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_186020:
    // 0x186020: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x186020u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_186024:
    // 0x186024: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x186024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_186028:
    // 0x186028: 0x60f809  jalr        $v1
label_18602c:
    if (ctx->pc == 0x18602Cu) {
        ctx->pc = 0x18602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186028u;
        // 0x18602c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186030u;
        goto label_186030;
    }
    ctx->pc = 0x186028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x186030u);
        ctx->pc = 0x18602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186028u;
        // 0x18602c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186028u, 0x186030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186030u;
label_186030:
    // 0x186030: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x186030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186034:
    // 0x186034: 0x5600ffec  bnel        $s0, $zero, . + 4 + (-0x14 << 2)
label_186038:
    if (ctx->pc == 0x186038u) {
        ctx->pc = 0x186038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186034u;
        // 0x186038: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18603Cu;
        goto label_18603c;
    }
    ctx->pc = 0x186034u;
    {
        const bool branch_taken_0x186034 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x186034) {
            ctx->pc = 0x186038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186034u;
            // 0x186038: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185fe8;
        }
    }
    ctx->pc = 0x18603Cu;
label_18603c:
    // 0x18603c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18603cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186040:
    // 0x186040: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x186040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_186044:
    // 0x186044: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_186048:
    // 0x186048: 0x3e00008  jr          $ra
label_18604c:
    if (ctx->pc == 0x18604Cu) {
        ctx->pc = 0x18604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186048u;
        // 0x18604c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186050u;
        goto label_fallthrough_0x186048;
    }
    ctx->pc = 0x186048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186048u;
        // 0x18604c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x186048:
    ctx->pc = 0x186050u;
}
