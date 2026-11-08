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

// Function: entry_001c3ed8
// Address: 0x1c3ed8 - 0x1c3f14
void entry_001c3ed8_0x1c3ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3ed8_0x1c3ed8");
#endif

    switch (ctx->pc) {
        case 0x1c3f0cu: goto label_1c3f0c;
        default: break;
    }

    ctx->pc = 0x1c3ed8u;

    // 0x1c3ed8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x1c3ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x1c3edc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c3edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3ee0: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x1c3ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x1c3ee4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3ee8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1c3ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1c3eec: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x1c3eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1c3ef0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1c3ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1c3ef4: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3EF4u;
    {
        const bool branch_taken_0x1c3ef4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3EF4u;
        // 0x1c3ef8: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ef4) {
            ctx->pc = 0x1C3F14u;
            return;
        }
    }
    ctx->pc = 0x1C3EFCu;
    // 0x1c3efc: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1c3efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1c3f00: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c3f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f04: 0xc070e1c  jal         func_1C3870
    ctx->pc = 0x1C3F04u;
    SET_GPR_U32(ctx, 31, 0x1C3F0Cu);
    ctx->pc = 0x1C3F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F04u;
    // 0x1c3f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3870u, 0x1C3F04u, 0x1C3F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F0Cu;
label_1c3f0c:
    // 0x1c3f0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3F0Cu;
    {
        const bool branch_taken_0x1c3f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3f0c) {
            ctx->pc = 0x1C3F24u;
            return;
        }
    }
    ctx->pc = 0x1C3F14u;
}
