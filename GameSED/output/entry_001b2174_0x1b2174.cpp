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

// Function: entry_001b2174
// Address: 0x1b2174 - 0x1b21a0
void entry_001b2174_0x1b2174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2174_0x1b2174");
#endif

    ctx->pc = 0x1b2174u;

label_1b2174:
    // 0x1b2174: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b2174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b2178:
    // 0x1b2178: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x1b2178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1b217c:
    // 0x1b217c: 0x2c830019  sltiu       $v1, $a0, 0x19
    ctx->pc = 0x1b217cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_1b2180:
    // 0x1b2180: 0x10600095  beqz        $v1, . + 4 + (0x95 << 2)
label_1b2184:
    if (ctx->pc == 0x1B2184u) {
        ctx->pc = 0x1B2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2180u;
        // 0x1b2184: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2188u;
        goto label_1b2188;
    }
    ctx->pc = 0x1B2180u;
    {
        const bool branch_taken_0x1b2180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2180u;
        // 0x1b2184: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2180) {
            ctx->pc = 0x1B23D8u;
            return;
        }
    }
    ctx->pc = 0x1B2188u;
label_1b2188:
    // 0x1b2188: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1b2188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1b218c:
    // 0x1b218c: 0x2442ac20  addiu       $v0, $v0, -0x53E0
    ctx->pc = 0x1b218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945824));
label_1b2190:
    // 0x1b2190: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b2190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b2194:
    // 0x1b2194: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b2194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b2198:
    // 0x1b2198: 0x800008  jr          $a0
label_1b219c:
    if (ctx->pc == 0x1B219Cu) {
        ctx->pc = 0x1B21A0u;
        goto label_fallthrough_0x1b2198;
    }
    ctx->pc = 0x1B2198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2198u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1b2198:
    ctx->pc = 0x1B21A0u;
}
