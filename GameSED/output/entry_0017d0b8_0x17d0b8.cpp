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

// Function: entry_0017d0b8
// Address: 0x17d0b8 - 0x17d0c8
void entry_0017d0b8_0x17d0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d0b8_0x17d0b8");
#endif

    switch (ctx->pc) {
        case 0x17d0c4u: goto label_17d0c4;
        default: break;
    }

    ctx->pc = 0x17d0b8u;

    // 0x17d0b8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17d0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17d0bc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17D0BCu;
    SET_GPR_U32(ctx, 31, 0x17D0C4u);
    ctx->pc = 0x17D0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0BCu;
    // 0x17d0c0: 0x24a57ba8  addiu       $a1, $a1, 0x7BA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17D0BCu, 0x17D0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D0C4u;
label_17d0c4:
    // 0x17d0c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x17d0c8u;
}
