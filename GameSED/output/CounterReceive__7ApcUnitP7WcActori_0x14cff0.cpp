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

// Function: CounterReceive__7ApcUnitP7WcActori
// Address: 0x14cff0 - 0x14d078
void CounterReceive__7ApcUnitP7WcActori_0x14cff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CounterReceive__7ApcUnitP7WcActori_0x14cff0");
#endif

    switch (ctx->pc) {
        case 0x14cff0u: goto label_14cff0;
        case 0x14cff4u: goto label_14cff4;
        case 0x14cff8u: goto label_14cff8;
        case 0x14cffcu: goto label_14cffc;
        case 0x14d000u: goto label_14d000;
        case 0x14d004u: goto label_14d004;
        case 0x14d008u: goto label_14d008;
        case 0x14d00cu: goto label_14d00c;
        case 0x14d010u: goto label_14d010;
        case 0x14d014u: goto label_14d014;
        case 0x14d018u: goto label_14d018;
        case 0x14d01cu: goto label_14d01c;
        case 0x14d020u: goto label_14d020;
        case 0x14d024u: goto label_14d024;
        case 0x14d028u: goto label_14d028;
        case 0x14d02cu: goto label_14d02c;
        case 0x14d030u: goto label_14d030;
        case 0x14d034u: goto label_14d034;
        case 0x14d038u: goto label_14d038;
        case 0x14d03cu: goto label_14d03c;
        case 0x14d040u: goto label_14d040;
        case 0x14d044u: goto label_14d044;
        case 0x14d048u: goto label_14d048;
        case 0x14d04cu: goto label_14d04c;
        case 0x14d050u: goto label_14d050;
        case 0x14d054u: goto label_14d054;
        case 0x14d058u: goto label_14d058;
        case 0x14d05cu: goto label_14d05c;
        case 0x14d060u: goto label_14d060;
        case 0x14d064u: goto label_14d064;
        case 0x14d068u: goto label_14d068;
        case 0x14d06cu: goto label_14d06c;
        case 0x14d070u: goto label_14d070;
        case 0x14d074u: goto label_14d074;
        default: break;
    }

    ctx->pc = 0x14cff0u;

label_14cff0:
    // 0x14cff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14cff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_14cff4:
    // 0x14cff4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x14cff4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14cff8:
    // 0x14cff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14cff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14cffc:
    // 0x14cffc: 0x8d040170  lw          $a0, 0x170($t0)
    ctx->pc = 0x14cffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 368)));
label_14d000:
    // 0x14d000: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x14d000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_14d004:
    // 0x14d004: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x14d004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_14d008:
    // 0x14d008: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x14d008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_14d00c:
    // 0x14d00c: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_14d010:
    if (ctx->pc == 0x14D010u) {
        ctx->pc = 0x14D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D00Cu;
        // 0x14d010: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D014u;
        goto label_14d014;
    }
    ctx->pc = 0x14D00Cu;
    {
        const bool branch_taken_0x14d00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d00c) {
            ctx->pc = 0x14D010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D00Cu;
            // 0x14d010: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D070u;
            goto label_14d070;
        }
    }
    ctx->pc = 0x14D014u;
label_14d014:
    // 0x14d014: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x14d014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_14d018:
    // 0x14d018: 0x3042c800  andi        $v0, $v0, 0xC800
    ctx->pc = 0x14d018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)51200);
label_14d01c:
    // 0x14d01c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_14d020:
    if (ctx->pc == 0x14D020u) {
        ctx->pc = 0x14D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D01Cu;
        // 0x14d020: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D024u;
        goto label_14d024;
    }
    ctx->pc = 0x14D01Cu;
    {
        const bool branch_taken_0x14d01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D01Cu;
        // 0x14d020: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d01c) {
            ctx->pc = 0x14D034u;
            goto label_14d034;
        }
    }
    ctx->pc = 0x14D024u;
label_14d024:
    // 0x14d024: 0x8d020184  lw          $v0, 0x184($t0)
    ctx->pc = 0x14d024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 388)));
label_14d028:
    // 0x14d028: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x14d028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_14d02c:
    // 0x14d02c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_14d030:
    if (ctx->pc == 0x14D030u) {
        ctx->pc = 0x14D034u;
        goto label_14d034;
    }
    ctx->pc = 0x14D02Cu;
    {
        const bool branch_taken_0x14d02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d02c) {
            ctx->pc = 0x14D038u;
            goto label_14d038;
        }
    }
    ctx->pc = 0x14D034u;
label_14d034:
    // 0x14d034: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14d038:
    // 0x14d038: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_14d03c:
    if (ctx->pc == 0x14D03Cu) {
        ctx->pc = 0x14D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D038u;
        // 0x14d03c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D040u;
        goto label_14d040;
    }
    ctx->pc = 0x14D038u;
    {
        const bool branch_taken_0x14d038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D038u;
        // 0x14d03c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d038) {
            ctx->pc = 0x14D070u;
            goto label_14d070;
        }
    }
    ctx->pc = 0x14D040u;
label_14d040:
    // 0x14d040: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_14d044:
    if (ctx->pc == 0x14D044u) {
        ctx->pc = 0x14D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D040u;
        // 0x14d044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D048u;
        goto label_14d048;
    }
    ctx->pc = 0x14D040u;
    {
        const bool branch_taken_0x14d040 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D040u;
        // 0x14d044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d040) {
            ctx->pc = 0x14D070u;
            goto label_14d070;
        }
    }
    ctx->pc = 0x14D048u;
label_14d048:
    // 0x14d048: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
label_14d04c:
    if (ctx->pc == 0x14D04Cu) {
        ctx->pc = 0x14D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D048u;
        // 0x14d04c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D050u;
        goto label_14d050;
    }
    ctx->pc = 0x14D048u;
    {
        const bool branch_taken_0x14d048 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x14D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D048u;
        // 0x14d04c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d048) {
            ctx->pc = 0x14D070u;
            goto label_14d070;
        }
    }
    ctx->pc = 0x14D050u;
label_14d050:
    // 0x14d050: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x14d050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_14d054:
    // 0x14d054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14d054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d058:
    // 0x14d058: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x14d058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_14d05c:
    // 0x14d05c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14d05cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14d060:
    // 0x14d060: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14d060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14d064:
    // 0x14d064: 0x60f809  jalr        $v1
label_14d068:
    if (ctx->pc == 0x14D068u) {
        ctx->pc = 0x14D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D064u;
        // 0x14d068: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D06Cu;
        goto label_14d06c;
    }
    ctx->pc = 0x14D064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14D06Cu);
        ctx->pc = 0x14D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D064u;
        // 0x14d068: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D064u, 0x14D06Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14D06Cu;
label_14d06c:
    // 0x14d06c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d070:
    // 0x14d070: 0x3e00008  jr          $ra
label_14d074:
    if (ctx->pc == 0x14D074u) {
        ctx->pc = 0x14D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D070u;
        // 0x14d074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D078u;
        goto label_fallthrough_0x14d070;
    }
    ctx->pc = 0x14D070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D070u;
        // 0x14d074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14d070:
    ctx->pc = 0x14D078u;
}
