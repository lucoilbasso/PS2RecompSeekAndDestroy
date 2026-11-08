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

// Function: entry_001b77f8
// Address: 0x1b77f8 - 0x1b7824
void entry_001b77f8_0x1b77f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b77f8_0x1b77f8");
#endif

    switch (ctx->pc) {
        case 0x1b7818u: goto label_1b7818;
        default: break;
    }

    ctx->pc = 0x1b77f8u;

    // 0x1b77f8: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x1b77f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1b77fc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b77fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b7800: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7804: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b7804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7808: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1b7808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1b780c: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x1b780cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1b7810: 0xc06be24  jal         func_1AF890
    ctx->pc = 0x1B7810u;
    SET_GPR_U32(ctx, 31, 0x1B7818u);
    ctx->pc = 0x1B7814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7810u;
    // 0x1b7814: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF890u, 0x1B7810u, 0x1B7818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7818u;
label_1b7818:
    // 0x1b7818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b781c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B781Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B781Cu;
        // 0x1b7820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B781Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7824u;
}
