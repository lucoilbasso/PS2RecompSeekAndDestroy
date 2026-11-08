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

// Function: entry_001a318c
// Address: 0x1a318c - 0x1a31b0
void entry_001a318c_0x1a318c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a318c_0x1a318c");
#endif

    switch (ctx->pc) {
        case 0x1a31a4u: goto label_1a31a4;
        default: break;
    }

    ctx->pc = 0x1a318cu;

label_1a318c:
    // 0x1a318c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a3190:
    if (ctx->pc == 0x1A3190u) {
        ctx->pc = 0x1A3190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A318Cu;
        // 0x1a3190: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3194u;
        goto label_1a3194;
    }
    ctx->pc = 0x1A318Cu;
    {
        const bool branch_taken_0x1a318c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A318Cu;
        // 0x1a3190: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a318c) {
            ctx->pc = 0x1A31B0u;
            return;
        }
    }
    ctx->pc = 0x1A3194u;
label_1a3194:
    // 0x1a3194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3198:
    // 0x1a3198: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a3198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a319c:
    // 0x1a319c: 0x40f809  jalr        $v0
label_1a31a0:
    if (ctx->pc == 0x1A31A0u) {
        ctx->pc = 0x1A31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A319Cu;
        // 0x1a31a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31A4u;
        goto label_1a31a4;
    }
    ctx->pc = 0x1A319Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A31A4u);
        ctx->pc = 0x1A31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A319Cu;
        // 0x1a31a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A319Cu, 0x1A31A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A31A4u;
label_1a31a4:
    // 0x1a31a4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a31a8:
    if (ctx->pc == 0x1A31A8u) {
        ctx->pc = 0x1A31A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31A4u;
        // 0x1a31a8: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31ACu;
        goto label_1a31ac;
    }
    ctx->pc = 0x1A31A4u;
    {
        const bool branch_taken_0x1a31a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A31A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31A4u;
        // 0x1a31a8: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a31a4) {
            ctx->pc = 0x1A31C8u;
            return;
        }
    }
    ctx->pc = 0x1A31ACu;
label_1a31ac:
    // 0x1a31ac: 0x0  nop
    ctx->pc = 0x1a31acu;
    // NOP
    ctx->pc = 0x1a31b0u;
}
