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

// Function: WHitpolyCreate__FPc
// Address: 0x182808 - 0x18286c
void WHitpolyCreate__FPc_0x182808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WHitpolyCreate__FPc_0x182808");
#endif

    switch (ctx->pc) {
        case 0x182824u: goto label_182824;
        case 0x18282cu: goto label_18282c;
        case 0x182848u: goto label_182848;
        case 0x182854u: goto label_182854;
        default: break;
    }

    ctx->pc = 0x182808u;

    // 0x182808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18280c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18280cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x182810: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x182810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x182814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18281c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x18281Cu;
    SET_GPR_U32(ctx, 31, 0x182824u);
    ctx->pc = 0x182820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18281Cu;
    // 0x182820: 0x24040405  addiu       $a0, $zero, 0x405 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x18281Cu, 0x182824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182824u;
label_182824:
    // 0x182824: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x182824u;
    SET_GPR_U32(ctx, 31, 0x18282Cu);
    ctx->pc = 0x182828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182824u;
    // 0x182828: 0x34048038  ori         $a0, $zero, 0x8038 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32824);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x182824u, 0x18282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18282Cu;
label_18282c:
    // 0x18282c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18282cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182830: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x182830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182834: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x182834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x182838: 0x2442fc98  addiu       $v0, $v0, -0x368
    ctx->pc = 0x182838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966424));
    // 0x18283c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18283cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182840: 0xc060a1c  jal         func_182870
    ctx->pc = 0x182840u;
    SET_GPR_U32(ctx, 31, 0x182848u);
    ctx->pc = 0x182844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182840u;
    // 0x182844: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182870u, 0x182840u, 0x182848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182848u;
label_182848:
    // 0x182848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18284c: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x18284Cu;
    SET_GPR_U32(ctx, 31, 0x182854u);
    ctx->pc = 0x182850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18284Cu;
    // 0x182850: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x18284Cu, 0x182854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182854u;
label_182854:
    // 0x182854: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x182854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182858: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x182858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18285c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18285cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182864: 0x3e00008  jr          $ra
    ctx->pc = 0x182864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182864u;
        // 0x182868: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18286Cu;
}
