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

// Function: entry_00195c90
// Address: 0x195c90 - 0x195ca0
void entry_00195c90_0x195c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195c90_0x195c90");
#endif

    switch (ctx->pc) {
        case 0x195c98u: goto label_195c98;
        default: break;
    }

    ctx->pc = 0x195c90u;

    // 0x195c90: 0xc0663f0  jal         func_198FC0
    ctx->pc = 0x195C90u;
    SET_GPR_U32(ctx, 31, 0x195C98u);
    ctx->pc = 0x195C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C90u;
    // 0x195c94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198FC0u, 0x195C90u, 0x195C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C98u;
label_195c98:
    // 0x195c98: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x195c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x195c9c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x195c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x195ca0u;
}
