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

// Function: entry_001ad4c8
// Address: 0x1ad4c8 - 0x1ad510
void entry_001ad4c8_0x1ad4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad4c8_0x1ad4c8");
#endif

    switch (ctx->pc) {
        case 0x1ad4d4u: goto label_1ad4d4;
        default: break;
    }

    ctx->pc = 0x1ad4c8u;

    // 0x1ad4c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ad4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4cc: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x1AD4CCu;
    SET_GPR_U32(ctx, 31, 0x1AD4D4u);
    ctx->pc = 0x1AD4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD4CCu;
    // 0x1ad4d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x1AD4CCu, 0x1AD4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4D4u;
label_1ad4d4:
    // 0x1ad4d4: 0x3c0c0004  lui         $t4, 0x4
    ctx->pc = 0x1ad4d4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4 << 16));
    // 0x1ad4d8: 0x358c60d0  ori         $t4, $t4, 0x60D0
    ctx->pc = 0x1ad4d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)24784);
    // 0x1ad4dc: 0x19d6821  addu        $t5, $t4, $sp
    ctx->pc = 0x1ad4dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x1ad4e0: 0xddbffff0  ld          $ra, -0x10($t5)
    ctx->pc = 0x1ad4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 13), 4294967280)));
    // 0x1ad4e4: 0xddbeffe0  ld          $fp, -0x20($t5)
    ctx->pc = 0x1ad4e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 13), 4294967264)));
    // 0x1ad4e8: 0xddb7ffd0  ld          $s7, -0x30($t5)
    ctx->pc = 0x1ad4e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 13), 4294967248)));
    // 0x1ad4ec: 0xddb6ffc0  ld          $s6, -0x40($t5)
    ctx->pc = 0x1ad4ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 13), 4294967232)));
    // 0x1ad4f0: 0xddb5ffb0  ld          $s5, -0x50($t5)
    ctx->pc = 0x1ad4f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 13), 4294967216)));
    // 0x1ad4f4: 0xddb4ffa0  ld          $s4, -0x60($t5)
    ctx->pc = 0x1ad4f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 13), 4294967200)));
    // 0x1ad4f8: 0xddb3ff90  ld          $s3, -0x70($t5)
    ctx->pc = 0x1ad4f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 13), 4294967184)));
    // 0x1ad4fc: 0xddb2ff80  ld          $s2, -0x80($t5)
    ctx->pc = 0x1ad4fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 13), 4294967168)));
    // 0x1ad500: 0xddb1ff70  ld          $s1, -0x90($t5)
    ctx->pc = 0x1ad500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 13), 4294967152)));
    // 0x1ad504: 0xddb0ff60  ld          $s0, -0xA0($t5)
    ctx->pc = 0x1ad504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 13), 4294967136)));
    // 0x1ad508: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD508u;
        // 0x1ad50c: 0x3ace821  addu        $sp, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD510u;
}
