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

// Function: Cmd_OVER_STRUCT_Entry__FP15BsSCDEntControl
// Address: 0x10f020 - 0x10f244
void Cmd_OVER_STRUCT_Entry__FP15BsSCDEntControl_0x10f020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OVER_STRUCT_Entry__FP15BsSCDEntControl_0x10f020");
#endif

    switch (ctx->pc) {
        case 0x10f020u: goto label_10f020;
        case 0x10f024u: goto label_10f024;
        case 0x10f028u: goto label_10f028;
        case 0x10f02cu: goto label_10f02c;
        case 0x10f030u: goto label_10f030;
        case 0x10f034u: goto label_10f034;
        case 0x10f038u: goto label_10f038;
        case 0x10f03cu: goto label_10f03c;
        case 0x10f040u: goto label_10f040;
        case 0x10f044u: goto label_10f044;
        case 0x10f048u: goto label_10f048;
        case 0x10f04cu: goto label_10f04c;
        case 0x10f050u: goto label_10f050;
        case 0x10f054u: goto label_10f054;
        case 0x10f058u: goto label_10f058;
        case 0x10f05cu: goto label_10f05c;
        case 0x10f060u: goto label_10f060;
        case 0x10f064u: goto label_10f064;
        case 0x10f068u: goto label_10f068;
        case 0x10f06cu: goto label_10f06c;
        case 0x10f070u: goto label_10f070;
        case 0x10f074u: goto label_10f074;
        case 0x10f078u: goto label_10f078;
        case 0x10f07cu: goto label_10f07c;
        case 0x10f080u: goto label_10f080;
        case 0x10f084u: goto label_10f084;
        case 0x10f088u: goto label_10f088;
        case 0x10f08cu: goto label_10f08c;
        case 0x10f090u: goto label_10f090;
        case 0x10f094u: goto label_10f094;
        case 0x10f098u: goto label_10f098;
        case 0x10f09cu: goto label_10f09c;
        case 0x10f0a0u: goto label_10f0a0;
        case 0x10f0a4u: goto label_10f0a4;
        case 0x10f0a8u: goto label_10f0a8;
        case 0x10f0acu: goto label_10f0ac;
        case 0x10f0b0u: goto label_10f0b0;
        case 0x10f0b4u: goto label_10f0b4;
        case 0x10f0b8u: goto label_10f0b8;
        case 0x10f0bcu: goto label_10f0bc;
        case 0x10f0c0u: goto label_10f0c0;
        case 0x10f0c4u: goto label_10f0c4;
        case 0x10f0c8u: goto label_10f0c8;
        case 0x10f0ccu: goto label_10f0cc;
        case 0x10f0d0u: goto label_10f0d0;
        case 0x10f0d4u: goto label_10f0d4;
        case 0x10f0d8u: goto label_10f0d8;
        case 0x10f0dcu: goto label_10f0dc;
        case 0x10f0e0u: goto label_10f0e0;
        case 0x10f0e4u: goto label_10f0e4;
        case 0x10f0e8u: goto label_10f0e8;
        case 0x10f0ecu: goto label_10f0ec;
        case 0x10f0f0u: goto label_10f0f0;
        case 0x10f0f4u: goto label_10f0f4;
        case 0x10f0f8u: goto label_10f0f8;
        case 0x10f0fcu: goto label_10f0fc;
        case 0x10f100u: goto label_10f100;
        case 0x10f104u: goto label_10f104;
        case 0x10f108u: goto label_10f108;
        case 0x10f10cu: goto label_10f10c;
        case 0x10f110u: goto label_10f110;
        case 0x10f114u: goto label_10f114;
        case 0x10f118u: goto label_10f118;
        case 0x10f11cu: goto label_10f11c;
        case 0x10f120u: goto label_10f120;
        case 0x10f124u: goto label_10f124;
        case 0x10f128u: goto label_10f128;
        case 0x10f12cu: goto label_10f12c;
        case 0x10f130u: goto label_10f130;
        case 0x10f134u: goto label_10f134;
        case 0x10f138u: goto label_10f138;
        case 0x10f13cu: goto label_10f13c;
        case 0x10f140u: goto label_10f140;
        case 0x10f144u: goto label_10f144;
        case 0x10f148u: goto label_10f148;
        case 0x10f14cu: goto label_10f14c;
        case 0x10f150u: goto label_10f150;
        case 0x10f154u: goto label_10f154;
        case 0x10f158u: goto label_10f158;
        case 0x10f15cu: goto label_10f15c;
        case 0x10f160u: goto label_10f160;
        case 0x10f164u: goto label_10f164;
        case 0x10f168u: goto label_10f168;
        case 0x10f16cu: goto label_10f16c;
        case 0x10f170u: goto label_10f170;
        case 0x10f174u: goto label_10f174;
        case 0x10f178u: goto label_10f178;
        case 0x10f17cu: goto label_10f17c;
        case 0x10f180u: goto label_10f180;
        case 0x10f184u: goto label_10f184;
        case 0x10f188u: goto label_10f188;
        case 0x10f18cu: goto label_10f18c;
        case 0x10f190u: goto label_10f190;
        case 0x10f194u: goto label_10f194;
        case 0x10f198u: goto label_10f198;
        case 0x10f19cu: goto label_10f19c;
        case 0x10f1a0u: goto label_10f1a0;
        case 0x10f1a4u: goto label_10f1a4;
        case 0x10f1a8u: goto label_10f1a8;
        case 0x10f1acu: goto label_10f1ac;
        case 0x10f1b0u: goto label_10f1b0;
        case 0x10f1b4u: goto label_10f1b4;
        case 0x10f1b8u: goto label_10f1b8;
        case 0x10f1bcu: goto label_10f1bc;
        case 0x10f1c0u: goto label_10f1c0;
        case 0x10f1c4u: goto label_10f1c4;
        case 0x10f1c8u: goto label_10f1c8;
        case 0x10f1ccu: goto label_10f1cc;
        case 0x10f1d0u: goto label_10f1d0;
        case 0x10f1d4u: goto label_10f1d4;
        case 0x10f1d8u: goto label_10f1d8;
        case 0x10f1dcu: goto label_10f1dc;
        case 0x10f1e0u: goto label_10f1e0;
        case 0x10f1e4u: goto label_10f1e4;
        case 0x10f1e8u: goto label_10f1e8;
        case 0x10f1ecu: goto label_10f1ec;
        case 0x10f1f0u: goto label_10f1f0;
        case 0x10f1f4u: goto label_10f1f4;
        case 0x10f1f8u: goto label_10f1f8;
        case 0x10f1fcu: goto label_10f1fc;
        case 0x10f200u: goto label_10f200;
        case 0x10f204u: goto label_10f204;
        case 0x10f208u: goto label_10f208;
        case 0x10f20cu: goto label_10f20c;
        case 0x10f210u: goto label_10f210;
        case 0x10f214u: goto label_10f214;
        case 0x10f218u: goto label_10f218;
        case 0x10f21cu: goto label_10f21c;
        case 0x10f220u: goto label_10f220;
        case 0x10f224u: goto label_10f224;
        case 0x10f228u: goto label_10f228;
        case 0x10f22cu: goto label_10f22c;
        case 0x10f230u: goto label_10f230;
        case 0x10f234u: goto label_10f234;
        case 0x10f238u: goto label_10f238;
        case 0x10f23cu: goto label_10f23c;
        case 0x10f240u: goto label_10f240;
        default: break;
    }

    ctx->pc = 0x10f020u;

