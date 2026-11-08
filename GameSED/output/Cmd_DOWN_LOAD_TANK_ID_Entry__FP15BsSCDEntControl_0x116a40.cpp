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

// Function: Cmd_DOWN_LOAD_TANK_ID_Entry__FP15BsSCDEntControl
// Address: 0x116a40 - 0x116bec
void Cmd_DOWN_LOAD_TANK_ID_Entry__FP15BsSCDEntControl_0x116a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DOWN_LOAD_TANK_ID_Entry__FP15BsSCDEntControl_0x116a40");
#endif

    switch (ctx->pc) {
        case 0x116a88u: goto label_116a88;
        case 0x116aa4u: goto label_116aa4;
        case 0x116ac0u: goto label_116ac0;
        case 0x116accu: goto label_116acc;
        case 0x116b08u: goto label_116b08;
        case 0x116b60u: goto label_116b60;
        case 0x116b78u: goto label_116b78;
        case 0x116b88u: goto label_116b88;
        default: break;
    }

    ctx->pc = 0x116a40u;

    // 0x116a40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x116a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x116a44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116a48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x116a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x116a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x116a50: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x116a50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x116a54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x116a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x116a58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x116a58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x116a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x116a60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x116a60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a64: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x116a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x116a68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x116a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x116a6c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x116a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x116a70: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x116a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x116a74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x116a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116a78: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x116A78u;
    {
        const bool branch_taken_0x116a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x116A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A78u;
        // 0x116a7c: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a78) {
            ctx->pc = 0x116A8Cu;
            goto label_116a8c;
        }
    }
    ctx->pc = 0x116A80u;
    // 0x116a80: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x116A80u;
    SET_GPR_U32(ctx, 31, 0x116A88u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x116A80u, 0x116A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A88u;
label_116a88:
    // 0x116a88: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x116a88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_116a8c:
    // 0x116a8c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x116a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x116a90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x116a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116a94: 0x1071000b  beq         $v1, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x116A94u;
    {
        const bool branch_taken_0x116a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x116a94) {
            ctx->pc = 0x116AC4u;
            goto label_116ac4;
        }
    }
    ctx->pc = 0x116A9Cu;
    // 0x116a9c: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x116A9Cu;
    SET_GPR_U32(ctx, 31, 0x116AA4u);
    ctx->pc = 0x116AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A9Cu;
    // 0x116aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x116A9Cu, 0x116AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AA4u;
label_116aa4:
    // 0x116aa4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x116aa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116aa8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x116aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x116aac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x116aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116ab0: 0x10710004  beq         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x116AB0u;
    {
        const bool branch_taken_0x116ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x116ab0) {
            ctx->pc = 0x116AC4u;
            goto label_116ac4;
        }
    }
    ctx->pc = 0x116AB8u;
    // 0x116ab8: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x116AB8u;
    SET_GPR_U32(ctx, 31, 0x116AC0u);
    ctx->pc = 0x116ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AB8u;
    // 0x116abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x116AB8u, 0x116AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AC0u;
label_116ac0:
    // 0x116ac0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x116ac0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116ac4:
    // 0x116ac4: 0xc041794  jal         func_105E50
    ctx->pc = 0x116AC4u;
    SET_GPR_U32(ctx, 31, 0x116ACCu);
    ctx->pc = 0x116AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AC4u;
    // 0x116ac8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E50u, 0x116AC4u, 0x116ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116ACCu;
label_116acc:
    // 0x116acc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x116accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116ad0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ad4: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x116ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x116ad8: 0x2444fcb0  addiu       $a0, $v0, -0x350
    ctx->pc = 0x116ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    // 0x116adc: 0x16a30018  bne         $s5, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x116ADCu;
    {
        const bool branch_taken_0x116adc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x116AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116ADCu;
        // 0x116ae0: 0xac800400  sw          $zero, 0x400($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116adc) {
            ctx->pc = 0x116B40u;
            goto label_116b40;
        }
    }
    ctx->pc = 0x116AE4u;
    // 0x116ae4: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x116ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x116ae8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x116ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116aec: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x116aecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x116af0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x116af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116af4: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x116af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x116af8: 0x2463d374  addiu       $v1, $v1, -0x2C8C
    ctx->pc = 0x116af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955892));
    // 0x116afc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116b00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x116b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116b04: 0x0  nop
    ctx->pc = 0x116b04u;
    // NOP
label_116b08:
    // 0x116b08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x116B08u;
    {
        const bool branch_taken_0x116b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B08u;
        // 0x116b0c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b08) {
            ctx->pc = 0x116B24u;
            goto label_116b24;
        }
    }
    ctx->pc = 0x116B10u;
    // 0x116b10: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x116b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x116b14: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x116b14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x116b18: 0x8ca20400  lw          $v0, 0x400($a1)
    ctx->pc = 0x116b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1024)));
    // 0x116b1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x116b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x116b20: 0xaca20400  sw          $v0, 0x400($a1)
    ctx->pc = 0x116b20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1024), GPR_U32(ctx, 2));
