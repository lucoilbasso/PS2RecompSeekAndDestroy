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

// Function: WCdManFileCacheSearch__FPc
// Address: 0x178ad8 - 0x178b98
void WCdManFileCacheSearch__FPc_0x178ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WCdManFileCacheSearch__FPc_0x178ad8");
#endif

    switch (ctx->pc) {
        case 0x178b18u: goto label_178b18;
        case 0x178b28u: goto label_178b28;
        default: break;
    }

    ctx->pc = 0x178ad8u;

    // 0x178ad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178adc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x178adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x178ae0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178ae4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178ae8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x178ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178aec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178af0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x178af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x178af4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x178af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x178af8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x178af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x178afc: 0x8c530024  lw          $s3, 0x24($v0)
    ctx->pc = 0x178afcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x178b00: 0x26701048  addiu       $s0, $s3, 0x1048
    ctx->pc = 0x178b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4168));
    // 0x178b04: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x178b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x178b08: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x178B08u;
    {
        const bool branch_taken_0x178b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B08u;
        // 0x178b0c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b08) {
            ctx->pc = 0x178B4Cu;
            goto label_178b4c;
        }
    }
    ctx->pc = 0x178B10u;
    // 0x178b10: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x178b10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178b18:
    // 0x178b18: 0x26100048  addiu       $s0, $s0, 0x48
    ctx->pc = 0x178b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x178b1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x178b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b20: 0xc067210  jal         func_19C840
    ctx->pc = 0x178B20u;
    SET_GPR_U32(ctx, 31, 0x178B28u);
    ctx->pc = 0x178B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B20u;
    // 0x178b24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C840u, 0x178B20u, 0x178B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B28u;
label_178b28:
    // 0x178b28: 0x10540013  beq         $v0, $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x178B28u;
    {
        const bool branch_taken_0x178b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x178B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B28u;
        // 0x178b2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b28) {
            ctx->pc = 0x178B78u;
            goto label_178b78;
        }
    }
    ctx->pc = 0x178B30u;
    // 0x178b30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x178b30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x178b34: 0x2a220028  slti        $v0, $s1, 0x28
    ctx->pc = 0x178b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x178b38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x178B38u;
    {
        const bool branch_taken_0x178b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B38u;
        // 0x178b3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b38) {
            ctx->pc = 0x178B50u;
            goto label_178b50;
        }
    }
    ctx->pc = 0x178B40u;
    // 0x178b40: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x178b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x178b44: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x178B44u;
    {
        const bool branch_taken_0x178b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B44u;
        // 0x178b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b44) {
            ctx->pc = 0x178B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178b18;
        }
    }
    ctx->pc = 0x178B4Cu;
label_178b4c:
    // 0x178b4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x178b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_178b50:
    // 0x178b50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x178b50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178b54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x178b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178b58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178b60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178b60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178b64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x178b64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178b68: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x178b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x178b6c: 0x805e09a  j           func_178268
    ctx->pc = 0x178B6Cu;
    ctx->pc = 0x178B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B6Cu;
    // 0x178b70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178268u;
    CdCacheAdd__7WcCdManPc_0x178268(rdram, ctx, runtime); return;
    ctx->pc = 0x178B74u;
    // 0x178b74: 0x0  nop
    ctx->pc = 0x178b74u;
    // NOP
label_178b78:
    // 0x178b78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178b7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178b80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178b80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178b84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x178b84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178b88: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x178b88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178b8c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x178b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x178b90: 0x3e00008  jr          $ra
    ctx->pc = 0x178B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B90u;
        // 0x178b94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178B98u;
}
