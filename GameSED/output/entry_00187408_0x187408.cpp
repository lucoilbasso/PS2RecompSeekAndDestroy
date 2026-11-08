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

// Function: entry_00187408
// Address: 0x187408 - 0x187424
void entry_00187408_0x187408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187408_0x187408");
#endif

    switch (ctx->pc) {
        case 0x187410u: goto label_187410;
        default: break;
    }

    ctx->pc = 0x187408u;

    // 0x187408: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x187408u;
    SET_GPR_U32(ctx, 31, 0x187410u);
    ctx->pc = 0x18740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187408u;
    // 0x18740c: 0xe600015c  swc1        $f0, 0x15C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x187408u, 0x187410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187410u;
label_187410:
    // 0x187410: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x187410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x187414: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x187414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18741c: 0x3e00008  jr          $ra
    ctx->pc = 0x18741Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18741Cu;
        // 0x187420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18741Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187424u;
}