label_116b24:
    // 0x116b24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x116b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116b28: 0x2882006e  slti        $v0, $a0, 0x6E
    ctx->pc = 0x116b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x116b2c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x116B2Cu;
    {
        const bool branch_taken_0x116b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116b2c) {
            ctx->pc = 0x116B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116B2Cu;
            // 0x116b30: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116b08;
        }
    }
    ctx->pc = 0x116B34u;
    // 0x116b34: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x116B34u;
    {
        const bool branch_taken_0x116b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B34u;
        // 0x116b38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b34) {
            ctx->pc = 0x116BC4u;
            goto label_116bc4;
        }
    }
    ctx->pc = 0x116B3Cu;
    // 0x116b3c: 0x0  nop
    ctx->pc = 0x116b3cu;
    // NOP
label_116b40:
    // 0x116b40: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x116b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x116b44: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x116b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x116b48: 0x2442c180  addiu       $v0, $v0, -0x3E80
    ctx->pc = 0x116b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951296));
    // 0x116b4c: 0x2474fcb0  addiu       $s4, $v1, -0x350
    ctx->pc = 0x116b4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966448));
    // 0x116b50: 0x24530018  addiu       $s3, $v0, 0x18
    ctx->pc = 0x116b50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x116b54: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x116b54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116b58: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x116b58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1EC198u));
    // 0x116b5c: 0x0  nop
    ctx->pc = 0x116b5cu;
    // NOP
label_116b60:
    // 0x116b60: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x116b60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x116b64: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x116B64u;
    {
        const bool branch_taken_0x116b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B64u;
        // 0x116b68: 0x128080  sll         $s0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b64) {
            ctx->pc = 0x116BB0u;
            goto label_116bb0;
        }
    }
    ctx->pc = 0x116B6Cu;
    // 0x116b6c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x116b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x116b70: 0xc041882  jal         func_106208
    ctx->pc = 0x116B70u;
    SET_GPR_U32(ctx, 31, 0x116B78u);
    ctx->pc = 0x116B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B70u;
    // 0x116b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116B70u, 0x116B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B78u;
label_116b78:
    // 0x116b78: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x116b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x116b7c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x116b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x116b80: 0xc041882  jal         func_106208
    ctx->pc = 0x116B80u;
    SET_GPR_U32(ctx, 31, 0x116B88u);
    ctx->pc = 0x116B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B80u;
    // 0x116b84: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116B80u, 0x116B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B88u;
label_116b88:
    // 0x116b88: 0x52a00005  beql        $s5, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x116B88u;
    {
        const bool branch_taken_0x116b88 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x116b88) {
            ctx->pc = 0x116B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116B88u;
            // 0x116b8c: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116BA0u;
            goto label_116ba0;
        }
    }
    ctx->pc = 0x116B90u;
    // 0x116b90: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x116b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x116b94: 0x54550007  bnel        $v0, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x116B94u;
    {
        const bool branch_taken_0x116b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x116b94) {
            ctx->pc = 0x116B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116B94u;
            // 0x116b98: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116BB4u;
            goto label_116bb4;
        }
    }
    ctx->pc = 0x116B9Cu;
    // 0x116b9c: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x116b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_116ba0:
    // 0x116ba0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x116ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x116ba4: 0x8e820400  lw          $v0, 0x400($s4)
    ctx->pc = 0x116ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1024)));
    // 0x116ba8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x116ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x116bac: 0xae820400  sw          $v0, 0x400($s4)
    ctx->pc = 0x116bacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1024), GPR_U32(ctx, 2));
label_116bb0:
    // 0x116bb0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x116bb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_116bb4:
    // 0x116bb4: 0x2a42006e  slti        $v0, $s2, 0x6E
    ctx->pc = 0x116bb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x116bb8: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x116BB8u;
    {
        const bool branch_taken_0x116bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116bb8) {
            ctx->pc = 0x116BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116BB8u;
            // 0x116bbc: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116b60;
        }
    }
    ctx->pc = 0x116BC0u;
    // 0x116bc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x116bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_116bc4:
    // 0x116bc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116bc8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x116bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x116bcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x116bccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116bd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x116bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116bd4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x116bd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x116bd8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x116bd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116bdc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x116bdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x116be0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x116be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116be4: 0x3e00008  jr          $ra
    ctx->pc = 0x116BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BE4u;
        // 0x116be8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116BECu;
}
