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

// Function: entry_0018b4b0
// Address: 0x18b4b0 - 0x18b4bc
void entry_0018b4b0_0x18b4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b4b0_0x18b4b0");
#endif

    switch (ctx->pc) {
        case 0x18b4b8u: goto label_18b4b8;
        default: break;
    }

    ctx->pc = 0x18b4b0u;

    // 0x18b4b0: 0xc0629a2  jal         func_18A688
    ctx->pc = 0x18B4B0u;
    SET_GPR_U32(ctx, 31, 0x18B4B8u);
    ctx->pc = 0x18B4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B4B0u;
    // 0x18b4b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A688u, 0x18B4B0u, 0x18B4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B4B8u;
label_18b4b8:
    // 0x18b4b8: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x18b4b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    ctx->pc = 0x18b4bcu;
}
