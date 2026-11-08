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

// Function: DrawFunc__9ApcPtcSplP8WcEntity
// Address: 0x12c008 - 0x12c0a4
void DrawFunc__9ApcPtcSplP8WcEntity_0x12c008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFunc__9ApcPtcSplP8WcEntity_0x12c008");
#endif

    switch (ctx->pc) {
        case 0x12c008u: goto label_12c008;
        case 0x12c00cu: goto label_12c00c;
        case 0x12c010u: goto label_12c010;
        case 0x12c014u: goto label_12c014;
        case 0x12c018u: goto label_12c018;
        case 0x12c01cu: goto label_12c01c;
        case 0x12c020u: goto label_12c020;
        case 0x12c024u: goto label_12c024;
        case 0x12c028u: goto label_12c028;
        case 0x12c02cu: goto label_12c02c;
        case 0x12c030u: goto label_12c030;
        case 0x12c034u: goto label_12c034;
        case 0x12c038u: goto label_12c038;
        case 0x12c03cu: goto label_12c03c;
        case 0x12c040u: goto label_12c040;
        case 0x12c044u: goto label_12c044;
        case 0x12c048u: goto label_12c048;
        case 0x12c04cu: goto label_12c04c;
        case 0x12c050u: goto label_12c050;
        case 0x12c054u: goto label_12c054;
        case 0x12c058u: goto label_12c058;
        case 0x12c05cu: goto label_12c05c;
        case 0x12c060u: goto label_12c060;
        case 0x12c064u: goto label_12c064;
        case 0x12c068u: goto label_12c068;
        case 0x12c06cu: goto label_12c06c;
        case 0x12c070u: goto label_12c070;
        case 0x12c074u: goto label_12c074;
        case 0x12c078u: goto label_12c078;
        case 0x12c07cu: goto label_12c07c;
        case 0x12c080u: goto label_12c080;
        case 0x12c084u: goto label_12c084;
        case 0x12c088u: goto label_12c088;
        case 0x12c08cu: goto label_12c08c;
        case 0x12c090u: goto label_12c090;
        case 0x12c094u: goto label_12c094;
        case 0x12c098u: goto label_12c098;
        case 0x12c09cu: goto label_12c09c;
        case 0x12c0a0u: goto label_12c0a0;
        default: break;
    }

    ctx->pc = 0x12c008u;

label_12c008:
    // 0x12c008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12c008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_12c00c:
    // 0x12c00c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12c00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_12c010:
    // 0x12c010: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12c010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12c014:
    // 0x12c014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12c018:
    // 0x12c018: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12c01c:
    // 0x12c01c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12c01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_12c020:
    // 0x12c020: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12c020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_12c024:
    // 0x12c024: 0x8e500160  lw          $s0, 0x160($s2)
    ctx->pc = 0x12c024u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_12c028:
    // 0x12c028: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_12c02c:
    if (ctx->pc == 0x12C02Cu) {
        ctx->pc = 0x12C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C028u;
        // 0x12c02c: 0x8cb10164  lw          $s1, 0x164($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C030u;
        goto label_12c030;
    }
    ctx->pc = 0x12C028u;
    {
        const bool branch_taken_0x12c028 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C028u;
        // 0x12c02c: 0x8cb10164  lw          $s1, 0x164($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c028) {
            ctx->pc = 0x12C088u;
            goto label_12c088;
        }
    }
    ctx->pc = 0x12C030u;
label_12c030:
    // 0x12c030: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x12c030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_12c034:
    // 0x12c034: 0x24537d60  addiu       $s3, $v0, 0x7D60
    ctx->pc = 0x12c034u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32096));
label_12c038:
    // 0x12c038: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x12c038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_12c03c:
    // 0x12c03c: 0x0  nop
    ctx->pc = 0x12c03cu;
    // NOP
