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

// Function: entry_001331e4
// Address: 0x1331e4 - 0x133218
void entry_001331e4_0x1331e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001331e4_0x1331e4");
#endif

    switch (ctx->pc) {
        case 0x1331f4u: goto label_1331f4;
        default: break;
    }

    ctx->pc = 0x1331e4u;

label_1331e4:
    // 0x1331e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1331e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1331e8:
    // 0x1331e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1331e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1331ec:
    // 0x1331ec: 0xc06a26e  jal         func_1A89B8
label_1331f0:
    if (ctx->pc == 0x1331F0u) {
        ctx->pc = 0x1331F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1331ECu;
        // 0x1331f0: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1331F4u;
        goto label_1331f4;
    }
    ctx->pc = 0x1331ECu;
    SET_GPR_U32(ctx, 31, 0x1331F4u);
    ctx->pc = 0x1331F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1331ECu;
    // 0x1331f0: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1331ECu, 0x1331F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1331F4u;
label_1331f4:
    // 0x1331f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1331f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1331f8:
    // 0x1331f8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1331f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1331fc:
    // 0x1331fc: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_133200:
    if (ctx->pc == 0x133200u) {
        ctx->pc = 0x133200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1331FCu;
        // 0x133200: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133204u;
        goto label_133204;
    }
    ctx->pc = 0x1331FCu;
    {
        const bool branch_taken_0x1331fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1331FCu;
        // 0x133200: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1331fc) {
            ctx->pc = 0x133344u;
            return;
        }
    }
    ctx->pc = 0x133204u;
label_133204:
    // 0x133204: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x133204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_133208:
    // 0x133208: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x133208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13320c:
    // 0x13320c: 0x8c636450  lw          $v1, 0x6450($v1)
    ctx->pc = 0x13320cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25680)));
label_133210:
    // 0x133210: 0x600008  jr          $v1
label_133214:
    if (ctx->pc == 0x133214u) {
        ctx->pc = 0x133218u;
        goto label_fallthrough_0x133210;
    }
    ctx->pc = 0x133210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133210u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x133210:
    ctx->pc = 0x133218u;
}
