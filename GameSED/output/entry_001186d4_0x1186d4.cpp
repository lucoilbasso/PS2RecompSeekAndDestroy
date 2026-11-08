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

// Function: entry_001186d4
// Address: 0x1186d4 - 0x1186f0
void entry_001186d4_0x1186d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001186d4_0x1186d4");
#endif

    switch (ctx->pc) {
        case 0x1186ecu: goto label_1186ec;
        default: break;
    }

    ctx->pc = 0x1186d4u;

    // 0x1186d4: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1186d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1186d8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1186d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1186dc: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x1186dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x1186e0: 0x24a5d1a0  addiu       $a1, $a1, -0x2E60
    ctx->pc = 0x1186e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955424));
    // 0x1186e4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1186E4u;
    SET_GPR_U32(ctx, 31, 0x1186ECu);
    ctx->pc = 0x1186E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1186E4u;
    // 0x1186e8: 0x24060033  addiu       $a2, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1186E4u, 0x1186ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1186ECu;
label_1186ec:
    // 0x1186ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1186ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1186f0u;
}
