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

// Function: vblankHandler
// Address: 0x174a00 - 0x174b88
void vblankHandler_0x174a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vblankHandler_0x174a00");
#endif

    switch (ctx->pc) {
        case 0x174a5cu: goto label_174a5c;
        case 0x174a78u: goto label_174a78;
        case 0x174ac4u: goto label_174ac4;
        case 0x174ae0u: goto label_174ae0;
        case 0x174ae8u: goto label_174ae8;
        case 0x174b20u: goto label_174b20;
        case 0x174b54u: goto label_174b54;
        case 0x174b5cu: goto label_174b5c;
        default: break;
    }

    ctx->pc = 0x174a00u;

    // 0x174a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174a04: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x174a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x174a08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174a0c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x174a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x174a10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x174a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x174a14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x174a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x174a18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x174a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x174a1c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x174a1cu;
    SET_GPR_U64(ctx, 3, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x174a20: 0x31b7a  dsrl        $v1, $v1, 13
    ctx->pc = 0x174a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 13);
    // 0x174a24: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x174a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x174a28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x174a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x174a2c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x174a2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x174a30: 0xaf838c10  sw          $v1, -0x73F0($gp)
    ctx->pc = 0x174a30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937616), GPR_U32(ctx, 3));
    // 0x174a34: 0x8f828c04  lw          $v0, -0x73FC($gp)
    ctx->pc = 0x174a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937604)));
    // 0x174a38: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x174A38u;
    {
        const bool branch_taken_0x174a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a38) {
            ctx->pc = 0x174B64u;
            goto label_174b64;
        }
    }
    ctx->pc = 0x174A40u;
    // 0x174a40: 0x8f828c08  lw          $v0, -0x73F8($gp)
    ctx->pc = 0x174a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937608)));
    // 0x174a44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x174a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174a48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x174a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x174a50: 0xaf828c08  sw          $v0, -0x73F8($gp)
    ctx->pc = 0x174a50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937608), GPR_U32(ctx, 2));
    // 0x174a54: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x174A54u;
    SET_GPR_U32(ctx, 31, 0x174A5Cu);
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x174A54u, 0x174A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A5Cu;
label_174a5c:
    // 0x174a5c: 0xaf828c14  sw          $v0, -0x73EC($gp)
    ctx->pc = 0x174a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937620), GPR_U32(ctx, 2));
    // 0x174a60: 0x8f828c14  lw          $v0, -0x73EC($gp)
    ctx->pc = 0x174a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937620)));
    // 0x174a64: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x174A64u;
    {
        const bool branch_taken_0x174a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174a64) {
            ctx->pc = 0x174B64u;
            goto label_174b64;
        }
    }
    ctx->pc = 0x174A6Cu;
    // 0x174a6c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x174a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x174a70: 0xc05cf94  jal         func_173E50
    ctx->pc = 0x174A70u;
    SET_GPR_U32(ctx, 31, 0x174A78u);
    ctx->pc = 0x174A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A70u;
    // 0x174a74: 0x248412a8  addiu       $a0, $a0, 0x12A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173E50u, 0x174A70u, 0x174A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A78u;
label_174a78:
    // 0x174a78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x174a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a7c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x174A7Cu;
    {
        const bool branch_taken_0x174a7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x174A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A7Cu;
        // 0x174a80: 0x8f8391a0  lw          $v1, -0x6E60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a7c) {
            ctx->pc = 0x174AA0u;
            goto label_174aa0;
        }
    }
    ctx->pc = 0x174A84u;
    // 0x174a84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x174a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x174a88: 0xaf8391a0  sw          $v1, -0x6E60($gp)
    ctx->pc = 0x174a88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939040), GPR_U32(ctx, 3));
    // 0x174a8c: 0xf  sync
    ctx->pc = 0x174a8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x174a90: 0x42000038  ei
    ctx->pc = 0x174a90u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x174a94: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x174A94u;
    {
        const bool branch_taken_0x174a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A94u;
        // 0x174a98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a94) {
            ctx->pc = 0x174B74u;
            goto label_174b74;
        }
    }
    ctx->pc = 0x174A9Cu;
    // 0x174a9c: 0x0  nop
    ctx->pc = 0x174a9cu;
    // NOP
label_174aa0:
    // 0x174aa0: 0x8f828c10  lw          $v0, -0x73F0($gp)
    ctx->pc = 0x174aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937616)));
    // 0x174aa4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x174AA4u;
    {
        const bool branch_taken_0x174aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AA4u;
        // 0x174aa8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174aa4) {
            ctx->pc = 0x174AF8u;
            goto label_174af8;
        }
    }
    ctx->pc = 0x174AACu;
    // 0x174aac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x174aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174ab0: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x174AB0u;
    {
        const bool branch_taken_0x174ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x174AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AB0u;
        // 0x174ab4: 0x3c040041  lui         $a0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ab0) {
            ctx->pc = 0x174AF8u;
            goto label_174af8;
        }
    }
    ctx->pc = 0x174AB8u;
    // 0x174ab8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x174ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174abc: 0xc05d044  jal         func_174110
    ctx->pc = 0x174ABCu;
    SET_GPR_U32(ctx, 31, 0x174AC4u);
    ctx->pc = 0x174AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174ABCu;
    // 0x174ac0: 0x248412d0  addiu       $a0, $a0, 0x12D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174110u, 0x174ABCu, 0x174AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174AC4u;
