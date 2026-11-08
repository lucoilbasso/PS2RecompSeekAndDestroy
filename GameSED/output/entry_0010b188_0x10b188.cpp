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

// Function: entry_0010b188
// Address: 0x10b188 - 0x10b1b0
void entry_0010b188_0x10b188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b188_0x10b188");
#endif

    switch (ctx->pc) {
        case 0x10b1a4u: goto label_10b1a4;
        default: break;
    }

    ctx->pc = 0x10b188u;

    // 0x10b188: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10b188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10b18c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x10b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10b190: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B190u;
    {
        const bool branch_taken_0x10b190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B190u;
        // 0x10b194: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b190) {
            ctx->pc = 0x10B1B0u;
            return;
        }
    }
    ctx->pc = 0x10B198u;
    // 0x10b198: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x10b198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10b19c: 0xc06338e  jal         func_18CE38
    ctx->pc = 0x10B19Cu;
    SET_GPR_U32(ctx, 31, 0x10B1A4u);
    ctx->pc = 0x10B1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B19Cu;
    // 0x10b1a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CE38u, 0x10B19Cu, 0x10B1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B1A4u;
label_10b1a4:
    // 0x10b1a4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x10B1A4u;
    {
        const bool branch_taken_0x10b1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1A4u;
        // 0x10b1a8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1a4) {
            ctx->pc = 0x10B254u;
            return;
        }
    }
    ctx->pc = 0x10B1ACu;
    // 0x10b1ac: 0x0  nop
    ctx->pc = 0x10b1acu;
    // NOP
    ctx->pc = 0x10b1b0u;
}