label_12c040:
    // 0x12c040: 0x2c62000d  sltiu       $v0, $v1, 0xD
    ctx->pc = 0x12c040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_12c044:
    // 0x12c044: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_12c048:
    if (ctx->pc == 0x12C048u) {
        ctx->pc = 0x12C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C044u;
        // 0x12c048: 0xa600002e  sh          $zero, 0x2E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C04Cu;
        goto label_12c04c;
    }
    ctx->pc = 0x12C044u;
    {
        const bool branch_taken_0x12c044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c044) {
            ctx->pc = 0x12C048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C044u;
            // 0x12c048: 0xa600002e  sh          $zero, 0x2E($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C07Cu;
            goto label_12c07c;
        }
    }
    ctx->pc = 0x12C04Cu;
label_12c04c:
    // 0x12c04c: 0x9602002e  lhu         $v0, 0x2E($s0)
    ctx->pc = 0x12c04cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
label_12c050:
    // 0x12c050: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_12c054:
    if (ctx->pc == 0x12C054u) {
        ctx->pc = 0x12C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C050u;
        // 0x12c054: 0xa600002e  sh          $zero, 0x2E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C058u;
        goto label_12c058;
    }
    ctx->pc = 0x12C050u;
    {
        const bool branch_taken_0x12c050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c050) {
            ctx->pc = 0x12C054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C050u;
            // 0x12c054: 0xa600002e  sh          $zero, 0x2E($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C07Cu;
            goto label_12c07c;
        }
    }
    ctx->pc = 0x12C058u;
label_12c058:
    // 0x12c058: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12c058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_12c05c:
    // 0x12c05c: 0xc62c0180  lwc1        $f12, 0x180($s1)
    ctx->pc = 0x12c05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12c060:
    // 0x12c060: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x12c060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_12c064:
    // 0x12c064: 0xc62d017c  lwc1        $f13, 0x17C($s1)
    ctx->pc = 0x12c064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_12c068:
    // 0x12c068: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12c068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12c06c:
    // 0x12c06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12c070:
    // 0x12c070: 0x40f809  jalr        $v0
label_12c074:
    if (ctx->pc == 0x12C074u) {
        ctx->pc = 0x12C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C070u;
        // 0x12c074: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C078u;
        goto label_12c078;
    }
    ctx->pc = 0x12C070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12C078u);
        ctx->pc = 0x12C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C070u;
        // 0x12c074: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C070u, 0x12C078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12C078u;
label_12c078:
    // 0x12c078: 0xa600002e  sh          $zero, 0x2E($s0)
    ctx->pc = 0x12c078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 0));
label_12c07c:
    // 0x12c07c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x12c07cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_12c080:
    // 0x12c080: 0x5600ffef  bnel        $s0, $zero, . + 4 + (-0x11 << 2)
label_12c084:
    if (ctx->pc == 0x12C084u) {
        ctx->pc = 0x12C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C080u;
        // 0x12c084: 0x8e030114  lw          $v1, 0x114($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C088u;
        goto label_12c088;
    }
    ctx->pc = 0x12C080u;
    {
        const bool branch_taken_0x12c080 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c080) {
            ctx->pc = 0x12C084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C080u;
            // 0x12c084: 0x8e030114  lw          $v1, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c040;
        }
    }
    ctx->pc = 0x12C088u;
label_12c088:
    // 0x12c088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12c08c:
    // 0x12c08c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c08cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12c090:
    // 0x12c090: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12c090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12c094:
    // 0x12c094: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12c094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12c098:
    // 0x12c098: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12c098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12c09c:
    // 0x12c09c: 0x3e00008  jr          $ra
label_12c0a0:
    if (ctx->pc == 0x12C0A0u) {
        ctx->pc = 0x12C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C09Cu;
        // 0x12c0a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C0A4u;
        goto label_fallthrough_0x12c09c;
    }
    ctx->pc = 0x12C09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C09Cu;
        // 0x12c0a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12c09c:
    ctx->pc = 0x12C0A4u;
}