label_10f020:
    // 0x10f020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10f020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_10f024:
    // 0x10f024: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10f024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10f028:
    // 0x10f028: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x10f028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_10f02c:
    // 0x10f02c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10f030:
    // 0x10f030: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x10f030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_10f034:
    // 0x10f034: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10f034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f038:
    // 0x10f038: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x10f038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_10f03c:
    // 0x10f03c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x10f03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_10f040:
    // 0x10f040: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x10f040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_10f044:
    // 0x10f044: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x10f044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_10f048:
    // 0x10f048: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10f048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_10f04c:
    // 0x10f04c: 0xc04110c  jal         func_104430
label_10f050:
    if (ctx->pc == 0x10F050u) {
        ctx->pc = 0x10F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F04Cu;
        // 0x10f050: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F054u;
        goto label_10f054;
    }
    ctx->pc = 0x10F04Cu;
    SET_GPR_U32(ctx, 31, 0x10F054u);
    ctx->pc = 0x10F050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F04Cu;
    // 0x10f050: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10F04Cu, 0x10F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F054u;
label_10f054:
    // 0x10f054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f058:
    // 0x10f058: 0xc06a26e  jal         func_1A89B8
label_10f05c:
    if (ctx->pc == 0x10F05Cu) {
        ctx->pc = 0x10F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F058u;
        // 0x10f05c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F060u;
        goto label_10f060;
    }
    ctx->pc = 0x10F058u;
    SET_GPR_U32(ctx, 31, 0x10F060u);
    ctx->pc = 0x10F05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F058u;
    // 0x10f05c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10F058u, 0x10F060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F060u;
