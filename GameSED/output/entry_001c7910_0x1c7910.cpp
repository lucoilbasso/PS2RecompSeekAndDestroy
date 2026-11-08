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

// Function: entry_001c7910
// Address: 0x1c7910 - 0x1c7940
void entry_001c7910_0x1c7910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7910_0x1c7910");
#endif

    switch (ctx->pc) {
        case 0x1c792cu: goto label_1c792c;
        default: break;
    }

    ctx->pc = 0x1c7910u;

    // 0x1c7910: 0xfcd40008  sd          $s4, 0x8($a2)
    ctx->pc = 0x1c7910u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 20));
    // 0x1c7914: 0x53c0006c  beql        $fp, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x1C7914u;
    {
        const bool branch_taken_0x1c7914 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7914) {
            ctx->pc = 0x1C7918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7914u;
            // 0x1c7918: 0x8fa3024c  lw          $v1, 0x24C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7AC8u;
            return;
        }
    }
    ctx->pc = 0x1C791Cu;
    // 0x1c791c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c791cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7920: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c7920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7924: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7924u;
    SET_GPR_U32(ctx, 31, 0x1C792Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7924u, 0x1C792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C792Cu;
label_1c792c:
    // 0x1c792c: 0x8fa80234  lw          $t0, 0x234($sp)
    ctx->pc = 0x1c792cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1c7930: 0xfd020008  sd          $v0, 0x8($t0)
    ctx->pc = 0x1c7930u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
    // 0x1c7934: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1C7934u;
    {
        const bool branch_taken_0x1c7934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7934u;
        // 0x1c7938: 0x8fa3024c  lw          $v1, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7934) {
            ctx->pc = 0x1C7AC8u;
            return;
        }
    }
    ctx->pc = 0x1C793Cu;
    // 0x1c793c: 0x0  nop
    ctx->pc = 0x1c793cu;
    // NOP
    ctx->pc = 0x1c7940u;
}
