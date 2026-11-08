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

// Function: ImagePageInfoClose__9ApcObjRsc
// Address: 0x1d7030 - 0x1d70e8
void ImagePageInfoClose__9ApcObjRsc_0x1d7030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ImagePageInfoClose__9ApcObjRsc_0x1d7030");
#endif

    switch (ctx->pc) {
        case 0x1d7030u: goto label_1d7030;
        case 0x1d7034u: goto label_1d7034;
        case 0x1d7038u: goto label_1d7038;
        case 0x1d703cu: goto label_1d703c;
        case 0x1d7040u: goto label_1d7040;
        case 0x1d7044u: goto label_1d7044;
        case 0x1d7048u: goto label_1d7048;
        case 0x1d704cu: goto label_1d704c;
        case 0x1d7050u: goto label_1d7050;
        case 0x1d7054u: goto label_1d7054;
        case 0x1d7058u: goto label_1d7058;
        case 0x1d705cu: goto label_1d705c;
        case 0x1d7060u: goto label_1d7060;
        case 0x1d7064u: goto label_1d7064;
        case 0x1d7068u: goto label_1d7068;
        case 0x1d706cu: goto label_1d706c;
        case 0x1d7070u: goto label_1d7070;
        case 0x1d7074u: goto label_1d7074;
        case 0x1d7078u: goto label_1d7078;
        case 0x1d707cu: goto label_1d707c;
        case 0x1d7080u: goto label_1d7080;
        case 0x1d7084u: goto label_1d7084;
        case 0x1d7088u: goto label_1d7088;
        case 0x1d708cu: goto label_1d708c;
        case 0x1d7090u: goto label_1d7090;
        case 0x1d7094u: goto label_1d7094;
        case 0x1d7098u: goto label_1d7098;
        case 0x1d709cu: goto label_1d709c;
        case 0x1d70a0u: goto label_1d70a0;
        case 0x1d70a4u: goto label_1d70a4;
        case 0x1d70a8u: goto label_1d70a8;
        case 0x1d70acu: goto label_1d70ac;
        case 0x1d70b0u: goto label_1d70b0;
        case 0x1d70b4u: goto label_1d70b4;
        case 0x1d70b8u: goto label_1d70b8;
        case 0x1d70bcu: goto label_1d70bc;
        case 0x1d70c0u: goto label_1d70c0;
        case 0x1d70c4u: goto label_1d70c4;
        case 0x1d70c8u: goto label_1d70c8;
        case 0x1d70ccu: goto label_1d70cc;
        case 0x1d70d0u: goto label_1d70d0;
        case 0x1d70d4u: goto label_1d70d4;
        case 0x1d70d8u: goto label_1d70d8;
        case 0x1d70dcu: goto label_1d70dc;
        case 0x1d70e0u: goto label_1d70e0;
        case 0x1d70e4u: goto label_1d70e4;
        default: break;
    }

    ctx->pc = 0x1d7030u;

label_1d7030:
    // 0x1d7030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d7034:
    // 0x1d7034: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d7034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d7038:
    // 0x1d7038: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d7038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d703c:
    // 0x1d703c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d703cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1d7040:
    // 0x1d7040: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d7044:
    // 0x1d7044: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d7048:
    // 0x1d7048: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d7048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d704c:
    // 0x1d704c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1d704cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1d7050:
    // 0x1d7050: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
label_1d7054:
    if (ctx->pc == 0x1D7054u) {
        ctx->pc = 0x1D7054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7050u;
        // 0x1d7054: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7058u;
        goto label_1d7058;
    }
    ctx->pc = 0x1D7050u;
    {
        const bool branch_taken_0x1d7050 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D7054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7050u;
        // 0x1d7054: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7050) {
            ctx->pc = 0x1D70C0u;
            goto label_1d70c0;
        }
    }
    ctx->pc = 0x1D7058u;
label_1d7058:
    // 0x1d7058: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1d7058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1d705c:
    // 0x1d705c: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1d705cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1d7060:
    // 0x1d7060: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d7060u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d7064:
    // 0x1d7064: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1d7064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d7068:
    // 0x1d7068: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1d7068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d706c:
    // 0x1d706c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1d706cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d7070:
    // 0x1d7070: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d7074:
    if (ctx->pc == 0x1D7074u) {
        ctx->pc = 0x1D7074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7070u;
        // 0x1d7074: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7078u;
        goto label_1d7078;
    }
    ctx->pc = 0x1D7070u;
    {
        const bool branch_taken_0x1d7070 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7070u;
        // 0x1d7074: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7070) {
            ctx->pc = 0x1D7080u;
            goto label_1d7080;
        }
    }
    ctx->pc = 0x1D7078u;
