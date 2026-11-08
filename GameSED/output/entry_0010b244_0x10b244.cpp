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

// Function: entry_0010b244
// Address: 0x10b244 - 0x10b254
void entry_0010b244_0x10b244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b244_0x10b244");
#endif

    switch (ctx->pc) {
        case 0x10b250u: goto label_10b250;
        default: break;
    }

    ctx->pc = 0x10b244u;

    // 0x10b244: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10b244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b248: 0xc0637e6  jal         func_18DF98
    ctx->pc = 0x10B248u;
    SET_GPR_U32(ctx, 31, 0x10B250u);
    ctx->pc = 0x10B24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B248u;
    // 0x10b24c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF98u, 0x10B248u, 0x10B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B250u;
label_10b250:
    // 0x10b250: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10b250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x10b254u;
}
