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

// Function: Cmd_UNIT_PITCH_Entry__FP15BsSCDEntControl
// Address: 0x14b190 - 0x14b26c
void Cmd_UNIT_PITCH_Entry__FP15BsSCDEntControl_0x14b190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_UNIT_PITCH_Entry__FP15BsSCDEntControl_0x14b190");
#endif

    switch (ctx->pc) {
        case 0x14b1dcu: goto label_14b1dc;
        case 0x14b1e4u: goto label_14b1e4;
        case 0x14b208u: goto label_14b208;
        case 0x14b234u: goto label_14b234;
        case 0x14b248u: goto label_14b248;
        case 0x14b254u: goto label_14b254;
        default: break;
    }

    ctx->pc = 0x14b190u;

    // 0x14b190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b194: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14b194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x14b198: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14b198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14b19c: 0x24060118  addiu       $a2, $zero, 0x118
    ctx->pc = 0x14b19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x14b1a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14b1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14b1a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14b1a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14b1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14b1ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14b1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14b1b0: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x14b1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FB830u));
    // 0x14b1b4: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x14b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x14b1b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b1bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14b1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1c0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x14b1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x14b1c4: 0x10660005  beq         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B1C4u;
    {
        const bool branch_taken_0x14b1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x14B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B1C4u;
        // 0x14b1c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b1c4) {
            ctx->pc = 0x14B1DCu;
            goto label_14b1dc;
        }
    }
    ctx->pc = 0x14B1CCu;
    // 0x14b1cc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14b1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14b1d0: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x14b1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x14b1d4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14B1D4u;
    SET_GPR_U32(ctx, 31, 0x14B1DCu);
    ctx->pc = 0x14B1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B1D4u;
    // 0x14b1d8: 0x24a56bf0  addiu       $a1, $a1, 0x6BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14B1D4u, 0x14B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B1DCu;
label_14b1dc:
    // 0x14b1dc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14B1DCu;
    SET_GPR_U32(ctx, 31, 0x14B1E4u);
    ctx->pc = 0x14B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B1DCu;
    // 0x14b1e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14B1DCu, 0x14B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B1E4u;
label_14b1e4:
    // 0x14b1e4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14b1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14b1e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14b1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1ec: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x14b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x14b1f0: 0x24a56bd8  addiu       $a1, $a1, 0x6BD8
    ctx->pc = 0x14b1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27608));
    // 0x14b1f4: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x14b1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x14b1f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B1F8u;
    {
        const bool branch_taken_0x14b1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B1F8u;
        // 0x14b1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b1f8) {
            ctx->pc = 0x14B210u;
            goto label_14b210;
        }
    }
    ctx->pc = 0x14B200u;
    // 0x14b200: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14B200u;
    SET_GPR_U32(ctx, 31, 0x14B208u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14B200u, 0x14B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B208u;
label_14b208:
    // 0x14b208: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14B208u;
    {
        const bool branch_taken_0x14b208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B208u;
        // 0x14b20c: 0x8e1001c0  lw          $s0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b208) {
            ctx->pc = 0x14B238u;
            goto label_14b238;
        }
    }
    ctx->pc = 0x14B210u;
label_14b210:
    // 0x14b210: 0x920201ab  lbu         $v0, 0x1AB($s0)
    ctx->pc = 0x14b210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14b214: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x14b214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14b218: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B218u;
    {
        const bool branch_taken_0x14b218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b218) {
            ctx->pc = 0x14B21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B218u;
            // 0x14b21c: 0x8e1001c0  lw          $s0, 0x1C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B238u;
            goto label_14b238;
        }
    }
    ctx->pc = 0x14B220u;
    // 0x14b220: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14b220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14b224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b228: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x14b228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x14b22c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14B22Cu;
    SET_GPR_U32(ctx, 31, 0x14B234u);
    ctx->pc = 0x14B230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B22Cu;
    // 0x14b230: 0x24a56bd8  addiu       $a1, $a1, 0x6BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14B22Cu, 0x14B234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B234u;
label_14b234:
    // 0x14b234: 0x8e1001c0  lw          $s0, 0x1C0($s0)
    ctx->pc = 0x14b234u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_14b238:
    // 0x14b238: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x14b238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x14b23c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14b23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b240: 0xc06a298  jal         func_1A8A60
    ctx->pc = 0x14B240u;
    SET_GPR_U32(ctx, 31, 0x14B248u);
    ctx->pc = 0x14B244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B240u;
    // 0x14b244: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A60u, 0x14B240u, 0x14B248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B248u;
label_14b248:
    // 0x14b248: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14b248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b24c: 0xc056854  jal         func_15A150
    ctx->pc = 0x14B24Cu;
    SET_GPR_U32(ctx, 31, 0x14B254u);
    ctx->pc = 0x14B250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B24Cu;
    // 0x14b250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A150u, 0x14B24Cu, 0x14B254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B254u;
label_14b254:
    // 0x14b254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14b254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b258: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14b258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14b25c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14b25cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b260: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14b260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14b264: 0x3e00008  jr          $ra
    ctx->pc = 0x14B264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B264u;
        // 0x14b268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B26Cu;
}
