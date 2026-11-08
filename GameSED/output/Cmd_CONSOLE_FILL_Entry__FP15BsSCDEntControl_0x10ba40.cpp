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

// Function: Cmd_CONSOLE_FILL_Entry__FP15BsSCDEntControl
// Address: 0x10ba40 - 0x10bb10
void Cmd_CONSOLE_FILL_Entry__FP15BsSCDEntControl_0x10ba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CONSOLE_FILL_Entry__FP15BsSCDEntControl_0x10ba40");
#endif

    switch (ctx->pc) {
        case 0x10ba68u: goto label_10ba68;
        case 0x10ba94u: goto label_10ba94;
        case 0x10bab0u: goto label_10bab0;
        case 0x10baf4u: goto label_10baf4;
        case 0x10bafcu: goto label_10bafc;
        default: break;
    }

    ctx->pc = 0x10ba40u;

    // 0x10ba40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ba44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10ba44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10ba48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10ba4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ba4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ba50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ba54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10ba54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ba5c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10ba60: 0xc04110c  jal         func_104430
    ctx->pc = 0x10BA60u;
    SET_GPR_U32(ctx, 31, 0x10BA68u);
    ctx->pc = 0x10BA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BA60u;
    // 0x10ba64: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10BA60u, 0x10BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BA68u;
label_10ba68:
    // 0x10ba68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ba68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba6c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BA6Cu;
    {
        const bool branch_taken_0x10ba6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA6Cu;
        // 0x10ba70: 0x24030166  addiu       $v1, $zero, 0x166 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba6c) {
            ctx->pc = 0x10BA84u;
            goto label_10ba84;
        }
    }
    ctx->pc = 0x10BA74u;
    // 0x10ba74: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10ba78: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10ba78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10ba7c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BA7Cu;
    {
        const bool branch_taken_0x10ba7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA7Cu;
        // 0x10ba80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba7c) {
            ctx->pc = 0x10BA8Cu;
            goto label_10ba8c;
        }
    }
    ctx->pc = 0x10BA84u;
label_10ba84:
    // 0x10ba84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10ba84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ba88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10ba8c:
    // 0x10ba8c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10BA8Cu;
    SET_GPR_U32(ctx, 31, 0x10BA94u);
    ctx->pc = 0x10BA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BA8Cu;
    // 0x10ba90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10BA8Cu, 0x10BA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BA94u;
label_10ba94:
    // 0x10ba94: 0x8e070210  lw          $a3, 0x210($s0)
    ctx->pc = 0x10ba94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x10ba98: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10ba98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba9c: 0x18e0000c  blez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x10BA9Cu;
    {
        const bool branch_taken_0x10ba9c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x10BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA9Cu;
        // 0x10baa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba9c) {
            ctx->pc = 0x10BAD0u;
            goto label_10bad0;
        }
    }
    ctx->pc = 0x10BAA4u;
    // 0x10baa4: 0x8e09021c  lw          $t1, 0x21C($s0)
    ctx->pc = 0x10baa4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x10baa8: 0x8e080214  lw          $t0, 0x214($s0)
    ctx->pc = 0x10baa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x10baac: 0x0  nop
    ctx->pc = 0x10baacu;
    // NOP
label_10bab0:
    // 0x10bab0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x10bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x10bab4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10bab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10bab8: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x10bab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x10babc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x10babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x10bac0: 0xa7182a  slt         $v1, $a1, $a3
    ctx->pc = 0x10bac0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x10bac4: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x10bac4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x10bac8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10BAC8u;
    {
        const bool branch_taken_0x10bac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAC8u;
        // 0x10bacc: 0xa4860000  sh          $a2, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bac8) {
            ctx->pc = 0x10BAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bab0;
        }
    }
    ctx->pc = 0x10BAD0u;
label_10bad0:
    // 0x10bad0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x10bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10bad4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10bad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10bad8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10badc: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10BADCu;
    {
        const bool branch_taken_0x10badc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10badc) {
            ctx->pc = 0x10BAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BADCu;
            // 0x10bae0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BB00u;
            goto label_10bb00;
        }
    }
    ctx->pc = 0x10BAE4u;
    // 0x10bae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bae8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10bae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10baec: 0xc063a94  jal         func_18EA50
    ctx->pc = 0x10BAECu;
    SET_GPR_U32(ctx, 31, 0x10BAF4u);
    ctx->pc = 0x10BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BAECu;
    // 0x10baf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA50u, 0x10BAECu, 0x10BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BAF4u;
label_10baf4:
    // 0x10baf4: 0xc0637a8  jal         func_18DEA0
    ctx->pc = 0x10BAF4u;
    SET_GPR_U32(ctx, 31, 0x10BAFCu);
    ctx->pc = 0x10BAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BAF4u;
    // 0x10baf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DEA0u, 0x10BAF4u, 0x10BAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BAFCu;
label_10bafc:
    // 0x10bafc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10bafcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10bb00:
    // 0x10bb00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10bb00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10bb04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10bb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bb08: 0x3e00008  jr          $ra
    ctx->pc = 0x10BB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB08u;
        // 0x10bb0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BB10u;
}