label_1d7078:
    // 0x1d7078: 0xc067f04  jal         func_19FC10
label_1d707c:
    if (ctx->pc == 0x1D707Cu) {
        ctx->pc = 0x1D707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7078u;
        // 0x1d707c: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7080u;
        goto label_1d7080;
    }
    ctx->pc = 0x1D7078u;
    SET_GPR_U32(ctx, 31, 0x1D7080u);
    ctx->pc = 0x1D707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7078u;
    // 0x1d707c: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D7078u, 0x1D7080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7080u;
label_1d7080:
    // 0x1d7080: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1d7080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d7084:
    // 0x1d7084: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d7088:
    if (ctx->pc == 0x1D7088u) {
        ctx->pc = 0x1D7088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7084u;
        // 0x1d7088: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D708Cu;
        goto label_1d708c;
    }
    ctx->pc = 0x1D7084u;
    {
        const bool branch_taken_0x1d7084 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7084u;
        // 0x1d7088: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7084) {
            ctx->pc = 0x1D70A4u;
            goto label_1d70a4;
        }
    }
    ctx->pc = 0x1D708Cu;
label_1d708c:
    // 0x1d708c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d7090:
    // 0x1d7090: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d7094:
    // 0x1d7094: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d7094u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d7098:
    // 0x1d7098: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d7098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d709c:
    // 0x1d709c: 0x60f809  jalr        $v1
label_1d70a0:
    if (ctx->pc == 0x1D70A0u) {
        ctx->pc = 0x1D70A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D709Cu;
        // 0x1d70a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D70A4u;
        goto label_1d70a4;
    }
    ctx->pc = 0x1D709Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D70A4u);
        ctx->pc = 0x1D70A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D709Cu;
        // 0x1d70a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D709Cu, 0x1D70A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D70A4u;
label_1d70a4:
    // 0x1d70a4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d70a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1d70a8:
    // 0x1d70a8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1d70a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1d70ac:
    // 0x1d70ac: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1d70acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1d70b0:
    // 0x1d70b0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1d70b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1d70b4:
    // 0x1d70b4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1d70b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d70b8:
    // 0x1d70b8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_1d70bc:
    if (ctx->pc == 0x1D70BCu) {
        ctx->pc = 0x1D70BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70B8u;
        // 0x1d70bc: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D70C0u;
        goto label_1d70c0;
    }
    ctx->pc = 0x1D70B8u;
    {
        const bool branch_taken_0x1d70b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D70BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70B8u;
        // 0x1d70bc: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70b8) {
            ctx->pc = 0x1D7058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7058;
        }
    }
    ctx->pc = 0x1D70C0u;
label_1d70c0:
    // 0x1d70c0: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x1d70c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1d70c4:
    // 0x1d70c4: 0xc067f04  jal         func_19FC10
label_1d70c8:
    if (ctx->pc == 0x1D70C8u) {
        ctx->pc = 0x1D70C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70C4u;
        // 0x1d70c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D70CCu;
        goto label_1d70cc;
    }
    ctx->pc = 0x1D70C4u;
    SET_GPR_U32(ctx, 31, 0x1D70CCu);
    ctx->pc = 0x1D70C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70C4u;
    // 0x1d70c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D70C4u, 0x1D70CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70CCu;
label_1d70cc:
    // 0x1d70cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d70ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d70d0:
    // 0x1d70d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d70d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d70d4:
    // 0x1d70d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d70d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d70d8:
    // 0x1d70d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d70d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d70dc:
    // 0x1d70dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d70dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d70e0:
    // 0x1d70e0: 0x3e00008  jr          $ra
label_1d70e4:
    if (ctx->pc == 0x1D70E4u) {
        ctx->pc = 0x1D70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70E0u;
        // 0x1d70e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D70E8u;
        goto label_fallthrough_0x1d70e0;
    }
    ctx->pc = 0x1D70E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70E0u;
        // 0x1d70e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D70E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d70e0:
    ctx->pc = 0x1D70E8u;
}
