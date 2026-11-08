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

// Function: entry_001b199c
// Address: 0x1b199c - 0x1b19c4
void entry_001b199c_0x1b199c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b199c_0x1b199c");
#endif

    switch (ctx->pc) {
        case 0x1b19acu: goto label_1b19ac;
        case 0x1b19bcu: goto label_1b19bc;
        default: break;
    }

    ctx->pc = 0x1b199cu;

    // 0x1b199c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b199cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1b19a0: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x1b19a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    // 0x1b19a4: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B19A4u;
    SET_GPR_U32(ctx, 31, 0x1B19ACu);
    ctx->pc = 0x1B19A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B19A4u;
    // 0x1b19a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B19A4u, 0x1B19ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B19ACu;
label_1b19ac:
    // 0x1b19ac: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B19ACu;
    {
        const bool branch_taken_0x1b19ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19ACu;
        // 0x1b19b0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b19ac) {
            ctx->pc = 0x1B19C4u;
            return;
        }
    }
    ctx->pc = 0x1B19B4u;
    // 0x1b19b4: 0xc06c4a4  jal         func_1B1290
    ctx->pc = 0x1B19B4u;
    SET_GPR_U32(ctx, 31, 0x1B19BCu);
    ctx->pc = 0x1B19B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B19B4u;
    // 0x1b19b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1290u, 0x1B19B4u, 0x1B19BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B19BCu;
label_1b19bc:
    // 0x1b19bc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B19BCu;
    {
        const bool branch_taken_0x1b19bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19BCu;
        // 0x1b19c0: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b19bc) {
            ctx->pc = 0x1B1A1Cu;
            return;
        }
    }
    ctx->pc = 0x1B19C4u;
}
