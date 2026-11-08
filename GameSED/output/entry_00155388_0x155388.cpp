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

// Function: entry_00155388
// Address: 0x155388 - 0x1553b8
void entry_00155388_0x155388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155388_0x155388");
#endif

    switch (ctx->pc) {
        case 0x1553a0u: goto label_1553a0;
        case 0x1553acu: goto label_1553ac;
        default: break;
    }

    ctx->pc = 0x155388u;

    // 0x155388: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x155388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15538c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155390: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x155390u;
    {
        const bool branch_taken_0x155390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x155394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155390u;
        // 0x155394: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155390) {
            ctx->pc = 0x1553B8u;
            return;
        }
    }
    ctx->pc = 0x155398u;
    // 0x155398: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x155398u;
    SET_GPR_U32(ctx, 31, 0x1553A0u);
    ctx->pc = 0x15539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155398u;
    // 0x15539c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x155398u, 0x1553A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553A0u;
label_1553a0:
    // 0x1553a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1553a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553a4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1553A4u;
    SET_GPR_U32(ctx, 31, 0x1553ACu);
    ctx->pc = 0x1553A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553A4u;
    // 0x1553a8: 0xaf82913c  sw          $v0, -0x6EC4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938940), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1553A4u, 0x1553ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553ACu;
label_1553ac:
    // 0x1553ac: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1553ACu;
    {
        const bool branch_taken_0x1553ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1553B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1553ACu;
        // 0x1553b0: 0xaf829140  sw          $v0, -0x6EC0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1553ac) {
            ctx->pc = 0x155484u;
            return;
        }
    }
    ctx->pc = 0x1553B4u;
    // 0x1553b4: 0x0  nop
    ctx->pc = 0x1553b4u;
    // NOP
    ctx->pc = 0x1553b8u;
}
