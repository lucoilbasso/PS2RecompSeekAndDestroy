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

// Function: entry_001235ec
// Address: 0x1235ec - 0x123614
void entry_001235ec_0x1235ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001235ec_0x1235ec");
#endif

    ctx->pc = 0x1235ecu;

label_1235ec:
    // 0x1235ec: 0x2c62000d  sltiu       $v0, $v1, 0xD
    ctx->pc = 0x1235ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_1235f0:
    // 0x1235f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1235f4:
    if (ctx->pc == 0x1235F4u) {
        ctx->pc = 0x1235F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235F0u;
        // 0x1235f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1235F8u;
        goto label_1235f8;
    }
    ctx->pc = 0x1235F0u;
    {
        const bool branch_taken_0x1235f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1235F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235F0u;
        // 0x1235f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235f0) {
            ctx->pc = 0x123618u;
            return;
        }
    }
    ctx->pc = 0x1235F8u;
label_1235f8:
    // 0x1235f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1235f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1235fc:
    // 0x1235fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1235fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123600:
    // 0x123600: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x123600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
label_123604:
    // 0x123604: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x123604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_123608:
    // 0x123608: 0x8c637dd0  lw          $v1, 0x7DD0($v1)
    ctx->pc = 0x123608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32208)));
label_12360c:
    // 0x12360c: 0x60f809  jalr        $v1
label_123610:
    if (ctx->pc == 0x123610u) {
        ctx->pc = 0x123610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12360Cu;
        // 0x123610: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123614u;
        goto label_fallthrough_0x12360c;
    }
    ctx->pc = 0x12360Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x123614u);
        ctx->pc = 0x123610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12360Cu;
        // 0x123610: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12360Cu, 0x123614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x12360c:
    ctx->pc = 0x123614u;
}
