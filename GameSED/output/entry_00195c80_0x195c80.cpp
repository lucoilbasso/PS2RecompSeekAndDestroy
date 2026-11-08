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

// Function: entry_00195c80
// Address: 0x195c80 - 0x195c90
void entry_00195c80_0x195c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195c80_0x195c80");
#endif

    switch (ctx->pc) {
        case 0x195c8cu: goto label_195c8c;
        default: break;
    }

    ctx->pc = 0x195c80u;

    // 0x195c80: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x195c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x195c84: 0xc0663b6  jal         func_198ED8
    ctx->pc = 0x195C84u;
    SET_GPR_U32(ctx, 31, 0x195C8Cu);
    ctx->pc = 0x195C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C84u;
    // 0x195c88: 0x24845200  addiu       $a0, $a0, 0x5200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198ED8u, 0x195C84u, 0x195C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C8Cu;
label_195c8c:
    // 0x195c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195c90u;
}