label_10f060:
    // 0x10f060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f064:
    // 0x10f064: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x10f064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10f068:
    // 0x10f068: 0xc06a26e  jal         func_1A89B8
label_10f06c:
    if (ctx->pc == 0x10F06Cu) {
        ctx->pc = 0x10F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F068u;
        // 0x10f06c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F070u;
        goto label_10f070;
    }
    ctx->pc = 0x10F068u;
    SET_GPR_U32(ctx, 31, 0x10F070u);
    ctx->pc = 0x10F06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F068u;
    // 0x10f06c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10F068u, 0x10F070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F070u;
label_10f070:
    // 0x10f070: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x10f070u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_10f074:
    // 0x10f074: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10f078:
    // 0x10f078: 0x24021846  addiu       $v0, $zero, 0x1846
    ctx->pc = 0x10f078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
label_10f07c:
    // 0x10f07c: 0x5462002c  bnel        $v1, $v0, . + 4 + (0x2C << 2)
label_10f080:
    if (ctx->pc == 0x10F080u) {
        ctx->pc = 0x10F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F07Cu;
        // 0x10f080: 0x8e0201b4  lw          $v0, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F084u;
        goto label_10f084;
    }
    ctx->pc = 0x10F07Cu;
    {
        const bool branch_taken_0x10f07c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10f07c) {
            ctx->pc = 0x10F080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F07Cu;
            // 0x10f080: 0x8e0201b4  lw          $v0, 0x1B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F130u;
            goto label_10f130;
        }
    }
    ctx->pc = 0x10F084u;
label_10f084:
    // 0x10f084: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_10f088:
    if (ctx->pc == 0x10F088u) {
        ctx->pc = 0x10F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F084u;
        // 0x10f088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F08Cu;
        goto label_10f08c;
    }
    ctx->pc = 0x10F084u;
    {
        const bool branch_taken_0x10f084 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F084u;
        // 0x10f088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f084) {
            ctx->pc = 0x10F098u;
            goto label_10f098;
        }
    }
    ctx->pc = 0x10F08Cu;
label_10f08c:
    // 0x10f08c: 0x10000011  b           . + 4 + (0x11 << 2)
label_10f090:
    if (ctx->pc == 0x10F090u) {
        ctx->pc = 0x10F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F08Cu;
        // 0x10f090: 0x8e2201b4  lw          $v0, 0x1B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F094u;
        goto label_10f094;
    }
    ctx->pc = 0x10F08Cu;
    {
        const bool branch_taken_0x10f08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F08Cu;
        // 0x10f090: 0x8e2201b4  lw          $v0, 0x1B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f08c) {
            ctx->pc = 0x10F0D4u;
            goto label_10f0d4;
        }
    }
    ctx->pc = 0x10F094u;
