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

// Function: WSeStdCreate__Fv
// Address: 0x17b6b8 - 0x17b70c
void WSeStdCreate__Fv_0x17b6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSeStdCreate__Fv_0x17b6b8");
#endif

    switch (ctx->pc) {
        case 0x17b6ccu: goto label_17b6cc;
        case 0x17b6d4u: goto label_17b6d4;
        case 0x17b6ecu: goto label_17b6ec;
        case 0x17b6f8u: goto label_17b6f8;
        default: break;
    }

    ctx->pc = 0x17b6b8u;

    // 0x17b6b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b6bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b6c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17b6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17b6c4: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x17B6C4u;
    SET_GPR_U32(ctx, 31, 0x17B6CCu);
    ctx->pc = 0x17B6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B6C4u;
    // 0x17b6c8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x17B6C4u, 0x17B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6CCu;
label_17b6cc:
    // 0x17b6cc: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x17B6CCu;
    SET_GPR_U32(ctx, 31, 0x17B6D4u);
    ctx->pc = 0x17B6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B6CCu;
    // 0x17b6d0: 0x24041810  addiu       $a0, $zero, 0x1810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x17B6CCu, 0x17B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6D4u;
label_17b6d4:
    // 0x17b6d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6d8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x17b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x17b6dc: 0x2442fad0  addiu       $v0, $v0, -0x530
    ctx->pc = 0x17b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965968));
    // 0x17b6e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6e4: 0xc05edc4  jal         func_17B710
    ctx->pc = 0x17B6E4u;
    SET_GPR_U32(ctx, 31, 0x17B6ECu);
    ctx->pc = 0x17B6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B6E4u;
    // 0x17b6e8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B710u, 0x17B6E4u, 0x17B6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6ECu;
label_17b6ec:
    // 0x17b6ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6f0: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x17B6F0u;
    SET_GPR_U32(ctx, 31, 0x17B6F8u);
    ctx->pc = 0x17B6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B6F0u;
    // 0x17b6f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x17B6F0u, 0x17B6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6F8u;
label_17b6f8:
    // 0x17b6f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17b6f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17b6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b704: 0x3e00008  jr          $ra
    ctx->pc = 0x17B704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B704u;
        // 0x17b708: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B70Cu;
}
