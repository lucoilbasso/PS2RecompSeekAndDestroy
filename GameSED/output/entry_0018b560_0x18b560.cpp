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

// Function: entry_0018b560
// Address: 0x18b560 - 0x18b56c
void entry_0018b560_0x18b560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b560_0x18b560");
#endif

    switch (ctx->pc) {
        case 0x18b568u: goto label_18b568;
        default: break;
    }

    ctx->pc = 0x18b560u;

    // 0x18b560: 0xc0629a2  jal         func_18A688
    ctx->pc = 0x18B560u;
    SET_GPR_U32(ctx, 31, 0x18B568u);
    ctx->pc = 0x18B564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B560u;
    // 0x18b564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A688u, 0x18B560u, 0x18B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B568u;
label_18b568:
    // 0x18b568: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x18b568u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    ctx->pc = 0x18b56cu;
}