label_10f094:
    // 0x10f094: 0x0  nop
    ctx->pc = 0x10f094u;
    // NOP
label_10f098:
    // 0x10f098: 0x6430005  bgezl       $s2, . + 4 + (0x5 << 2)
label_10f09c:
    if (ctx->pc == 0x10F09Cu) {
        ctx->pc = 0x10F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F098u;
        // 0x10f09c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F0A0u;
        goto label_10f0a0;
    }
    ctx->pc = 0x10F098u;
    {
        const bool branch_taken_0x10f098 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x10f098) {
            ctx->pc = 0x10F09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F098u;
            // 0x10f09c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F0B0u;
            goto label_10f0b0;
        }
    }
    ctx->pc = 0x10F0A0u;
label_10f0a0:
    // 0x10f0a0: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x10f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_10f0a4:
    // 0x10f0a4: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x10f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_10f0a8:
    // 0x10f0a8: 0x1000000a  b           . + 4 + (0xA << 2)
label_10f0ac:
    if (ctx->pc == 0x10F0ACu) {
        ctx->pc = 0x10F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0A8u;
        // 0x10f0ac: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F0B0u;
        goto label_10f0b0;
    }
    ctx->pc = 0x10F0A8u;
    {
        const bool branch_taken_0x10f0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0A8u;
        // 0x10f0ac: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0a8) {
            ctx->pc = 0x10F0D4u;
            goto label_10f0d4;
        }
    }
    ctx->pc = 0x10F0B0u;
label_10f0b0:
    // 0x10f0b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_10f0b4:
    // 0x10f0b4: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x10f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
label_10f0b8:
    // 0x10f0b8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_10f0bc:
    if (ctx->pc == 0x10F0BCu) {
        ctx->pc = 0x10F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0B8u;
        // 0x10f0bc: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F0C0u;
        goto label_10f0c0;
    }
    ctx->pc = 0x10F0B8u;
    {
        const bool branch_taken_0x10f0b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0B8u;
        // 0x10f0bc: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0b8) {
            ctx->pc = 0x10F0D0u;
            goto label_10f0d0;
        }
    }
    ctx->pc = 0x10F0C0u;
label_10f0c0:
    // 0x10f0c0: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x10f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_10f0c4:
    // 0x10f0c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_10f0c8:
    if (ctx->pc == 0x10F0C8u) {
        ctx->pc = 0x10F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0C4u;
        // 0x10f0c8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F0CCu;
        goto label_10f0cc;
    }
    ctx->pc = 0x10F0C4u;
    {
        const bool branch_taken_0x10f0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0C4u;
        // 0x10f0c8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0c4) {
            ctx->pc = 0x10F0D4u;
            goto label_10f0d4;
        }
    }
    ctx->pc = 0x10F0CCu;
label_10f0cc:
    // 0x10f0cc: 0x0  nop
    ctx->pc = 0x10f0ccu;
    // NOP
label_10f0d0:
    // 0x10f0d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10f0d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f0d4:
    // 0x10f0d4: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_10f0d8:
    if (ctx->pc == 0x10F0D8u) {
        ctx->pc = 0x10F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0D4u;
        // 0x10f0d8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F0DCu;
        goto label_10f0dc;
    }
    ctx->pc = 0x10F0D4u;
    {
        const bool branch_taken_0x10f0d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0D4u;
        // 0x10f0d8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0d4) {
            ctx->pc = 0x10F0E8u;
            goto label_10f0e8;
        }
    }
    ctx->pc = 0x10F0DCu;
label_10f0dc:
    // 0x10f0dc: 0x1000000a  b           . + 4 + (0xA << 2)
