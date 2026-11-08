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

// Function: entry_001a640c
// Address: 0x1a640c - 0x1a6434
void entry_001a640c_0x1a640c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a640c_0x1a640c");
#endif

    switch (ctx->pc) {
        case 0x1a6414u: goto label_1a6414;
        default: break;
    }

    ctx->pc = 0x1a640cu;

    // 0x1a640c: 0xc066eea  jal         func_19BBA8
    ctx->pc = 0x1A640Cu;
    SET_GPR_U32(ctx, 31, 0x1A6414u);
    ctx->pc = 0x1A6410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A640Cu;
    // 0x1a6410: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBA8u, 0x1A640Cu, 0x1A6414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6414u;
label_1a6414:
    // 0x1a6414: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a6414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a641c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a641cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a6420: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6424: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a6424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6428: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a6428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a642c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A642Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A642Cu;
        // 0x1a6430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A642Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6434u;
}
