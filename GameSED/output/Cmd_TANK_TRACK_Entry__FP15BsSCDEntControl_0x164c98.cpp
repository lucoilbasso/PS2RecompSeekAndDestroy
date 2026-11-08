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

// Function: Cmd_TANK_TRACK_Entry__FP15BsSCDEntControl
// Address: 0x164c98 - 0x164d44
void Cmd_TANK_TRACK_Entry__FP15BsSCDEntControl_0x164c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TANK_TRACK_Entry__FP15BsSCDEntControl_0x164c98");
#endif

    switch (ctx->pc) {
        case 0x164cccu: goto label_164ccc;
        case 0x164cecu: goto label_164cec;
        case 0x164d04u: goto label_164d04;
        case 0x164d0cu: goto label_164d0c;
        case 0x164d18u: goto label_164d18;
        case 0x164d28u: goto label_164d28;
        default: break;
    }

    ctx->pc = 0x164c98u;

    // 0x164c98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x164c9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x164c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164ca0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x164ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x164ca4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x164ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x164ca8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x164ca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x164cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164cb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x164cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x164cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x164cb8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x164cb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x164cbc: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x164cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x164cc0: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x164cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x164cc4: 0xc04110c  jal         func_104430
    ctx->pc = 0x164CC4u;
    SET_GPR_U32(ctx, 31, 0x164CCCu);
    ctx->pc = 0x164CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164CC4u;
    // 0x164cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x164CC4u, 0x164CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164CCCu;
label_164ccc:
    // 0x164ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x164cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cd4: 0x24021846  addiu       $v0, $zero, 0x1846
    ctx->pc = 0x164cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
    // 0x164cd8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x164cd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x164cdc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x164CDCu;
    {
        const bool branch_taken_0x164cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CDCu;
        // 0x164ce0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164cdc) {
            ctx->pc = 0x164D04u;
            goto label_164d04;
        }
    }
    ctx->pc = 0x164CE4u;
    // 0x164ce4: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x164CE4u;
    SET_GPR_U32(ctx, 31, 0x164CECu);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x164CE4u, 0x164CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164CECu;
label_164cec:
    // 0x164cec: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x164cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x164cf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x164cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cf4: 0x24a56ff0  addiu       $a1, $a1, 0x6FF0
    ctx->pc = 0x164cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28656));
    // 0x164cf8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x164cf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cfc: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x164CFCu;
    SET_GPR_U32(ctx, 31, 0x164D04u);
    ctx->pc = 0x164D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164CFCu;
    // 0x164d00: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x164CFCu, 0x164D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D04u;
label_164d04:
    // 0x164d04: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x164D04u;
    SET_GPR_U32(ctx, 31, 0x164D0Cu);
    ctx->pc = 0x164D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164D04u;
    // 0x164d08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x164D04u, 0x164D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D0Cu;
label_164d0c:
    // 0x164d0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x164d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d10: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x164D10u;
    SET_GPR_U32(ctx, 31, 0x164D18u);
    ctx->pc = 0x164D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164D10u;
    // 0x164d14: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x164D10u, 0x164D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D18u;
label_164d18:
    // 0x164d18: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x164d18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x164d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d20: 0xc0589ee  jal         func_1627B8
    ctx->pc = 0x164D20u;
    SET_GPR_U32(ctx, 31, 0x164D28u);
    ctx->pc = 0x164D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164D20u;
    // 0x164d24: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1627B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1627B8u, 0x164D20u, 0x164D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D28u;
label_164d28:
    // 0x164d28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164d2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164d2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164d30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164d30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164d34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x164d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164d38: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x164d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x164d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x164D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D3Cu;
        // 0x164d40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164D44u;
}
