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

// Function: videoDecIsFlushed
// Address: 0x171970 - 0x1719b8
void videoDecIsFlushed_0x171970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecIsFlushed_0x171970");
#endif

    switch (ctx->pc) {
        case 0x17198cu: goto label_17198c;
        case 0x17199cu: goto label_17199c;
        default: break;
    }

    ctx->pc = 0x171970u;

    // 0x171970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171974: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171978: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17197c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17197cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
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
            goto label_1719a0;
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
label_1719a0:
    // 0x1719a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1719a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1719a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1719a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1719a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1719a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1719ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1719acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1719b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1719B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1719B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719B0u;
        // 0x1719b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1719B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1719B8u;
}
