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

// Function: Cmd_CAMERA_ZOOM_Entry__FP15BsSCDEntControl
// Address: 0x10f578 - 0x10f624
void Cmd_CAMERA_ZOOM_Entry__FP15BsSCDEntControl_0x10f578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CAMERA_ZOOM_Entry__FP15BsSCDEntControl_0x10f578");
#endif

    switch (ctx->pc) {
        case 0x10f5a8u: goto label_10f5a8;
        case 0x10f5c4u: goto label_10f5c4;
        case 0x10f5dcu: goto label_10f5dc;
        case 0x10f5e4u: goto label_10f5e4;
        case 0x10f608u: goto label_10f608;
        default: break;
    }

    ctx->pc = 0x10f578u;

    // 0x10f578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f57c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10f57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f580: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10f580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10f584: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10f584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10f588: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10f588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f58c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10f58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10f590: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10f590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f594: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10f594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10f598: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x10f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10f59c: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x10f59cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10f5a0: 0xc04110c  jal         func_104430
    ctx->pc = 0x10F5A0u;
    SET_GPR_U32(ctx, 31, 0x10F5A8u);
    ctx->pc = 0x10F5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5A0u;
    // 0x10f5a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10F5A0u, 0x10F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5A8u;
label_10f5a8:
    // 0x10f5a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10f5a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5ac: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x10f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x10f5b0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x10f5b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10f5b4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10F5B4u;
    {
        const bool branch_taken_0x10f5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F5B4u;
        // 0x10f5b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f5b4) {
            ctx->pc = 0x10F5DCu;
            goto label_10f5dc;
        }
    }
    ctx->pc = 0x10F5BCu;
    // 0x10f5bc: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10F5BCu;
    SET_GPR_U32(ctx, 31, 0x10F5C4u);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10F5BCu, 0x10F5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5C4u;
label_10f5c4:
    // 0x10f5c4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10f5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10f5c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5cc: 0x24a53d68  addiu       $a1, $a1, 0x3D68
    ctx->pc = 0x10f5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15720));
    // 0x10f5d0: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10f5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10f5d4: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10F5D4u;
    SET_GPR_U32(ctx, 31, 0x10F5DCu);
    ctx->pc = 0x10F5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5D4u;
    // 0x10f5d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10F5D4u, 0x10F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5DCu;
label_10f5dc:
    // 0x10f5dc: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x10F5DCu;
    SET_GPR_U32(ctx, 31, 0x10F5E4u);
    ctx->pc = 0x10F5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5DCu;
    // 0x10f5e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x10F5DCu, 0x10F5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5E4u;
label_10f5e4:
    // 0x10f5e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10f5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10f5e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10f5e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10f5ec: 0xe6200154  swc1        $f0, 0x154($s1)
    ctx->pc = 0x10f5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 340), bits); }
    // 0x10f5f0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10f5f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10f5f4: 0x0  nop
    ctx->pc = 0x10f5f4u;
    // NOP
    // 0x10f5f8: 0x0  nop
    ctx->pc = 0x10f5f8u;
    // NOP
    // 0x10f5fc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x10f5fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10f600: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x10F600u;
    SET_GPR_U32(ctx, 31, 0x10F608u);
    ctx->pc = 0x10F604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F600u;
    // 0x10f604: 0xe621015c  swc1        $f1, 0x15C($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 348), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x10F600u, 0x10F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F608u;
label_10f608:
    // 0x10f608: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x10f608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
    // 0x10f60c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f60cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f610: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10f610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10f614: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10f614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f618: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10f618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10f61c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F61Cu;
        // 0x10f620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F624u;
}
