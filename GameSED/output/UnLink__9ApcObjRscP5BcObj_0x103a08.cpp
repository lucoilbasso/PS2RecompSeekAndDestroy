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

// Function: UnLink__9ApcObjRscP5BcObj
// Address: 0x103a08 - 0x103ab8
void UnLink__9ApcObjRscP5BcObj_0x103a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnLink__9ApcObjRscP5BcObj_0x103a08");
#endif

    switch (ctx->pc) {
        case 0x103a4cu: goto label_103a4c;
        case 0x103a6cu: goto label_103a6c;
        case 0x103a88u: goto label_103a88;
        case 0x103a98u: goto label_103a98;
        case 0x103aa4u: goto label_103aa4;
        default: break;
    }

    ctx->pc = 0x103a08u;

    // 0x103a08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x103a0c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x103a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x103a10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103a14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x103a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x103a18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x103a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x103a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x103a20: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x103a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x103a24: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x103a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x103a28: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x103A28u;
    {
        const bool branch_taken_0x103a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x103A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A28u;
        // 0x103a2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a28) {
            ctx->pc = 0x103A98u;
            goto label_103a98;
        }
    }
    ctx->pc = 0x103A30u;
    // 0x103a30: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x103a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x103a34: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x103a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x103a38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x103a3c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x103A3Cu;
    {
        const bool branch_taken_0x103a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103a3c) {
            ctx->pc = 0x103A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103A3Cu;
            // 0x103a40: 0x30c3ffff  andi        $v1, $a2, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x103A58u;
            goto label_103a58;
        }
    }
    ctx->pc = 0x103A44u;
    // 0x103a44: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x103A44u;
    SET_GPR_U32(ctx, 31, 0x103A4Cu);
    ctx->pc = 0x103A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A44u;
    // 0x103a48: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x103A44u, 0x103A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A4Cu;
label_103a4c:
    // 0x103a4c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x103A4Cu;
    {
        const bool branch_taken_0x103a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A4Cu;
        // 0x103a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a4c) {
            ctx->pc = 0x103A9Cu;
            goto label_103a9c;
        }
    }
    ctx->pc = 0x103A54u;
    // 0x103a54: 0x0  nop
    ctx->pc = 0x103a54u;
    // NOP
label_103a58:
    // 0x103a58: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x103a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x103a5c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x103A5Cu;
    {
        const bool branch_taken_0x103a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x103a5c) {
            ctx->pc = 0x103A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103A5Cu;
            // 0x103a60: 0x24022118  addiu       $v0, $zero, 0x2118 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103A78u;
            goto label_103a78;
        }
    }
    ctx->pc = 0x103A64u;
    // 0x103a64: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x103A64u;
    SET_GPR_U32(ctx, 31, 0x103A6Cu);
    ctx->pc = 0x103A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A64u;
    // 0x103a68: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x103A64u, 0x103A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A6Cu;
label_103a6c:
    // 0x103a6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x103A6Cu;
    {
        const bool branch_taken_0x103a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A6Cu;
        // 0x103a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a6c) {
            ctx->pc = 0x103A9Cu;
            goto label_103a9c;
        }
    }
    ctx->pc = 0x103A74u;
    // 0x103a74: 0x0  nop
    ctx->pc = 0x103a74u;
    // NOP
label_103a78:
    // 0x103a78: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103A78u;
    {
        const bool branch_taken_0x103a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x103a78) {
            ctx->pc = 0x103A90u;
            goto label_103a90;
        }
    }
    ctx->pc = 0x103A80u;
    // 0x103a80: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x103A80u;
    SET_GPR_U32(ctx, 31, 0x103A88u);
    ctx->pc = 0x103A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A80u;
    // 0x103a84: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x103A80u, 0x103A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A88u;
label_103a88:
    // 0x103a88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x103A88u;
    {
        const bool branch_taken_0x103a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A88u;
        // 0x103a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a88) {
            ctx->pc = 0x103A9Cu;
            goto label_103a9c;
        }
    }
    ctx->pc = 0x103A90u;
label_103a90:
    // 0x103a90: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x103A90u;
    SET_GPR_U32(ctx, 31, 0x103A98u);
    ctx->pc = 0x103A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A90u;
    // 0x103a94: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x103A90u, 0x103A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A98u;
label_103a98:
    // 0x103a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_103a9c:
    // 0x103a9c: 0xc068354  jal         func_1A0D50
    ctx->pc = 0x103A9Cu;
    SET_GPR_U32(ctx, 31, 0x103AA4u);
    ctx->pc = 0x103AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A9Cu;
    // 0x103aa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D50u, 0x103A9Cu, 0x103AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103AA4u;
label_103aa4:
    // 0x103aa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103aa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103aac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x103aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x103AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103AB0u;
        // 0x103ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103AB8u;
}
