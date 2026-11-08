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

// Function: caseD_0
// Address: 0x182230 - 0x182298
void caseD_0_0x182230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x182230");
#endif

    switch (ctx->pc) {
        case 0x182290u: goto label_182290;
        default: break;
    }

    ctx->pc = 0x182230u;

    // 0x182230: 0x2e420080  sltiu       $v0, $s2, 0x80
    ctx->pc = 0x182230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x182234: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x182234u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182238: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x182238u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18223c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x18223Cu;
    {
        const bool branch_taken_0x18223c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18223Cu;
        // 0x182240: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18223c) {
            ctx->pc = 0x1822C8u;
            return;
        }
    }
    ctx->pc = 0x182244u;
    // 0x182244: 0x6200020  bltz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x182244u;
    {
        const bool branch_taken_0x182244 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x182248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182244u;
        // 0x182248: 0x2a220080  slti        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182244) {
            ctx->pc = 0x1822C8u;
            return;
        }
    }
    ctx->pc = 0x18224Cu;
    // 0x18224c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x18224Cu;
    {
        const bool branch_taken_0x18224c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18224Cu;
        // 0x182250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18224c) {
            ctx->pc = 0x1822CCu;
            return;
        }
    }
    ctx->pc = 0x182254u;
    // 0x182254: 0x1211c0  sll         $v0, $s2, 7
    ctx->pc = 0x182254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x182258: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x182258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18225c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18225cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x182260: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x182260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x182264: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x182264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x182268: 0x94440038  lhu         $a0, 0x38($v0)
    ctx->pc = 0x182268u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x18226c: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x18226Cu;
    {
        const bool branch_taken_0x18226c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x182270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18226Cu;
        // 0x182270: 0x41980  sll         $v1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18226c) {
            ctx->pc = 0x1822CCu;
            return;
        }
    }
    ctx->pc = 0x182274u;
    // 0x182274: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x182274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x182278: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x182278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x18227c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18227Cu;
    {
        const bool branch_taken_0x18227c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x182280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18227Cu;
        // 0x182280: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18227c) {
            ctx->pc = 0x182298u;
            return;
        }
    }
    ctx->pc = 0x182284u;
    // 0x182284: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x182284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182288: 0xc0606e8  jal         func_181BA0
    ctx->pc = 0x182288u;
    SET_GPR_U32(ctx, 31, 0x182290u);
    ctx->pc = 0x18228Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182288u;
    // 0x18228c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181BA0u, 0x182288u, 0x182290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182290u;
label_182290:
    // 0x182290: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x182290u;
    {
        const bool branch_taken_0x182290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182290) {
            ctx->pc = 0x1822A4u;
            return;
        }
    }
    ctx->pc = 0x182298u;
}
