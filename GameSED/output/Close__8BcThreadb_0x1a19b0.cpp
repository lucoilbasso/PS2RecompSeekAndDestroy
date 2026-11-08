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

// Function: Close__8BcThreadb
// Address: 0x1a19b0 - 0x1a1a7c
void Close__8BcThreadb_0x1a19b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Close__8BcThreadb_0x1a19b0");
#endif

    switch (ctx->pc) {
        case 0x1a19e4u: goto label_1a19e4;
        case 0x1a19ecu: goto label_1a19ec;
        case 0x1a1a08u: goto label_1a1a08;
        case 0x1a1a18u: goto label_1a1a18;
        case 0x1a1a20u: goto label_1a1a20;
        case 0x1a1a30u: goto label_1a1a30;
        case 0x1a1a4cu: goto label_1a1a4c;
        case 0x1a1a54u: goto label_1a1a54;
        case 0x1a1a64u: goto label_1a1a64;
        default: break;
    }

    ctx->pc = 0x1a19b0u;

    // 0x1a19b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a19b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a19b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a19b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a19b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a19b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a19bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a19bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a19c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a19c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a19c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a19c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a19cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a19ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a19d0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1a19d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a19d4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A19D4u;
    {
        const bool branch_taken_0x1a19d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A19D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19D4u;
        // 0x1a19d8: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a19d4) {
            ctx->pc = 0x1A19E4u;
            goto label_1a19e4;
        }
    }
    ctx->pc = 0x1A19DCu;
    // 0x1a19dc: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1A19DCu;
    SET_GPR_U32(ctx, 31, 0x1A19E4u);
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1A19DCu, 0x1A19E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A19E4u;
label_1a19e4:
    // 0x1a19e4: 0xc06bcd4  jal         func_1AF350
    ctx->pc = 0x1A19E4u;
    SET_GPR_U32(ctx, 31, 0x1A19ECu);
    ctx->pc = 0x1AF350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF350u, 0x1A19E4u, 0x1A19ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A19ECu;
label_1a19ec:
    // 0x1a19ec: 0x1451000e  bne         $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A19ECu;
    {
        const bool branch_taken_0x1a19ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1a19ec) {
            ctx->pc = 0x1A1A28u;
            goto label_1a1a28;
        }
    }
    ctx->pc = 0x1A19F4u;
    // 0x1a19f4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a19f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a19f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A19F8u;
    {
        const bool branch_taken_0x1a19f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a19f8) {
            ctx->pc = 0x1A1A08u;
            goto label_1a1a08;
        }
    }
    ctx->pc = 0x1A1A00u;
    // 0x1a1a00: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1A1A00u;
    SET_GPR_U32(ctx, 31, 0x1A1A08u);
    ctx->pc = 0x1A1A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A00u;
    // 0x1a1a04: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1A1A00u, 0x1A1A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A08u;
label_1a1a08:
    // 0x1a1a08: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1A08u;
    {
        const bool branch_taken_0x1a1a08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A08u;
        // 0x1a1a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a08) {
            ctx->pc = 0x1A1A18u;
            goto label_1a1a18;
        }
    }
    ctx->pc = 0x1A1A10u;
    // 0x1a1a10: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1A1A10u;
    SET_GPR_U32(ctx, 31, 0x1A1A18u);
    ctx->pc = 0x1A1A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A10u;
    // 0x1a1a14: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1A1A10u, 0x1A1A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A18u;
label_1a1a18:
    // 0x1a1a18: 0xc06bca8  jal         func_1AF2A0
    ctx->pc = 0x1A1A18u;
    SET_GPR_U32(ctx, 31, 0x1A1A20u);
    ctx->pc = 0x1AF2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF2A0u, 0x1A1A18u, 0x1A1A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A20u;
label_1a1a20:
    // 0x1a1a20: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A1A20u;
    {
        const bool branch_taken_0x1a1a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A20u;
        // 0x1a1a24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a20) {
            ctx->pc = 0x1A1A68u;
            goto label_1a1a68;
        }
    }
    ctx->pc = 0x1A1A28u;
label_1a1a28:
    // 0x1a1a28: 0xc06bcac  jal         func_1AF2B0
    ctx->pc = 0x1A1A28u;
    SET_GPR_U32(ctx, 31, 0x1A1A30u);
    ctx->pc = 0x1A1A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A28u;
    // 0x1a1a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF2B0u, 0x1A1A28u, 0x1A1A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A30u;
label_1a1a30:
    // 0x1a1a30: 0x5451000d  bnel        $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A1A30u;
    {
        const bool branch_taken_0x1a1a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1a1a30) {
            ctx->pc = 0x1A1A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1A30u;
            // 0x1a1a34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1A68u;
            goto label_1a1a68;
        }
    }
    ctx->pc = 0x1A1A38u;
    // 0x1a1a38: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a1a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a1a3c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1A3Cu;
    {
        const bool branch_taken_0x1a1a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a3c) {
            ctx->pc = 0x1A1A4Cu;
            goto label_1a1a4c;
        }
    }
    ctx->pc = 0x1A1A44u;
    // 0x1a1a44: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1A1A44u;
    SET_GPR_U32(ctx, 31, 0x1A1A4Cu);
    ctx->pc = 0x1A1A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A44u;
    // 0x1a1a48: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1A1A44u, 0x1A1A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A4Cu;
label_1a1a4c:
    // 0x1a1a4c: 0xc06bc9c  jal         func_1AF270
    ctx->pc = 0x1A1A4Cu;
    SET_GPR_U32(ctx, 31, 0x1A1A54u);
    ctx->pc = 0x1A1A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A4Cu;
    // 0x1a1a50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF270u, 0x1A1A4Cu, 0x1A1A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A54u;
label_1a1a54:
    // 0x1a1a54: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1A54u;
    {
        const bool branch_taken_0x1a1a54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A54u;
        // 0x1a1a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a54) {
            ctx->pc = 0x1A1A64u;
            goto label_1a1a64;
        }
    }
    ctx->pc = 0x1A1A5Cu;
    // 0x1a1a5c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1A1A5Cu;
    SET_GPR_U32(ctx, 31, 0x1A1A64u);
    ctx->pc = 0x1A1A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A5Cu;
    // 0x1a1a60: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1A1A5Cu, 0x1A1A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A64u;
label_1a1a64:
    // 0x1a1a64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1a68:
    // 0x1a1a68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1a68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1a6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a1a6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1a70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a1a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a1a74: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A74u;
        // 0x1a1a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1A7Cu;
}
