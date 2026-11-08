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

// Function: entry_00176260
// Address: 0x176260 - 0x176284
void entry_00176260_0x176260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176260_0x176260");
#endif

    switch (ctx->pc) {
        case 0x17626cu: goto label_17626c;
        default: break;
    }

    ctx->pc = 0x176260u;

    // 0x176260: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176264: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x176264u;
    SET_GPR_U32(ctx, 31, 0x17626Cu);
    ctx->pc = 0x176268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176264u;
    // 0x176268: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x176264u, 0x17626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17626Cu;
label_17626c:
    // 0x17626c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x17626cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x176270: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x176270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x176274: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x176274u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x176278: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x176278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17627c: 0x3e00008  jr          $ra
    ctx->pc = 0x17627Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17627Cu;
        // 0x176280: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17627Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176284u;
}
