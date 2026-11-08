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

// Function: entry_0017dea4
// Address: 0x17dea4 - 0x17def8
void entry_0017dea4_0x17dea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dea4_0x17dea4");
#endif

    switch (ctx->pc) {
        case 0x17deacu: goto label_17deac;
        case 0x17deccu: goto label_17decc;
        case 0x17dedcu: goto label_17dedc;
        default: break;
    }

    ctx->pc = 0x17dea4u;

    // 0x17dea4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17DEA4u;
    SET_GPR_U32(ctx, 31, 0x17DEACu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17DEA4u, 0x17DEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DEACu;
label_17deac:
    // 0x17deac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17deacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17deb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17deb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17deb4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17deb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17deb8: 0x26080020  addiu       $t0, $s0, 0x20
    ctx->pc = 0x17deb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17debc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17debcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dec0: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x17dec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x17dec4: 0xc0686a0  jal         func_1A1A80
    ctx->pc = 0x17DEC4u;
    SET_GPR_U32(ctx, 31, 0x17DECCu);
    ctx->pc = 0x17DEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DEC4u;
    // 0x17dec8: 0x240903f8  addiu       $t1, $zero, 0x3F8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1A80u, 0x17DEC4u, 0x17DECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DECCu;
label_17decc:
    // 0x17decc: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x17deccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x17ded0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17ded0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17ded4: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x17DED4u;
    SET_GPR_U32(ctx, 31, 0x17DEDCu);
    ctx->pc = 0x17DED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DED4u;
    // 0x17ded8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x17DED4u, 0x17DEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DEDCu;
label_17dedc:
    // 0x17dedc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17dedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17dee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17dee4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17dee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dee8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17dee8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17deec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17deecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17def0: 0x3e00008  jr          $ra
    ctx->pc = 0x17DEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEF0u;
        // 0x17def4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DEF8u;
}
