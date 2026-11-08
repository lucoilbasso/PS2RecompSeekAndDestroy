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

// Function: entry_0012e7b8
// Address: 0x12e7b8 - 0x12e7dc
void entry_0012e7b8_0x12e7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e7b8_0x12e7b8");
#endif

    switch (ctx->pc) {
        case 0x12e7d8u: goto label_12e7d8;
        default: break;
    }

    ctx->pc = 0x12e7b8u;

    // 0x12e7b8: 0x96020132  lhu         $v0, 0x132($s0)
    ctx->pc = 0x12e7b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 306)));
    // 0x12e7bc: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x12e7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x12e7c0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E7C0u;
    {
        const bool branch_taken_0x12e7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e7c0) {
            ctx->pc = 0x12E7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E7C0u;
            // 0x12e7c4: 0x96050132  lhu         $a1, 0x132($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 306)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E7DCu;
            return;
        }
    }
    ctx->pc = 0x12E7C8u;
    // 0x12e7c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7cc: 0x26655fc0  addiu       $a1, $s3, 0x5FC0
    ctx->pc = 0x12e7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24512));
    // 0x12e7d0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12E7D0u;
    SET_GPR_U32(ctx, 31, 0x12E7D8u);
    ctx->pc = 0x12E7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E7D0u;
    // 0x12e7d4: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12E7D0u, 0x12E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E7D8u;
label_12e7d8:
    // 0x12e7d8: 0x96050132  lhu         $a1, 0x132($s0)
    ctx->pc = 0x12e7d8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 306)));
    ctx->pc = 0x12e7dcu;
}
