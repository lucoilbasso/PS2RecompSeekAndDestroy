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

// Function: entry_001da16c
// Address: 0x1da16c - 0x1da1b8
void entry_001da16c_0x1da16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da16c_0x1da16c");
#endif

    ctx->pc = 0x1da16cu;

label_1da16c:
    // 0x1da16c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1da16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1da170:
    // 0x1da170: 0x265100e0  addiu       $s1, $s2, 0xE0
    ctx->pc = 0x1da170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_1da174:
    // 0x1da174: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1da174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1da178:
    // 0x1da178: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1da178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1da17c:
    // 0x1da17c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1da17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_1da180:
    // 0x1da180: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1da180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1da184:
    // 0x1da184: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1da184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1da188:
    // 0x1da188: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1da188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1da18c:
    // 0x1da18c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1da18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1da190:
    // 0x1da190: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1da190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1da194:
    // 0x1da194: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1da198:
    if (ctx->pc == 0x1DA198u) {
        ctx->pc = 0x1DA198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA194u;
        // 0x1da198: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA19Cu;
        goto label_1da19c;
    }
    ctx->pc = 0x1DA194u;
    {
        const bool branch_taken_0x1da194 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA194u;
        // 0x1da198: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da194) {
            ctx->pc = 0x1DA1B8u;
            return;
        }
    }
    ctx->pc = 0x1DA19Cu;
label_1da19c:
    // 0x1da19c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da1a0:
    // 0x1da1a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da1a4:
    // 0x1da1a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da1a8:
    // 0x1da1a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da1a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da1ac:
    // 0x1da1ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da1b0:
    // 0x1da1b0: 0x60f809  jalr        $v1
label_1da1b4:
    if (ctx->pc == 0x1DA1B4u) {
        ctx->pc = 0x1DA1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1B0u;
        // 0x1da1b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA1B8u;
        goto label_fallthrough_0x1da1b0;
    }
    ctx->pc = 0x1DA1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA1B8u);
        ctx->pc = 0x1DA1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1B0u;
        // 0x1da1b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA1B0u, 0x1DA1B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1da1b0:
    ctx->pc = 0x1DA1B8u;
}
