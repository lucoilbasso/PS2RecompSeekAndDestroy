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

// Function: Create__9WcHitDrawP15WHitpolyPackage
// Address: 0x1de480 - 0x1de4ec
void Create__9WcHitDrawP15WHitpolyPackage_0x1de480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__9WcHitDrawP15WHitpolyPackage_0x1de480");
#endif

    switch (ctx->pc) {
        case 0x1de49cu: goto label_1de49c;
        case 0x1de4a4u: goto label_1de4a4;
        case 0x1de4bcu: goto label_1de4bc;
        case 0x1de4d4u: goto label_1de4d4;
        default: break;
    }

    ctx->pc = 0x1de480u;

    // 0x1de480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de484: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de488: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1de488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de48c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de490: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1de494: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1DE494u;
    SET_GPR_U32(ctx, 31, 0x1DE49Cu);
    ctx->pc = 0x1DE498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE494u;
    // 0x1de498: 0x24040106  addiu       $a0, $zero, 0x106 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1DE494u, 0x1DE49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE49Cu;
label_1de49c:
    // 0x1de49c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1DE49Cu;
    SET_GPR_U32(ctx, 31, 0x1DE4A4u);
    ctx->pc = 0x1DE4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE49Cu;
    // 0x1de4a0: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1DE49Cu, 0x1DE4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4A4u;
label_1de4a4:
    // 0x1de4a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1de4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4a8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1de4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1de4ac: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x1de4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1de4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4b4: 0xc061258  jal         func_184960
    ctx->pc = 0x1DE4B4u;
    SET_GPR_U32(ctx, 31, 0x1DE4BCu);
    ctx->pc = 0x1DE4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4B4u;
    // 0x1de4b8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x1DE4B4u, 0x1DE4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4BCu;
label_1de4bc:
    // 0x1de4bc: 0x24020106  addiu       $v0, $zero, 0x106
    ctx->pc = 0x1de4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x1de4c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1de4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1de4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4c8: 0xae110150  sw          $s1, 0x150($s0)
    ctx->pc = 0x1de4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
    // 0x1de4cc: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1DE4CCu;
    SET_GPR_U32(ctx, 31, 0x1DE4D4u);
    ctx->pc = 0x1DE4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4CCu;
    // 0x1de4d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1DE4CCu, 0x1DE4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4D4u;
label_1de4d4:
    // 0x1de4d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1de4d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de4d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de4dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de4dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de4e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4E4u;
        // 0x1de4e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE4ECu;
}
