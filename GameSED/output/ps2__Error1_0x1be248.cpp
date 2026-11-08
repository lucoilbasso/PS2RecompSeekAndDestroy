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

// Function: _Error1
// Address: 0x1be248 - 0x1be27c
void ps2__Error1_0x1be248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Error1_0x1be248");
#endif

    switch (ctx->pc) {
        case 0x1be260u: goto label_1be260;
        case 0x1be26cu: goto label_1be26c;
        default: break;
    }

    ctx->pc = 0x1be248u;

    // 0x1be248: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1be248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1be24c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x1be24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x1be250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be254: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1be254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1be258: 0xc0741de  jal         func_1D0778
    ctx->pc = 0x1BE258u;
    SET_GPR_U32(ctx, 31, 0x1BE260u);
    ctx->pc = 0x1BE25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE258u;
    // 0x1be25c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0778u, 0x1BE258u, 0x1BE260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE260u;
label_1be260:
    // 0x1be260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be264: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1BE264u;
    SET_GPR_U32(ctx, 31, 0x1BE26Cu);
    ctx->pc = 0x1BE268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE264u;
    // 0x1be268: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1BE264u, 0x1BE26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE26Cu;
label_1be26c:
    // 0x1be26c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1be26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1be270: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1be270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1be274: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE274u;
        // 0x1be278: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE27Cu;
}
