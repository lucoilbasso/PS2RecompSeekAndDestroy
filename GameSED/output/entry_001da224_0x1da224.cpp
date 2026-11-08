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

// Function: entry_001da224
// Address: 0x1da224 - 0x1da270
void entry_001da224_0x1da224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da224_0x1da224");
#endif

    ctx->pc = 0x1da224u;

label_1da224:
    // 0x1da224: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1da224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1da228:
    // 0x1da228: 0x26500120  addiu       $s0, $s2, 0x120
    ctx->pc = 0x1da228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
label_1da22c:
    // 0x1da22c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1da22cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1da230:
    // 0x1da230: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1da230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1da234:
    // 0x1da234: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x1da234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_1da238:
    // 0x1da238: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1da238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1da23c:
    // 0x1da23c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1da23cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1da240:
    // 0x1da240: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1da240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1da244:
    // 0x1da244: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x1da244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_1da248:
    // 0x1da248: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1da248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_1da24c:
    // 0x1da24c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1da250:
    if (ctx->pc == 0x1DA250u) {
        ctx->pc = 0x1DA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA24Cu;
        // 0x1da250: 0xae200034  sw          $zero, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA254u;
        goto label_1da254;
    }
    ctx->pc = 0x1DA24Cu;
    {
        const bool branch_taken_0x1da24c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA24Cu;
        // 0x1da250: 0xae200034  sw          $zero, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da24c) {
            ctx->pc = 0x1DA270u;
            return;
        }
    }
    ctx->pc = 0x1DA254u;
label_1da254:
    // 0x1da254: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da258:
    // 0x1da258: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da25c:
    // 0x1da25c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da260:
    // 0x1da260: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da264:
    // 0x1da264: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da268:
    // 0x1da268: 0x60f809  jalr        $v1
label_1da26c:
    if (ctx->pc == 0x1DA26Cu) {
        ctx->pc = 0x1DA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA268u;
        // 0x1da26c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA270u;
        goto label_fallthrough_0x1da268;
    }
    ctx->pc = 0x1DA268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA270u);
        ctx->pc = 0x1DA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA268u;
        // 0x1da26c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA268u, 0x1DA270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1da268:
    ctx->pc = 0x1DA270u;
}
