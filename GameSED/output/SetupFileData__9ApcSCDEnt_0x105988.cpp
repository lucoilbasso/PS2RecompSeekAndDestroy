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

// Function: SetupFileData__9ApcSCDEnt
// Address: 0x105988 - 0x1059b8
void SetupFileData__9ApcSCDEnt_0x105988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetupFileData__9ApcSCDEnt_0x105988");
#endif

    switch (ctx->pc) {
        case 0x10599cu: goto label_10599c;
        default: break;
    }

    ctx->pc = 0x105988u;

    // 0x105988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x105988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10598c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10598cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105990: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x105990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x105994: 0xc060df6  jal         func_1837D8
    ctx->pc = 0x105994u;
    SET_GPR_U32(ctx, 31, 0x10599Cu);
    ctx->pc = 0x105998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105994u;
    // 0x105998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1837D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1837D8u, 0x105994u, 0x10599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10599Cu;
label_10599c:
    // 0x10599c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x10599cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1059a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1059a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1059a4: 0x2442b040  addiu       $v0, $v0, -0x4FC0
    ctx->pc = 0x1059a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946880));
    // 0x1059a8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1059a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1059ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1059acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1059b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1059B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1059B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1059B0u;
        // 0x1059b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1059B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1059B8u;
}
