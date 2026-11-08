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

// Function: entry_001cc188
// Address: 0x1cc188 - 0x1cc1bc
void entry_001cc188_0x1cc188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc188_0x1cc188");
#endif

    ctx->pc = 0x1cc188u;

label_1cc188:
    // 0x1cc188: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cc188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cc18c:
    // 0x1cc18c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cc18cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc190:
    // 0x1cc190: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1cc190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cc194:
    // 0x1cc194: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x1cc194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
label_1cc198:
    // 0x1cc198: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1cc198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cc19c:
    // 0x1cc19c: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1cc19cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cc1a0:
    // 0x1cc1a0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1cc1a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cc1a4:
    // 0x1cc1a4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1cc1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_1cc1a8:
    // 0x1cc1a8: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x1cc1a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cc1ac:
    // 0x1cc1ac: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1cc1acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc1b0:
    // 0x1cc1b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cc1b4:
    // 0x1cc1b4: 0x40f809  jalr        $v0
label_1cc1b8:
    if (ctx->pc == 0x1CC1B8u) {
        ctx->pc = 0x1CC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1B4u;
        // 0x1cc1b8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC1BCu;
        goto label_fallthrough_0x1cc1b4;
    }
    ctx->pc = 0x1CC1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC1BCu);
        ctx->pc = 0x1CC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1B4u;
        // 0x1cc1b8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC1B4u, 0x1CC1BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1cc1b4:
    ctx->pc = 0x1CC1BCu;
}
