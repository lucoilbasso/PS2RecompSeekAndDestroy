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

// Function: Create__9ApcCqpart
// Address: 0x1db268 - 0x1db2bc
void Create__9ApcCqpart_0x1db268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__9ApcCqpart_0x1db268");
#endif

    switch (ctx->pc) {
        case 0x1db27cu: goto label_1db27c;
        case 0x1db284u: goto label_1db284;
        case 0x1db29cu: goto label_1db29c;
        case 0x1db2a8u: goto label_1db2a8;
        default: break;
    }

    ctx->pc = 0x1db268u;

    // 0x1db268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db26c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db270: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db274: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1DB274u;
    SET_GPR_U32(ctx, 31, 0x1DB27Cu);
    ctx->pc = 0x1DB278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB274u;
    // 0x1db278: 0x24042846  addiu       $a0, $zero, 0x2846 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10310));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1DB274u, 0x1DB27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB27Cu;
label_1db27c:
    // 0x1db27c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1DB27Cu;
    SET_GPR_U32(ctx, 31, 0x1DB284u);
    ctx->pc = 0x1DB280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB27Cu;
    // 0x1db280: 0x24041280  addiu       $a0, $zero, 0x1280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1DB27Cu, 0x1DB284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB284u;
label_1db284:
    // 0x1db284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1db284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db288: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1db288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1db28c: 0x2442f3b0  addiu       $v0, $v0, -0xC50
    ctx->pc = 0x1db28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964144));
    // 0x1db290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db294: 0xc059352  jal         func_164D48
    ctx->pc = 0x1DB294u;
    SET_GPR_U32(ctx, 31, 0x1DB29Cu);
    ctx->pc = 0x1DB298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB294u;
    // 0x1db298: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164D48u, 0x1DB294u, 0x1DB29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB29Cu;
label_1db29c:
    // 0x1db29c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2a0: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1DB2A0u;
    SET_GPR_U32(ctx, 31, 0x1DB2A8u);
    ctx->pc = 0x1DB2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2A0u;
    // 0x1db2a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1DB2A0u, 0x1DB2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2A8u;
label_1db2a8:
    // 0x1db2a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1db2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db2b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db2b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2B4u;
        // 0x1db2b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB2BCu;
}
