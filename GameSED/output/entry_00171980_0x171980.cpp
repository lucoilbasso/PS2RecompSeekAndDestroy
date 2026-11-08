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

// Function: entry_00171980
// Address: 0x171980 - 0x1719a0
void entry_00171980_0x171980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171980_0x171980");
#endif

    switch (ctx->pc) {
        case 0x17198cu: goto label_17198c;
        case 0x17199cu: goto label_17199c;
        default: break;
    }

    ctx->pc = 0x171980u;

    // 0x171980: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x171980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x171984: 0xc05c614  jal         func_171850
    ctx->pc = 0x171984u;
    SET_GPR_U32(ctx, 31, 0x17198Cu);
    ctx->pc = 0x171988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171984u;
    // 0x171988: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171850u, 0x171984u, 0x17198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17198Cu;
label_17198c:
    // 0x17198c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17198Cu;
    {
        const bool branch_taken_0x17198c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17198Cu;
        // 0x171990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17198c) {
            ctx->pc = 0x1719A0u;
            return;
        }
    }
    ctx->pc = 0x171994u;
    // 0x171994: 0xc06f64c  jal         func_1BD930
    ctx->pc = 0x171994u;
    SET_GPR_U32(ctx, 31, 0x17199Cu);
    ctx->pc = 0x1BD930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD930u, 0x171994u, 0x17199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17199Cu;
label_17199c:
    // 0x17199c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x17199cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x1719a0u;
}
