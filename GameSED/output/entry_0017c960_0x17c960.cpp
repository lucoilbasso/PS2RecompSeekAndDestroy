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

// Function: entry_0017c960
// Address: 0x17c960 - 0x17c984
void entry_0017c960_0x17c960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c960_0x17c960");
#endif

    switch (ctx->pc) {
        case 0x17c96cu: goto label_17c96c;
        default: break;
    }

    ctx->pc = 0x17c960u;

    // 0x17c960: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17c960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c964: 0xc060fc6  jal         func_183F18
    ctx->pc = 0x17C964u;
    SET_GPR_U32(ctx, 31, 0x17C96Cu);
    ctx->pc = 0x17C968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C964u;
    // 0x17c968: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183F18u, 0x17C964u, 0x17C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C96Cu;
label_17c96c:
    // 0x17c96c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c96cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c970: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17c970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c974: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17c974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c978: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17c978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17c97c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C97Cu;
        // 0x17c980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C984u;
}
