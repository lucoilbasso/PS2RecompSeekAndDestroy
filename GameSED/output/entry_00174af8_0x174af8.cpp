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

// Function: entry_00174af8
// Address: 0x174af8 - 0x174b64
void entry_00174af8_0x174af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174af8_0x174af8");
#endif

    switch (ctx->pc) {
        case 0x174b20u: goto label_174b20;
        case 0x174b54u: goto label_174b54;
        case 0x174b5cu: goto label_174b5c;
        default: break;
    }

    ctx->pc = 0x174af8u;

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
            return;
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
            return;
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
    ctx->pc = 0x174b64u;
}
