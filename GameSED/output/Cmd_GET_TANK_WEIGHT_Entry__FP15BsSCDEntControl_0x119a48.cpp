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

// Function: Cmd_GET_TANK_WEIGHT_Entry__FP15BsSCDEntControl
// Address: 0x119a48 - 0x119adc
void Cmd_GET_TANK_WEIGHT_Entry__FP15BsSCDEntControl_0x119a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_TANK_WEIGHT_Entry__FP15BsSCDEntControl_0x119a48");
#endif

    switch (ctx->pc) {
        case 0x119a64u: goto label_119a64;
        case 0x119a70u: goto label_119a70;
        case 0x119a94u: goto label_119a94;
        case 0x119aa8u: goto label_119aa8;
        case 0x119ac4u: goto label_119ac4;
        default: break;
    }

    ctx->pc = 0x119a48u;

    // 0x119a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119a4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119a50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x119a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x119a54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x119a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x119a58: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x119a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x119a5c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119A5Cu;
    SET_GPR_U32(ctx, 31, 0x119A64u);
    ctx->pc = 0x119A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119A5Cu;
    // 0x119a60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119A5Cu, 0x119A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A64u;
label_119a64:
    // 0x119a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a68: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119A68u;
    SET_GPR_U32(ctx, 31, 0x119A70u);
    ctx->pc = 0x119A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119A68u;
    // 0x119a6c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119A68u, 0x119A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A70u;
label_119a70:
    // 0x119a70: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x119a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x119a74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x119a74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a78: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x119a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x119a7c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x119a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x119a80: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x119a80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x119a84: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x119a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x119a88: 0x8e10d528  lw          $s0, -0x2AD8($s0)
    ctx->pc = 0x119a88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956328)));
    // 0x119a8c: 0xc041882  jal         func_106208
    ctx->pc = 0x119A8Cu;
    SET_GPR_U32(ctx, 31, 0x119A94u);
    ctx->pc = 0x119A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119A8Cu;
    // 0x119a90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x119A8Cu, 0x119A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A94u;
label_119a94:
    // 0x119a94: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x119a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x119a98: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x119a98u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x119a9c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x119a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x119aa0: 0xc041882  jal         func_106208
    ctx->pc = 0x119AA0u;
    SET_GPR_U32(ctx, 31, 0x119AA8u);
    ctx->pc = 0x119AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119AA0u;
    // 0x119aa4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x119AA0u, 0x119AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119AA8u;
label_119aa8:
    // 0x119aa8: 0x3c070024  lui         $a3, 0x24
    ctx->pc = 0x119aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)36 << 16));
    // 0x119aac: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x119aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x119ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ab4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x119ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ab8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x119ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x119abc: 0xc0458a4  jal         func_116290
    ctx->pc = 0x119ABCu;
    SET_GPR_U32(ctx, 31, 0x119AC4u);
    ctx->pc = 0x119AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119ABCu;
    // 0x119ac0: 0xace300b0  sw          $v1, 0xB0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 176), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116290u, 0x119ABCu, 0x119AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119AC4u;
label_119ac4:
    // 0x119ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119ac8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119acc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x119accu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119ad0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x119ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x119ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x119AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119AD4u;
        // 0x119ad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119ADCu;
}
