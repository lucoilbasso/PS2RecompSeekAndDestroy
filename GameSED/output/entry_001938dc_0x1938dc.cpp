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

// Function: entry_001938dc
// Address: 0x1938dc - 0x1938fc
void entry_001938dc_0x1938dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001938dc_0x1938dc");
#endif

    switch (ctx->pc) {
        case 0x1938e4u: goto label_1938e4;
        default: break;
    }

    ctx->pc = 0x1938dcu;

    // 0x1938dc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1938DCu;
    SET_GPR_U32(ctx, 31, 0x1938E4u);
    ctx->pc = 0x1938E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1938DCu;
    // 0x1938e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1938DCu, 0x1938E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1938E4u;
label_1938e4:
    // 0x1938e4: 0xae220230  sw          $v0, 0x230($s1)
    ctx->pc = 0x1938e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 2));
    // 0x1938e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1938e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1938ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1938ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1938f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1938f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1938f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1938F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1938F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938F4u;
        // 0x1938f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1938F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1938FCu;
}