label_10f0e0:
    if (ctx->pc == 0x10F0E0u) {
        ctx->pc = 0x10F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0DCu;
        // 0x10f0e0: 0x8c820c08  lw          $v0, 0xC08($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F0E4u;
        goto label_10f0e4;
    }
    ctx->pc = 0x10F0DCu;
    {
        const bool branch_taken_0x10f0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0DCu;
        // 0x10f0e0: 0x8c820c08  lw          $v0, 0xC08($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0dc) {
            ctx->pc = 0x10F108u;
            goto label_10f108;
        }
    }
    ctx->pc = 0x10F0E4u;
label_10f0e4:
    // 0x10f0e4: 0x0  nop
    ctx->pc = 0x10f0e4u;
    // NOP
label_10f0e8:
    // 0x10f0e8: 0x4a30005  bgezl       $a1, . + 4 + (0x5 << 2)
label_10f0ec:
    if (ctx->pc == 0x10F0ECu) {
        ctx->pc = 0x10F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0E8u;
        // 0x10f0ec: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F0F0u;
        goto label_10f0f0;
    }
    ctx->pc = 0x10F0E8u;
    {
        const bool branch_taken_0x10f0e8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x10f0e8) {
            ctx->pc = 0x10F0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F0E8u;
            // 0x10f0ec: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F100u;
            goto label_10f100;
        }
    }
    ctx->pc = 0x10F0F0u;
label_10f0f0:
    // 0x10f0f0: 0x8c8301b4  lw          $v1, 0x1B4($a0)
    ctx->pc = 0x10f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
label_10f0f4:
    // 0x10f0f4: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x10f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_10f0f8:
    // 0x10f0f8: 0x1000000a  b           . + 4 + (0xA << 2)
label_10f0fc:
    if (ctx->pc == 0x10F0FCu) {
        ctx->pc = 0x10F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0F8u;
        // 0x10f0fc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F100u;
        goto label_10f100;
    }
    ctx->pc = 0x10F0F8u;
    {
        const bool branch_taken_0x10f0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0F8u;
        // 0x10f0fc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0f8) {
            ctx->pc = 0x10F124u;
            goto label_10f124;
        }
    }
    ctx->pc = 0x10F100u;
label_10f100:
    // 0x10f100: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10f100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10f104:
    // 0x10f104: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x10f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
label_10f108:
    // 0x10f108: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_10f10c:
    if (ctx->pc == 0x10F10Cu) {
        ctx->pc = 0x10F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F108u;
        // 0x10f10c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F110u;
        goto label_10f110;
    }
    ctx->pc = 0x10F108u;
    {
        const bool branch_taken_0x10f108 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F108u;
        // 0x10f10c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f108) {
            ctx->pc = 0x10F120u;
            goto label_10f120;
        }
    }
    ctx->pc = 0x10F110u;
label_10f110:
    // 0x10f110: 0x8c8301b4  lw          $v1, 0x1B4($a0)
    ctx->pc = 0x10f110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
label_10f114:
    // 0x10f114: 0x10000003  b           . + 4 + (0x3 << 2)
label_10f118:
    if (ctx->pc == 0x10F118u) {
        ctx->pc = 0x10F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F114u;
        // 0x10f118: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F11Cu;
        goto label_10f11c;
    }
    ctx->pc = 0x10F114u;
    {
        const bool branch_taken_0x10f114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F114u;
        // 0x10f118: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f114) {
            ctx->pc = 0x10F124u;
            goto label_10f124;
        }
    }
    ctx->pc = 0x10F11Cu;
label_10f11c:
    // 0x10f11c: 0x0  nop
    ctx->pc = 0x10f11cu;
    // NOP
label_10f120:
    // 0x10f120: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10f120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f124:
    // 0x10f124: 0x10000006  b           . + 4 + (0x6 << 2)
