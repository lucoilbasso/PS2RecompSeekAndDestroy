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

// Function: entry_001c2250
// Address: 0x1c2250 - 0x1c2288
void entry_001c2250_0x1c2250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2250_0x1c2250");
#endif

    switch (ctx->pc) {
        case 0x1c2258u: goto label_1c2258;
        case 0x1c2264u: goto label_1c2264;
        default: break;
    }

    ctx->pc = 0x1c2250u;

label_1c2250:
    // 0x1c2250: 0xc07084a  jal         func_1C2128
    ctx->pc = 0x1C2250u;
    SET_GPR_U32(ctx, 31, 0x1C2258u);
    ctx->pc = 0x1C2254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2250u;
    // 0x1c2254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2128u, 0x1C2250u, 0x1C2258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2258u;
label_1c2258:
    // 0x1c2258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c225c: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C225Cu;
    SET_GPR_U32(ctx, 31, 0x1C2264u);
    ctx->pc = 0x1C2260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C225Cu;
    // 0x1c2260: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C225Cu, 0x1C2264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2264u;
label_1c2264:
    // 0x1c2264: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c2264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2268: 0x1075000d  beq         $v1, $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x1C2268u;
    {
        const bool branch_taken_0x1c2268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x1C226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2268u;
        // 0x1c226c: 0x2c6201b4  sltiu       $v0, $v1, 0x1B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)436) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2268) {
            ctx->pc = 0x1C22A0u;
            return;
        }
    }
    ctx->pc = 0x1C2270u;
    // 0x1c2270: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2270u;
    {
        const bool branch_taken_0x1c2270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2270) {
            ctx->pc = 0x1C2288u;
            return;
        }
    }
    ctx->pc = 0x1C2278u;
    // 0x1c2278: 0x10740011  beq         $v1, $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C2278u;
    {
        const bool branch_taken_0x1c2278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x1c2278) {
            ctx->pc = 0x1C22C0u;
            return;
        }
    }
    ctx->pc = 0x1C2280u;
    // 0x1c2280: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C2280u;
    {
        const bool branch_taken_0x1c2280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2280) {
            ctx->pc = 0x1C2250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2250;
        }
    }
    ctx->pc = 0x1C2288u;
}
