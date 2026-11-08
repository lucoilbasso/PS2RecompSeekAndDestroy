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

// Function: TankOptionDispChange__9ApcCqtanki
// Address: 0x164ac8 - 0x164b54
void TankOptionDispChange__9ApcCqtanki_0x164ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankOptionDispChange__9ApcCqtanki_0x164ac8");
#endif

    switch (ctx->pc) {
        case 0x164ac8u: goto label_164ac8;
        case 0x164accu: goto label_164acc;
        case 0x164ad0u: goto label_164ad0;
        case 0x164ad4u: goto label_164ad4;
        case 0x164ad8u: goto label_164ad8;
        case 0x164adcu: goto label_164adc;
        case 0x164ae0u: goto label_164ae0;
        case 0x164ae4u: goto label_164ae4;
        case 0x164ae8u: goto label_164ae8;
        case 0x164aecu: goto label_164aec;
        case 0x164af0u: goto label_164af0;
        case 0x164af4u: goto label_164af4;
        case 0x164af8u: goto label_164af8;
        case 0x164afcu: goto label_164afc;
        case 0x164b00u: goto label_164b00;
        case 0x164b04u: goto label_164b04;
        case 0x164b08u: goto label_164b08;
        case 0x164b0cu: goto label_164b0c;
        case 0x164b10u: goto label_164b10;
        case 0x164b14u: goto label_164b14;
        case 0x164b18u: goto label_164b18;
        case 0x164b1cu: goto label_164b1c;
        case 0x164b20u: goto label_164b20;
        case 0x164b24u: goto label_164b24;
        case 0x164b28u: goto label_164b28;
        case 0x164b2cu: goto label_164b2c;
        case 0x164b30u: goto label_164b30;
        case 0x164b34u: goto label_164b34;
        case 0x164b38u: goto label_164b38;
        case 0x164b3cu: goto label_164b3c;
        case 0x164b40u: goto label_164b40;
        case 0x164b44u: goto label_164b44;
        case 0x164b48u: goto label_164b48;
        case 0x164b4cu: goto label_164b4c;
        case 0x164b50u: goto label_164b50;
        default: break;
    }

    ctx->pc = 0x164ac8u;

label_164ac8:
    // 0x164ac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_164acc:
    // 0x164acc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x164accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_164ad0:
    // 0x164ad0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x164ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_164ad4:
    // 0x164ad4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x164ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_164ad8:
    // 0x164ad8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x164ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_164adc:
    // 0x164adc: 0x26300c64  addiu       $s0, $s1, 0xC64
    ctx->pc = 0x164adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3172));
label_164ae0:
    // 0x164ae0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x164ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_164ae4:
    // 0x164ae4: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x164ae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_164ae8:
    // 0x164ae8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x164ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_164aec:
    // 0x164aec: 0x5982b  sltu        $s3, $zero, $a1
    ctx->pc = 0x164aecu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_164af0:
    // 0x164af0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x164af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_164af4:
    // 0x164af4: 0x0  nop
    ctx->pc = 0x164af4u;
    // NOP
label_164af8:
    // 0x164af8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x164af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_164afc:
    // 0x164afc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_164b00:
    if (ctx->pc == 0x164B00u) {
        ctx->pc = 0x164B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AFCu;
        // 0x164b00: 0x22180  sll         $a0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164B04u;
        goto label_164b04;
    }
    ctx->pc = 0x164AFCu;
    {
        const bool branch_taken_0x164afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AFCu;
        // 0x164b00: 0x22180  sll         $a0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164afc) {
            ctx->pc = 0x164B2Cu;
            goto label_164b2c;
        }
    }
    ctx->pc = 0x164B04u;
label_164b04:
    // 0x164b04: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x164b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_164b08:
    // 0x164b08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x164b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_164b0c:
    // 0x164b0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x164b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_164b10:
    // 0x164b10: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x164b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_164b14:
    // 0x164b14: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x164b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_164b18:
    // 0x164b18: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x164b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_164b1c:
    // 0x164b1c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x164b1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_164b20:
    // 0x164b20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x164b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_164b24:
    // 0x164b24: 0x60f809  jalr        $v1
label_164b28:
    if (ctx->pc == 0x164B28u) {
        ctx->pc = 0x164B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B24u;
        // 0x164b28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164B2Cu;
        goto label_164b2c;
    }
    ctx->pc = 0x164B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x164B2Cu);
        ctx->pc = 0x164B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B24u;
        // 0x164b28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164B24u, 0x164B2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164B2Cu;
label_164b2c:
    // 0x164b2c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x164b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_164b30:
    // 0x164b30: 0x643fff1  bgezl       $s2, . + 4 + (-0xF << 2)
label_164b34:
    if (ctx->pc == 0x164B34u) {
        ctx->pc = 0x164B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B30u;
        // 0x164b34: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164B38u;
        goto label_164b38;
    }
    ctx->pc = 0x164B30u;
    {
        const bool branch_taken_0x164b30 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x164b30) {
            ctx->pc = 0x164B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164B30u;
            // 0x164b34: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164af8;
        }
    }
    ctx->pc = 0x164B38u;
label_164b38:
    // 0x164b38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164b3c:
    // 0x164b3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_164b40:
    // 0x164b40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_164b44:
    // 0x164b44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x164b44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_164b48:
    // 0x164b48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x164b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_164b4c:
    // 0x164b4c: 0x3e00008  jr          $ra
label_164b50:
    if (ctx->pc == 0x164B50u) {
        ctx->pc = 0x164B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B4Cu;
        // 0x164b50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164B54u;
        goto label_fallthrough_0x164b4c;
    }
    ctx->pc = 0x164B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B4Cu;
        // 0x164b50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x164b4c:
    ctx->pc = 0x164B54u;
}
