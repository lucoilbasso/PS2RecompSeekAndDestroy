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

// Function: entry_001452c8
// Address: 0x1452c8 - 0x145308
void entry_001452c8_0x1452c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001452c8_0x1452c8");
#endif

    switch (ctx->pc) {
        case 0x1452d4u: goto label_1452d4;
        default: break;
    }

    ctx->pc = 0x1452c8u;

    // 0x1452c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1452c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1452cc: 0xc05fa5c  jal         func_17E970
    ctx->pc = 0x1452CCu;
    SET_GPR_U32(ctx, 31, 0x1452D4u);
    ctx->pc = 0x1452D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1452CCu;
    // 0x1452d0: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E970u, 0x1452CCu, 0x1452D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1452D4u;
label_1452d4:
    // 0x1452d4: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1452d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1452d8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1452d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1452dc: 0x2631824  and         $v1, $s3, $v1
    ctx->pc = 0x1452dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x1452e0: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x1452e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1452e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1452e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1452e8: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x1452e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1452ec: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1452ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1452f0: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x1452f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1452f4: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x1452f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1452f8: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x1452f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1452fc: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x1452fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x145300: 0x3e00008  jr          $ra
    ctx->pc = 0x145300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145300u;
        // 0x145304: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145308u;
}
