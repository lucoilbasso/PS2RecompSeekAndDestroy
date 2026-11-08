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

// Function: entry_0015e210
// Address: 0x15e210 - 0x15e25c
void entry_0015e210_0x15e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e210_0x15e210");
#endif

    switch (ctx->pc) {
        case 0x15e238u: goto label_15e238;
        default: break;
    }

    ctx->pc = 0x15e210u;

label_15e210:
    // 0x15e210: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e214:
    // 0x15e214: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15e218:
    if (ctx->pc == 0x15E218u) {
        ctx->pc = 0x15E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E214u;
        // 0x15e218: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E21Cu;
        goto label_15e21c;
    }
    ctx->pc = 0x15E214u;
    {
        const bool branch_taken_0x15e214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e214) {
            ctx->pc = 0x15E218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E214u;
            // 0x15e218: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E260u;
            return;
        }
    }
    ctx->pc = 0x15E21Cu;
label_15e21c:
    // 0x15e21c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e220:
    // 0x15e220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e224:
    // 0x15e224: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e228:
    // 0x15e228: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e22c:
    // 0x15e22c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e230:
    // 0x15e230: 0x60f809  jalr        $v1
label_15e234:
    if (ctx->pc == 0x15E234u) {
        ctx->pc = 0x15E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E230u;
        // 0x15e234: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E238u;
        goto label_15e238;
    }
    ctx->pc = 0x15E230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E238u);
        ctx->pc = 0x15E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E230u;
        // 0x15e234: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E230u, 0x15E238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E238u;
label_15e238:
    // 0x15e238: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15e238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e23c:
    // 0x15e23c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e240:
    if (ctx->pc == 0x15E240u) {
        ctx->pc = 0x15E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E23Cu;
        // 0x15e240: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E244u;
        goto label_15e244;
    }
    ctx->pc = 0x15E23Cu;
    {
        const bool branch_taken_0x15e23c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E23Cu;
        // 0x15e240: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e23c) {
            ctx->pc = 0x15E25Cu;
            return;
        }
    }
    ctx->pc = 0x15E244u;
label_15e244:
    // 0x15e244: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e248:
    // 0x15e248: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e24c:
    // 0x15e24c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e24cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e250:
    // 0x15e250: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e254:
    // 0x15e254: 0x60f809  jalr        $v1
label_15e258:
    if (ctx->pc == 0x15E258u) {
        ctx->pc = 0x15E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E254u;
        // 0x15e258: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E25Cu;
        goto label_fallthrough_0x15e254;
    }
    ctx->pc = 0x15E254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E25Cu);
        ctx->pc = 0x15E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E254u;
        // 0x15e258: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E254u, 0x15E25Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e254:
    ctx->pc = 0x15E25Cu;
}