label_174ac4:
    // 0x174ac4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x174ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x174ac8: 0x8f858bdc  lw          $a1, -0x7424($gp)
    ctx->pc = 0x174ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937564)));
    // 0x174acc: 0x24841420  addiu       $a0, $a0, 0x1420
    ctx->pc = 0x174accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5152));
    // 0x174ad0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ad4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x174ad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ad8: 0xc05c7b0  jal         func_171EC0
    ctx->pc = 0x174AD8u;
    SET_GPR_U32(ctx, 31, 0x174AE0u);
    ctx->pc = 0x174ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174AD8u;
    // 0x174adc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171EC0u, 0x174AD8u, 0x174AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174AE0u;
label_174ae0:
    // 0x174ae0: 0xc05c7c4  jal         func_171F10
    ctx->pc = 0x174AE0u;
    SET_GPR_U32(ctx, 31, 0x174AE8u);
    ctx->pc = 0x174AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174AE0u;
    // 0x174ae4: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F10u, 0x174AE0u, 0x174AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174AE8u;
label_174ae8:
    // 0x174ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174aec: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x174AECu;
    {
        const bool branch_taken_0x174aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AECu;
        // 0x174af0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174aec) {
            ctx->pc = 0x174B64u;
            goto label_174b64;
        }
    }
    ctx->pc = 0x174AF4u;
    // 0x174af4: 0x0  nop
    ctx->pc = 0x174af4u;
    // NOP
label_174af8:
    // 0x174af8: 0x8f828c10  lw          $v0, -0x73F0($gp)
    ctx->pc = 0x174af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937616)));
    // 0x174afc: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x174AFCu;
    {
        const bool branch_taken_0x174afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AFCu;
        // 0x174b00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174afc) {
            ctx->pc = 0x174B64u;
            goto label_174b64;
        }
    }
    ctx->pc = 0x174B04u;
    // 0x174b04: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x174b04u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174b08: 0x16420016  bne         $s2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x174B08u;
    {
        const bool branch_taken_0x174b08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x174B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B08u;
        // 0x174b0c: 0x3c100041  lui         $s0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b08) {
            ctx->pc = 0x174B64u;
            goto label_174b64;
        }
    }
    ctx->pc = 0x174B10u;
    // 0x174b10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b14: 0x261012d0  addiu       $s0, $s0, 0x12D0
    ctx->pc = 0x174b14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4816));
    // 0x174b18: 0xc05d044  jal         func_174110
    ctx->pc = 0x174B18u;
    SET_GPR_U32(ctx, 31, 0x174B20u);
    ctx->pc = 0x174B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B18u;
    // 0x174b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174110u, 0x174B18u, 0x174B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B20u;
label_174b20:
    // 0x174b20: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x174b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x174b24: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x174b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x174b28: 0x24841420  addiu       $a0, $a0, 0x1420
    ctx->pc = 0x174b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5152));
    // 0x174b2c: 0x8f858bdc  lw          $a1, -0x7424($gp)
    ctx->pc = 0x174b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937564)));
    // 0x174b30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x174b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174b34: 0x2448001f  addiu       $t0, $v0, 0x1F
    ctx->pc = 0x174b34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x174b38: 0x2442003e  addiu       $v0, $v0, 0x3E
    ctx->pc = 0x174b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 62));
    // 0x174b3c: 0x29030000  slti        $v1, $t0, 0x0
    ctx->pc = 0x174b3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x174b40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x174b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b44: 0x43400b  movn        $t0, $v0, $v1
    ctx->pc = 0x174b44u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x174b48: 0x84143  sra         $t0, $t0, 5
    ctx->pc = 0x174b48u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 5));
    // 0x174b4c: 0xc05c7b0  jal         func_171EC0
    ctx->pc = 0x174B4Cu;
    SET_GPR_U32(ctx, 31, 0x174B54u);
    ctx->pc = 0x174B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B4Cu;
    // 0x174b50: 0x84240  sll         $t0, $t0, 9 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171EC0u, 0x174B4Cu, 0x174B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B54u;
label_174b54:
    // 0x174b54: 0xc05c7c4  jal         func_171F10
    ctx->pc = 0x174B54u;
    SET_GPR_U32(ctx, 31, 0x174B5Cu);
    ctx->pc = 0x174B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B54u;
    // 0x174b58: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F10u, 0x174B54u, 0x174B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B5Cu;
label_174b5c:
    // 0x174b5c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x174b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x174b60: 0xaf928c0c  sw          $s2, -0x73F4($gp)
    ctx->pc = 0x174b60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937612), GPR_U32(ctx, 18));
label_174b64:
    // 0x174b64: 0xf  sync
    ctx->pc = 0x174b64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x174b68: 0x42000038  ei
    ctx->pc = 0x174b68u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x174b6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x174b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174b74:
    // 0x174b74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x174b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174b78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x174b78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174b7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x174b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174b80: 0x3e00008  jr          $ra
    ctx->pc = 0x174B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B80u;
        // 0x174b84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174B88u;
}