label_10f128:
    if (ctx->pc == 0x10F128u) {
        ctx->pc = 0x10F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F124u;
        // 0x10f128: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F12Cu;
        goto label_10f12c;
    }
    ctx->pc = 0x10F124u;
    {
        const bool branch_taken_0x10f124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F124u;
        // 0x10f128: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f124) {
            ctx->pc = 0x10F140u;
            goto label_10f140;
        }
    }
    ctx->pc = 0x10F12Cu;
label_10f12c:
    // 0x10f12c: 0x0  nop
    ctx->pc = 0x10f12cu;
    // NOP
label_10f130:
    // 0x10f130: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x10f130u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_10f134:
    // 0x10f134: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x10f134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_10f138:
    // 0x10f138: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x10f138u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10f13c:
    // 0x10f13c: 0x44a021  addu        $s4, $v0, $a0
    ctx->pc = 0x10f13cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10f140:
    // 0x10f140: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x10f140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_10f144:
    // 0x10f144: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x10f144u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_10f148:
    // 0x10f148: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x10f148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_10f14c:
    // 0x10f14c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_10f150:
    if (ctx->pc == 0x10F150u) {
        ctx->pc = 0x10F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F14Cu;
        // 0x10f150: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F154u;
        goto label_10f154;
    }
    ctx->pc = 0x10F14Cu;
    {
        const bool branch_taken_0x10f14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F14Cu;
        // 0x10f150: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f14c) {
            ctx->pc = 0x10F16Cu;
            goto label_10f16c;
        }
    }
    ctx->pc = 0x10F154u;
label_10f154:
    // 0x10f154: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x10f154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_10f158:
    // 0x10f158: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x10f158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_10f15c:
    // 0x10f15c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10f15cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10f160:
    // 0x10f160: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10f160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10f164:
    // 0x10f164: 0x60f809  jalr        $v1
label_10f168:
    if (ctx->pc == 0x10F168u) {
        ctx->pc = 0x10F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F164u;
        // 0x10f168: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F16Cu;
        goto label_10f16c;
    }
    ctx->pc = 0x10F164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F16Cu);
        ctx->pc = 0x10F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F164u;
        // 0x10f168: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F164u, 0x10F16Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F16Cu;
label_10f16c:
    // 0x10f16c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x10f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_10f170:
    // 0x10f170: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10f170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f174:
    // 0x10f174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f178:
    // 0x10f178: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x10f178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_10f17c:
    // 0x10f17c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10f17cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10f180:
    // 0x10f180: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10f180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10f184:
    // 0x10f184: 0x60f809  jalr        $v1
label_10f188:
    if (ctx->pc == 0x10F188u) {
        ctx->pc = 0x10F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F184u;
        // 0x10f188: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F18Cu;
        goto label_10f18c;
    }
    ctx->pc = 0x10F184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F18Cu);
        ctx->pc = 0x10F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F184u;
        // 0x10f188: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F184u, 0x10F18Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F18Cu;
label_10f18c:
    // 0x10f18c: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x10f18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
label_10f190:
    // 0x10f190: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x10f190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_10f194:
    // 0x10f194: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x10f194u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_10f198:
    // 0x10f198: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x10f198u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_10f19c:
    // 0x10f19c: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x10f19cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_10f1a0:
    // 0x10f1a0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x10f1a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10f1a4:
    // 0x10f1a4: 0xfa200000  sqc2        $vf0, 0x0($s1)
    ctx->pc = 0x10f1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_10f1a8:
    // 0x10f1a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10f1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10f1ac:
    // 0x10f1ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10f1b0:
    // 0x10f1b0: 0xc0618da  jal         func_186368
label_10f1b4:
    if (ctx->pc == 0x10F1B4u) {
        ctx->pc = 0x10F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1B0u;
        // 0x10f1b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F1B8u;
        goto label_10f1b8;
    }
    ctx->pc = 0x10F1B0u;
    SET_GPR_U32(ctx, 31, 0x10F1B8u);
    ctx->pc = 0x10F1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F1B0u;
    // 0x10f1b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x10F1B0u, 0x10F1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F1B8u;
