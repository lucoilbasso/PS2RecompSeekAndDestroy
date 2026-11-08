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

// Function: Cmd_LIGHT_POWER_Entry__FP15BsSCDEntControl
// Address: 0x10d5b8 - 0x10d67c
void Cmd_LIGHT_POWER_Entry__FP15BsSCDEntControl_0x10d5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LIGHT_POWER_Entry__FP15BsSCDEntControl_0x10d5b8");
#endif

    switch (ctx->pc) {
        case 0x10d5ecu: goto label_10d5ec;
        case 0x10d618u: goto label_10d618;
        case 0x10d630u: goto label_10d630;
        case 0x10d638u: goto label_10d638;
        default: break;
    }

    ctx->pc = 0x10d5b8u;

    // 0x10d5b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10d5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10d5bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10d5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d5c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d5c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10d5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10d5c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d5c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d5cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10d5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10d5d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10d5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d5d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10d5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10d5d8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10d5dc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x10d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10d5e0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x10d5e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d5e4: 0xc04110c  jal         func_104430
    ctx->pc = 0x10D5E4u;
    SET_GPR_U32(ctx, 31, 0x10D5ECu);
    ctx->pc = 0x10D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D5E4u;
    // 0x10d5e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10D5E4u, 0x10D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D5ECu;
label_10d5ec:
    // 0x10d5ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d5f0: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x10d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x10d5f4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x10d5f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d5f8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D5F8u;
    {
        const bool branch_taken_0x10d5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5F8u;
        // 0x10d5fc: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d5f8) {
            ctx->pc = 0x10D608u;
            goto label_10d608;
        }
    }
    ctx->pc = 0x10D600u;
    // 0x10d600: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10D600u;
    {
        const bool branch_taken_0x10d600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D600u;
        // 0x10d604: 0x8e1001c0  lw          $s0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d600) {
            ctx->pc = 0x10D630u;
            goto label_10d630;
        }
    }
    ctx->pc = 0x10D608u;
label_10d608:
    // 0x10d608: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10D608u;
    {
        const bool branch_taken_0x10d608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10d608) {
            ctx->pc = 0x10D630u;
            goto label_10d630;
        }
    }
    ctx->pc = 0x10D610u;
    // 0x10d610: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10D610u;
    SET_GPR_U32(ctx, 31, 0x10D618u);
    ctx->pc = 0x10D614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D610u;
    // 0x10d614: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10D610u, 0x10D618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D618u;
label_10d618:
    // 0x10d618: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10d618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10d61c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10d61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d620: 0x24a53c88  addiu       $a1, $a1, 0x3C88
    ctx->pc = 0x10d620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15496));
    // 0x10d624: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10d624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10d628: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10D628u;
    SET_GPR_U32(ctx, 31, 0x10D630u);
    ctx->pc = 0x10D62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D628u;
    // 0x10d62c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10D628u, 0x10D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D630u;
label_10d630:
    // 0x10d630: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x10D630u;
    SET_GPR_U32(ctx, 31, 0x10D638u);
    ctx->pc = 0x10D634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D630u;
    // 0x10d634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x10D630u, 0x10D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D638u;
label_10d638:
    // 0x10d638: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x10d638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x10d63c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10d63cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10d640: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x10d640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x10d644: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x10d644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x10d648: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x10d648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10d64c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10d64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10d650: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10d650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10d654: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10d654u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d658: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x10d658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x10d65c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10d65cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10d660: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10d660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10d664: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x10d664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x10d668: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x10d668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x10d66c: 0xe600022c  swc1        $f0, 0x22C($s0)
    ctx->pc = 0x10d66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 556), bits); }
    // 0x10d670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d674: 0x3e00008  jr          $ra
    ctx->pc = 0x10D674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D674u;
        // 0x10d678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D67Cu;
}
