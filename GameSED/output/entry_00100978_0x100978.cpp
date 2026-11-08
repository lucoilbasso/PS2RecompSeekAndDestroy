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

// Function: entry_00100978
// Address: 0x100978 - 0x10098c
void entry_00100978_0x100978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100978_0x100978");
#endif

    switch (ctx->pc) {
        case 0x100984u: goto label_100984;
        default: break;
    }

    ctx->pc = 0x100978u;

    // 0x100978: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x100978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x10097c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x10097Cu;
    SET_GPR_U32(ctx, 31, 0x100984u);
    ctx->pc = 0x100980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10097Cu;
    // 0x100980: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x10097Cu, 0x100984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100984u;
label_100984:
    // 0x100984: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x100984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x100988: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x100988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    ctx->pc = 0x10098cu;
}
