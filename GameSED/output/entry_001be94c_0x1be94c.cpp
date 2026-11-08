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

// Function: entry_001be94c
// Address: 0x1be94c - 0x1be988
void entry_001be94c_0x1be94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be94c_0x1be94c");
#endif

    switch (ctx->pc) {
        case 0x1be954u: goto label_1be954;
        case 0x1be95cu: goto label_1be95c;
        case 0x1be970u: goto label_1be970;
        default: break;
    }

    ctx->pc = 0x1be94cu;

    // 0x1be94c: 0xc0706b8  jal         func_1C1AE0
    ctx->pc = 0x1BE94Cu;
    SET_GPR_U32(ctx, 31, 0x1BE954u);
    ctx->pc = 0x1BE950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE94Cu;
    // 0x1be950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1AE0u, 0x1BE94Cu, 0x1BE954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE954u;
label_1be954:
    // 0x1be954: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1BE954u;
    SET_GPR_U32(ctx, 31, 0x1BE95Cu);
    ctx->pc = 0x1BE958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE954u;
    // 0x1be958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1BE954u, 0x1BE95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE95Cu;
label_1be95c:
    // 0x1be95c: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x1be95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x1be960: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1be960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be964: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1be964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1be968: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1BE968u;
    SET_GPR_U32(ctx, 31, 0x1BE970u);
    ctx->pc = 0x1BE96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE968u;
    // 0x1be96c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1BE968u, 0x1BE970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE970u;
label_1be970:
    // 0x1be970: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1be970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1be974: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1be974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be978: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1be978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be97c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1be97cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be980: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE980u;
        // 0x1be984: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE988u;
}
