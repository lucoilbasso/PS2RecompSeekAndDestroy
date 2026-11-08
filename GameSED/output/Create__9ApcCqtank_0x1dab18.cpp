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

// Function: Create__9ApcCqtank
// Address: 0x1dab18 - 0x1dab6c
void Create__9ApcCqtank_0x1dab18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__9ApcCqtank_0x1dab18");
#endif

    switch (ctx->pc) {
        case 0x1dab2cu: goto label_1dab2c;
        case 0x1dab34u: goto label_1dab34;
        case 0x1dab4cu: goto label_1dab4c;
        case 0x1dab58u: goto label_1dab58;
        default: break;
    }

    ctx->pc = 0x1dab18u;

    // 0x1dab18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dab18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dab1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dab1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dab20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dab20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dab24: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1DAB24u;
    SET_GPR_U32(ctx, 31, 0x1DAB2Cu);
    ctx->pc = 0x1DAB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB24u;
    // 0x1dab28: 0x24041846  addiu       $a0, $zero, 0x1846 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1DAB24u, 0x1DAB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB2Cu;
label_1dab2c:
    // 0x1dab2c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1DAB2Cu;
    SET_GPR_U32(ctx, 31, 0x1DAB34u);
    ctx->pc = 0x1DAB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB2Cu;
    // 0x1dab30: 0x24041b00  addiu       $a0, $zero, 0x1B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1DAB2Cu, 0x1DAB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB34u;
label_1dab34:
    // 0x1dab34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dab34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab38: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1dab38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1dab3c: 0x2442f300  addiu       $v0, $v0, -0xD00
    ctx->pc = 0x1dab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963968));
    // 0x1dab40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab44: 0xc0583be  jal         func_160EF8
    ctx->pc = 0x1DAB44u;
    SET_GPR_U32(ctx, 31, 0x1DAB4Cu);
    ctx->pc = 0x1DAB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB44u;
    // 0x1dab48: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160EF8u, 0x1DAB44u, 0x1DAB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB4Cu;
label_1dab4c:
    // 0x1dab4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dab4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab50: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1DAB50u;
    SET_GPR_U32(ctx, 31, 0x1DAB58u);
    ctx->pc = 0x1DAB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB50u;
    // 0x1dab54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1DAB50u, 0x1DAB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB58u;
label_1dab58:
    // 0x1dab58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dab58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dab5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dab60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dab60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dab64: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB64u;
        // 0x1dab68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAB6Cu;
}
