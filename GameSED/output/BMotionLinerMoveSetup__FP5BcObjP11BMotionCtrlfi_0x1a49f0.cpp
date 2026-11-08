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

// Function: BMotionLinerMoveSetup__FP5BcObjP11BMotionCtrlfi
// Address: 0x1a49f0 - 0x1a4a70
void BMotionLinerMoveSetup__FP5BcObjP11BMotionCtrlfi_0x1a49f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionLinerMoveSetup__FP5BcObjP11BMotionCtrlfi_0x1a49f0");
#endif

    switch (ctx->pc) {
        case 0x1a49f0u: goto label_1a49f0;
        case 0x1a49f4u: goto label_1a49f4;
        case 0x1a49f8u: goto label_1a49f8;
        case 0x1a49fcu: goto label_1a49fc;
        case 0x1a4a00u: goto label_1a4a00;
        case 0x1a4a04u: goto label_1a4a04;
        case 0x1a4a08u: goto label_1a4a08;
        case 0x1a4a0cu: goto label_1a4a0c;
        case 0x1a4a10u: goto label_1a4a10;
        case 0x1a4a14u: goto label_1a4a14;
        case 0x1a4a18u: goto label_1a4a18;
        case 0x1a4a1cu: goto label_1a4a1c;
        case 0x1a4a20u: goto label_1a4a20;
        case 0x1a4a24u: goto label_1a4a24;
        case 0x1a4a28u: goto label_1a4a28;
        case 0x1a4a2cu: goto label_1a4a2c;
        case 0x1a4a30u: goto label_1a4a30;
        case 0x1a4a34u: goto label_1a4a34;
        case 0x1a4a38u: goto label_1a4a38;
        case 0x1a4a3cu: goto label_1a4a3c;
        case 0x1a4a40u: goto label_1a4a40;
        case 0x1a4a44u: goto label_1a4a44;
        case 0x1a4a48u: goto label_1a4a48;
        case 0x1a4a4cu: goto label_1a4a4c;
        case 0x1a4a50u: goto label_1a4a50;
        case 0x1a4a54u: goto label_1a4a54;
        case 0x1a4a58u: goto label_1a4a58;
        case 0x1a4a5cu: goto label_1a4a5c;
        case 0x1a4a60u: goto label_1a4a60;
        case 0x1a4a64u: goto label_1a4a64;
        case 0x1a4a68u: goto label_1a4a68;
        case 0x1a4a6cu: goto label_1a4a6c;
        default: break;
    }

    ctx->pc = 0x1a49f0u;

label_1a49f0:
    // 0x1a49f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a49f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a49f4:
    // 0x1a49f4: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
label_1a49f8:
    // 0x1a49f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a49f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a49fc:
    // 0x1a49fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a49fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a00:
    // 0x1a4a00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a4a04:
    // 0x1a4a04: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a4a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a08:
    // 0x1a4a08: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a4a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a0c:
    // 0x1a4a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a10:
    // 0x1a4a10: 0x244623d0  addiu       $a2, $v0, 0x23D0
    ctx->pc = 0x1a4a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
label_1a4a14:
    // 0x1a4a14: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a4a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a4a18:
    // 0x1a4a18: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1a4a18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a4a1c:
    // 0x1a4a1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a4a20:
    // 0x1a4a20: 0xc068866  jal         func_1A2198
label_1a4a24:
    if (ctx->pc == 0x1A4A24u) {
        ctx->pc = 0x1A4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A20u;
        // 0x1a4a24: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4A28u;
        goto label_1a4a28;
    }
    ctx->pc = 0x1A4A20u;
    SET_GPR_U32(ctx, 31, 0x1A4A28u);
    ctx->pc = 0x1A4A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4A20u;
    // 0x1a4a24: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A4A20u, 0x1A4A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A28u;
label_1a4a28:
    // 0x1a4a28: 0xa4510004  sh          $s1, 0x4($v0)
    ctx->pc = 0x1a4a28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 17));
label_1a4a2c:
    // 0x1a4a2c: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x1a4a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1a4a30:
    // 0x1a4a30: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1a4a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1a4a34:
    // 0x1a4a34: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1a4a34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1a4a38:
    // 0x1a4a38: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x1a4a38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_1a4a3c:
    // 0x1a4a3c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a4a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a40:
    // 0x1a4a40: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1a4a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1a4a44:
    // 0x1a4a44: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
label_1a4a48:
    if (ctx->pc == 0x1A4A48u) {
        ctx->pc = 0x1A4A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A44u;
        // 0x1a4a48: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4A4Cu;
        goto label_1a4a4c;
    }
    ctx->pc = 0x1A4A44u;
    {
        const bool branch_taken_0x1a4a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x1A4A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A44u;
        // 0x1a4a48: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4a44) {
            ctx->pc = 0x1A4A58u;
            goto label_1a4a58;
        }
    }
    ctx->pc = 0x1A4A4Cu;
label_1a4a4c:
    // 0x1a4a4c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1a4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1a4a50:
    // 0x1a4a50: 0x40f809  jalr        $v0
label_1a4a54:
    if (ctx->pc == 0x1A4A54u) {
        ctx->pc = 0x1A4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A50u;
        // 0x1a4a54: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4A58u;
        goto label_1a4a58;
    }
    ctx->pc = 0x1A4A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4A58u);
        ctx->pc = 0x1A4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A50u;
        // 0x1a4a54: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A50u, 0x1A4A58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4A58u;
label_1a4a58:
    // 0x1a4a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4a5c:
    // 0x1a4a5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4a5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4a60:
    // 0x1a4a60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4a64:
    // 0x1a4a64: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1a4a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a4a68:
    // 0x1a4a68: 0x3e00008  jr          $ra
label_1a4a6c:
    if (ctx->pc == 0x1A4A6Cu) {
        ctx->pc = 0x1A4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A68u;
        // 0x1a4a6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4A70u;
        goto label_fallthrough_0x1a4a68;
    }
    ctx->pc = 0x1A4A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A68u;
        // 0x1a4a6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4a68:
    ctx->pc = 0x1A4A70u;
}
