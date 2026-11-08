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

// Function: Cmd_FIXED_MUL_Entry__FP15BsSCDEntControl
// Address: 0x1a6a88 - 0x1a6bc8
void Cmd_FIXED_MUL_Entry__FP15BsSCDEntControl_0x1a6a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_FIXED_MUL_Entry__FP15BsSCDEntControl_0x1a6a88");
#endif

    switch (ctx->pc) {
        case 0x1a6ac0u: goto label_1a6ac0;
        case 0x1a6aecu: goto label_1a6aec;
        case 0x1a6b20u: goto label_1a6b20;
        case 0x1a6b60u: goto label_1a6b60;
        case 0x1a6b74u: goto label_1a6b74;
        case 0x1a6b80u: goto label_1a6b80;
        case 0x1a6b9cu: goto label_1a6b9c;
        default: break;
    }

    ctx->pc = 0x1a6a88u;

    // 0x1a6a88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6a8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6a90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a6a94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a98: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a6a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a6a9c: 0x2630001c  addiu       $s0, $s1, 0x1C
    ctx->pc = 0x1a6a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a6aa0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a6aa4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a6aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a6aa8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a6aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a6aac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6ab0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6ab4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6ab8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6AB8u;
    SET_GPR_U32(ctx, 31, 0x1A6AC0u);
    ctx->pc = 0x1A6ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6AB8u;
    // 0x1a6abc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6AB8u, 0x1A6AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6AC0u;
label_1a6ac0:
    // 0x1a6ac0: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6ac4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a6ac4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ac8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6acc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6ad0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6ad4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6ad8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a6ad8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a6adc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6ADCu;
    {
        const bool branch_taken_0x1a6adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6ADCu;
        // 0x1a6ae0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6adc) {
            ctx->pc = 0x1A6AF0u;
            goto label_1a6af0;
        }
    }
    ctx->pc = 0x1A6AE4u;
    // 0x1a6ae4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6AE4u;
    SET_GPR_U32(ctx, 31, 0x1A6AECu);
    ctx->pc = 0x1A6AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6AE4u;
    // 0x1a6ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6AE4u, 0x1A6AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6AECu;
label_1a6aec:
    // 0x1a6aec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6af0:
    // 0x1a6af0: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a6af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a6af4: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6af8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a6af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a6afc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a6afcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6b04: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6b08: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6b0c: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a6b0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a6b10: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6B10u;
    {
        const bool branch_taken_0x1a6b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B10u;
        // 0x1a6b14: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b10) {
            ctx->pc = 0x1A6B24u;
            goto label_1a6b24;
        }
    }
    ctx->pc = 0x1A6B18u;
    // 0x1a6b18: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6B18u;
    SET_GPR_U32(ctx, 31, 0x1A6B20u);
    ctx->pc = 0x1A6B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B18u;
    // 0x1a6b1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6B18u, 0x1A6B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B20u;
label_1a6b20:
    // 0x1a6b20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6b24:
    // 0x1a6b24: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1a6b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a6b28: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a6b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a6b2c: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A6B2Cu;
    {
        const bool branch_taken_0x1a6b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B2Cu;
        // 0x1a6b30: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b2c) {
            ctx->pc = 0x1A6B90u;
            goto label_1a6b90;
        }
    }
    ctx->pc = 0x1A6B34u;
    // 0x1a6b34: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a6b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a6b38: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6b3c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a6b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a6b40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6b44: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6b48: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6b4c: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a6b4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a6b50: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6B50u;
    {
        const bool branch_taken_0x1a6b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B50u;
        // 0x1a6b54: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b50) {
            ctx->pc = 0x1A6B64u;
            goto label_1a6b64;
        }
    }
    ctx->pc = 0x1A6B58u;
    // 0x1a6b58: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6B58u;
    SET_GPR_U32(ctx, 31, 0x1A6B60u);
    ctx->pc = 0x1A6B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B58u;
    // 0x1a6b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6B58u, 0x1A6B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B60u;
label_1a6b60:
    // 0x1a6b60: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6b64:
    // 0x1a6b64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a6b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a6b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b6c: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1A6B6Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B74u);
    ctx->pc = 0x1A6B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B6Cu;
    // 0x1a6b70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1A6B6Cu, 0x1A6B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B74u;
label_1a6b74:
    // 0x1a6b74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a6b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b78: 0xc07208c  jal         func_1C8230
    ctx->pc = 0x1A6B78u;
    SET_GPR_U32(ctx, 31, 0x1A6B80u);
    ctx->pc = 0x1A6B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B78u;
    // 0x1a6b7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8230u, 0x1A6B78u, 0x1A6B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B80u;
label_1a6b80:
    // 0x1a6b80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a6b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a6b84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a6b84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a6b88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6B88u;
    {
        const bool branch_taken_0x1a6b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B88u;
        // 0x1a6b8c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b88) {
            ctx->pc = 0x1A6BA8u;
            goto label_1a6ba8;
        }
    }
    ctx->pc = 0x1A6B90u;
label_1a6b90:
    // 0x1a6b90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a6b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b94: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1A6B94u;
    SET_GPR_U32(ctx, 31, 0x1A6B9Cu);
    ctx->pc = 0x1A6B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B94u;
    // 0x1a6b98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1A6B94u, 0x1A6B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B9Cu;
label_1a6b9c:
    // 0x1a6b9c: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x1a6b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x1a6ba0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a6ba0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a6ba4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1a6ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1a6ba8:
    // 0x1a6ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6bac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6bb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a6bb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6bb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a6bb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6bb8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a6bb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6bbc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a6bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a6bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BC0u;
        // 0x1a6bc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6BC8u;
}
