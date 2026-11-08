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

// Function: BMotionGetPacket__FP5BcObj
// Address: 0x1a40a0 - 0x1a41bc
void BMotionGetPacket__FP5BcObj_0x1a40a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionGetPacket__FP5BcObj_0x1a40a0");
#endif

    switch (ctx->pc) {
        case 0x1a40c4u: goto label_1a40c4;
        case 0x1a4100u: goto label_1a4100;
        case 0x1a4108u: goto label_1a4108;
        case 0x1a411cu: goto label_1a411c;
        case 0x1a4158u: goto label_1a4158;
        case 0x1a4160u: goto label_1a4160;
        default: break;
    }

    ctx->pc = 0x1a40a0u;

    // 0x1a40a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a40a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a40a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a40a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a40a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a40a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a40ac: 0x8f849190  lw          $a0, -0x6E70($gp)
    ctx->pc = 0x1a40acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939024)));
    // 0x1a40b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a40b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a40b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a40b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a40b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a40b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a40bc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1A40BCu;
    SET_GPR_U32(ctx, 31, 0x1A40C4u);
    ctx->pc = 0x1A40C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A40BCu;
    // 0x1a40c0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1A40BCu, 0x1A40C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A40C4u;
label_1a40c4:
    // 0x1a40c4: 0x8f919180  lw          $s1, -0x6E80($gp)
    ctx->pc = 0x1a40c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939008)));
    // 0x1a40c8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a40c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a40cc: 0x24a592f0  addiu       $a1, $a1, -0x6D10
    ctx->pc = 0x1a40ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939376));
    // 0x1a40d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a40d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a40d4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A40D4u;
    {
        const bool branch_taken_0x1a40d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40D4u;
        // 0x1a40d8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a40d4) {
            ctx->pc = 0x1A40F8u;
            goto label_1a40f8;
        }
    }
    ctx->pc = 0x1A40DCu;
    // 0x1a40dc: 0x8f829188  lw          $v0, -0x6E78($gp)
    ctx->pc = 0x1a40dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939016)));
    // 0x1a40e0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1a40e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a40e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a40e8: 0xaf839180  sw          $v1, -0x6E80($gp)
    ctx->pc = 0x1a40e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939008), GPR_U32(ctx, 3));
    // 0x1a40ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A40ECu;
    {
        const bool branch_taken_0x1a40ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40ECu;
        // 0x1a40f0: 0xaf829188  sw          $v0, -0x6E78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a40ec) {
            ctx->pc = 0x1A4100u;
            goto label_1a4100;
        }
    }
    ctx->pc = 0x1A40F4u;
    // 0x1a40f4: 0x0  nop
    ctx->pc = 0x1a40f4u;
    // NOP
label_1a40f8:
    // 0x1a40f8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A40F8u;
    SET_GPR_U32(ctx, 31, 0x1A4100u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A40F8u, 0x1A4100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4100u;
label_1a4100:
    // 0x1a4100: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1A4100u;
    SET_GPR_U32(ctx, 31, 0x1A4108u);
    ctx->pc = 0x1A4104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4100u;
    // 0x1a4104: 0x8f849190  lw          $a0, -0x6E70($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939024)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1A4100u, 0x1A4108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4108u;
label_1a4108:
    // 0x1a4108: 0x8f84918c  lw          $a0, -0x6E74($gp)
    ctx->pc = 0x1a4108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
    // 0x1a410c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1a410cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1a4110: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1a4110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1a4114: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1A4114u;
    SET_GPR_U32(ctx, 31, 0x1A411Cu);
    ctx->pc = 0x1A4118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4114u;
    // 0x1a4118: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1A4114u, 0x1A411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A411Cu;
label_1a411c:
    // 0x1a411c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a411cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a4120: 0x8f90917c  lw          $s0, -0x6E84($gp)
    ctx->pc = 0x1a4120u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939004)));
    // 0x1a4124: 0x24a592e0  addiu       $a1, $a1, -0x6D20
    ctx->pc = 0x1a4124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939360));
    // 0x1a4128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a412c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A412Cu;
    {
        const bool branch_taken_0x1a412c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A412Cu;
        // 0x1a4130: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a412c) {
            ctx->pc = 0x1A4150u;
            goto label_1a4150;
        }
    }
    ctx->pc = 0x1A4134u;
    // 0x1a4134: 0x8f829184  lw          $v0, -0x6E7C($gp)
    ctx->pc = 0x1a4134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939012)));
    // 0x1a4138: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1a4138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a413c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a4140: 0xaf83917c  sw          $v1, -0x6E84($gp)
    ctx->pc = 0x1a4140u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939004), GPR_U32(ctx, 3));
    // 0x1a4144: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4144u;
    {
        const bool branch_taken_0x1a4144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4144u;
        // 0x1a4148: 0xaf829184  sw          $v0, -0x6E7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939012), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4144) {
            ctx->pc = 0x1A4158u;
            goto label_1a4158;
        }
    }
    ctx->pc = 0x1A414Cu;
    // 0x1a414c: 0x0  nop
    ctx->pc = 0x1a414cu;
    // NOP
label_1a4150:
    // 0x1a4150: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A4150u;
    SET_GPR_U32(ctx, 31, 0x1A4158u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A4150u, 0x1A4158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4158u;
label_1a4158:
    // 0x1a4158: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1A4158u;
    SET_GPR_U32(ctx, 31, 0x1A4160u);
    ctx->pc = 0x1A415Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4158u;
    // 0x1a415c: 0x8f84918c  lw          $a0, -0x6E74($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1A4158u, 0x1A4160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4160u;
label_1a4160:
    // 0x1a4160: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a4160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4164: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1a4164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x1a4168: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1a4168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1a416c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1a416cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1a4170: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1a4170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1a4174: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x1a4174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x1a4178: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x1a4178u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a417c: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x1a417cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x1a4180: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x1a4180u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a4184: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x1a4184u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a4188: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x1a4188u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a418c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a418cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a4190: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1a4190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1a4194: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1a4194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1a4198: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1a4198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1a419c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1a419cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1a41a0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1a41a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1a41a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a41a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a41a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a41a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a41ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a41acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a41b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a41b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a41b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A41B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A41B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41B4u;
        // 0x1a41b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A41B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A41BCu;
}
