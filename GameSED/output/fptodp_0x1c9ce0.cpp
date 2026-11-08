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

// Function: fptodp
// Address: 0x1c9ce0 - 0x1c9d1c
void fptodp_0x1c9ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptodp_0x1c9ce0");
#endif

    switch (ctx->pc) {
        case 0x1c9cf8u: goto label_1c9cf8;
        case 0x1c9d10u: goto label_1c9d10;
        default: break;
    }

    ctx->pc = 0x1c9ce0u;

    // 0x1c9ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c9ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c9ce4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c9ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c9ce8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c9ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9cec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c9cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c9cf0: 0xc07392c  jal         func_1CE4B0
    ctx->pc = 0x1C9CF0u;
    SET_GPR_U32(ctx, 31, 0x1C9CF8u);
    ctx->pc = 0x1C9CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9CF0u;
    // 0x1c9cf4: 0xe7ac0010  swc1        $f12, 0x10($sp) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE4B0u, 0x1C9CF0u, 0x1C9CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9CF8u;
label_1c9cf8:
    // 0x1c9cf8: 0x9fa7000c  lwu         $a3, 0xC($sp)
    ctx->pc = 0x1c9cf8u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1c9cfc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1c9cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9d00: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1c9d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c9d04: 0x73fb8  dsll        $a3, $a3, 30
    ctx->pc = 0x1c9d04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 30);
    // 0x1c9d08: 0xc07296c  jal         func_1CA5B0
    ctx->pc = 0x1C9D08u;
    SET_GPR_U32(ctx, 31, 0x1C9D10u);
    ctx->pc = 0x1C9D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D08u;
    // 0x1c9d0c: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA5B0u, 0x1C9D08u, 0x1C9D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D10u;
label_1c9d10:
    // 0x1c9d10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c9d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9d14: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D14u;
        // 0x1c9d18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9D1Cu;
}
