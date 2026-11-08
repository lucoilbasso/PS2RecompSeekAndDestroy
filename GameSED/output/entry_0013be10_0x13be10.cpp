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

// Function: entry_0013be10
// Address: 0x13be10 - 0x13be48
void entry_0013be10_0x13be10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013be10_0x13be10");
#endif

    switch (ctx->pc) {
        case 0x13be40u: goto label_13be40;
        default: break;
    }

    ctx->pc = 0x13be10u;

label_13be10:
    // 0x13be10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13be10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13be14:
    // 0x13be14: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_13be18:
    if (ctx->pc == 0x13BE18u) {
        ctx->pc = 0x13BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE14u;
        // 0x13be18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BE1Cu;
        goto label_13be1c;
    }
    ctx->pc = 0x13BE14u;
    {
        const bool branch_taken_0x13be14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE14u;
        // 0x13be18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be14) {
            ctx->pc = 0x13BE48u;
            return;
        }
    }
    ctx->pc = 0x13BE1Cu;
label_13be1c:
    // 0x13be1c: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x13be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_13be20:
    // 0x13be20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13be20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13be24:
    // 0x13be24: 0xae93007c  sw          $s3, 0x7C($s4)
    ctx->pc = 0x13be24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 19));
label_13be28:
    // 0x13be28: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x13be28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_13be2c:
    // 0x13be2c: 0x8e260030  lw          $a2, 0x30($s1)
    ctx->pc = 0x13be2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_13be30:
    // 0x13be30: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13be30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13be34:
    // 0x13be34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13be34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13be38:
    // 0x13be38: 0x60f809  jalr        $v1
label_13be3c:
    if (ctx->pc == 0x13BE3Cu) {
        ctx->pc = 0x13BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE38u;
        // 0x13be3c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BE40u;
        goto label_13be40;
    }
    ctx->pc = 0x13BE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13BE40u);
        ctx->pc = 0x13BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE38u;
        // 0x13be3c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BE38u, 0x13BE40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13BE40u;
label_13be40:
    // 0x13be40: 0x8ea20134  lw          $v0, 0x134($s5)
    ctx->pc = 0x13be40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 308)));
label_13be44:
    // 0x13be44: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13be44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x13be48u;
}
