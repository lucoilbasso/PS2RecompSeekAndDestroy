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

// Function: entry_0011a1f8
// Address: 0x11a1f8 - 0x11a218
void entry_0011a1f8_0x11a1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a1f8_0x11a1f8");
#endif

    switch (ctx->pc) {
        case 0x11a200u: goto label_11a200;
        default: break;
    }

    ctx->pc = 0x11a1f8u;

    // 0x11a1f8: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x11A1F8u;
    SET_GPR_U32(ctx, 31, 0x11A200u);
    ctx->pc = 0x11A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1F8u;
    // 0x11a1fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x11A1F8u, 0x11A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A200u;
label_11a200:
    // 0x11a200: 0xae0224c0  sw          $v0, 0x24C0($s0)
    ctx->pc = 0x11a200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9408), GPR_U32(ctx, 2));
    // 0x11a204: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11a204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a20c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a210: 0x3e00008  jr          $ra
    ctx->pc = 0x11A210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A210u;
        // 0x11a214: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A218u;
}
