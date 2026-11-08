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

// Function: entry_001955f0
// Address: 0x1955f0 - 0x19562c
void entry_001955f0_0x1955f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001955f0_0x1955f0");
#endif

    switch (ctx->pc) {
        case 0x1955fcu: goto label_1955fc;
        default: break;
    }

    ctx->pc = 0x1955f0u;

    // 0x1955f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1955f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1955f4: 0xc05fc52  jal         func_17F148
    ctx->pc = 0x1955F4u;
    SET_GPR_U32(ctx, 31, 0x1955FCu);
    ctx->pc = 0x1955F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955F4u;
    // 0x1955f8: 0x8e05015c  lw          $a1, 0x15C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F148u, 0x1955F4u, 0x1955FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955FCu;
label_1955fc:
    // 0x1955fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1955fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195600: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x195600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x195604: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x195604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x195608: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x195608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19560c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x19560cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x195610: 0xae020240  sw          $v0, 0x240($s0)
    ctx->pc = 0x195610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 2));
    // 0x195614: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x195614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195618: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x195618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x19561c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19561Cu;
    {
        const bool branch_taken_0x19561c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x195620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19561Cu;
        // 0x195620: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19561c) {
            ctx->pc = 0x19562Cu;
            return;
        }
    }
    ctx->pc = 0x195624u;
    // 0x195624: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x195624u;
    SET_GPR_U32(ctx, 31, 0x19562Cu);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x195624u, 0x19562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19562Cu;
}
