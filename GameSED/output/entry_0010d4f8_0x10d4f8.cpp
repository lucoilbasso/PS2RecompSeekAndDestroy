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

// Function: entry_0010d4f8
// Address: 0x10d4f8 - 0x10d540
void entry_0010d4f8_0x10d4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d4f8_0x10d4f8");
#endif

    switch (ctx->pc) {
        case 0x10d524u: goto label_10d524;
        default: break;
    }

    ctx->pc = 0x10d4f8u;

    // 0x10d4f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10d4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10d4fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10d4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10d500: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10d500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10d504: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10d504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d508: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10d508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10d50c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10d50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d510: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x10d510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10d514: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x10d514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10d518: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x10d518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d51c: 0xc04110c  jal         func_104430
    ctx->pc = 0x10D51Cu;
    SET_GPR_U32(ctx, 31, 0x10D524u);
    ctx->pc = 0x10D520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D51Cu;
    // 0x10d520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10D51Cu, 0x10D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D524u;
label_10d524:
    // 0x10d524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d528: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x10d528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x10d52c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x10d52cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d530: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D530u;
    {
        const bool branch_taken_0x10d530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D530u;
        // 0x10d534: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d530) {
            ctx->pc = 0x10D540u;
            return;
        }
    }
    ctx->pc = 0x10D538u;
    // 0x10d538: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10D538u;
    {
        const bool branch_taken_0x10d538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D538u;
        // 0x10d53c: 0x8e1001c0  lw          $s0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d538) {
            ctx->pc = 0x10D568u;
            return;
        }
    }
    ctx->pc = 0x10D540u;
}