label_10f1b8:
    // 0x10f1b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10f1bc:
    // 0x10f1bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10f1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f1c0:
    // 0x10f1c0: 0xc0618f2  jal         func_1863C8
label_10f1c4:
    if (ctx->pc == 0x10F1C4u) {
        ctx->pc = 0x10F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1C0u;
        // 0x10f1c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F1C8u;
        goto label_10f1c8;
    }
    ctx->pc = 0x10F1C0u;
    SET_GPR_U32(ctx, 31, 0x10F1C8u);
    ctx->pc = 0x10F1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F1C0u;
    // 0x10f1c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x10F1C0u, 0x10F1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F1C8u;
label_10f1c8:
    // 0x10f1c8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x10f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_10f1cc:
    // 0x10f1cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10f1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10f1d0:
    // 0x10f1d0: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x10f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_10f1d4:
    // 0x10f1d4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10f1d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10f1d8:
    // 0x10f1d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10f1dc:
    // 0x10f1dc: 0x60f809  jalr        $v1
label_10f1e0:
    if (ctx->pc == 0x10F1E0u) {
        ctx->pc = 0x10F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1DCu;
        // 0x10f1e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F1E4u;
        goto label_10f1e4;
    }
    ctx->pc = 0x10F1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F1E4u);
        ctx->pc = 0x10F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1DCu;
        // 0x10f1e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F1DCu, 0x10F1E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F1E4u;
label_10f1e4:
    // 0x10f1e4: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x10f1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_10f1e8:
    // 0x10f1e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10f1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10f1ec:
    // 0x10f1ec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x10f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_10f1f0:
    // 0x10f1f0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x10f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_10f1f4:
    // 0x10f1f4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10f1f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10f1f8:
    // 0x10f1f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10f1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10f1fc:
    // 0x10f1fc: 0x60f809  jalr        $v1
label_10f200:
    if (ctx->pc == 0x10F200u) {
        ctx->pc = 0x10F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1FCu;
        // 0x10f200: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F204u;
        goto label_10f204;
    }
    ctx->pc = 0x10F1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F204u);
        ctx->pc = 0x10F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1FCu;
        // 0x10f200: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F1FCu, 0x10F204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F204u;
label_10f204:
    // 0x10f204: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x10f204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_10f208:
    // 0x10f208: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10f208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f20c:
    // 0x10f20c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x10f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_10f210:
    // 0x10f210: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x10f210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_10f214:
    // 0x10f214: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10f214u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10f218:
    // 0x10f218: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10f218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10f21c:
    // 0x10f21c: 0x60f809  jalr        $v1
label_10f220:
    if (ctx->pc == 0x10F220u) {
        ctx->pc = 0x10F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F21Cu;
        // 0x10f220: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F224u;
        goto label_10f224;
    }
    ctx->pc = 0x10F21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F224u);
        ctx->pc = 0x10F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F21Cu;
        // 0x10f220: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F21Cu, 0x10F224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F224u;
label_10f224:
    // 0x10f224: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x10f224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10f228:
    // 0x10f228: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x10f228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_10f22c:
    // 0x10f22c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10f22cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10f230:
    // 0x10f230: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x10f230u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_10f234:
    // 0x10f234: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x10f234u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10f238:
    // 0x10f238: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x10f238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_10f23c:
    // 0x10f23c: 0x3e00008  jr          $ra
label_10f240:
    if (ctx->pc == 0x10F240u) {
        ctx->pc = 0x10F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F23Cu;
        // 0x10f240: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F244u;
        goto label_fallthrough_0x10f23c;
    }
    ctx->pc = 0x10F23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F23Cu;
        // 0x10f240: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10f23c:
    ctx->pc = 0x10F244u;
}
