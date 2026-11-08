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

// Function: entry_0012cae8
// Address: 0x12cae8 - 0x12cb08
void entry_0012cae8_0x12cae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cae8_0x12cae8");
#endif

    switch (ctx->pc) {
        case 0x12caf4u: goto label_12caf4;
        default: break;
    }

    ctx->pc = 0x12cae8u;

    // 0x12cae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12cae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12caec: 0xc04844a  jal         func_121128
    ctx->pc = 0x12CAECu;
    SET_GPR_U32(ctx, 31, 0x12CAF4u);
    ctx->pc = 0x12CAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CAECu;
    // 0x12caf0: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12CAECu, 0x12CAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CAF4u;
label_12caf4:
    // 0x12caf4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12caf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12caf8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CAF8u;
    {
        const bool branch_taken_0x12caf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CAF8u;
        // 0x12cafc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12caf8) {
            ctx->pc = 0x12CB08u;
            return;
        }
    }
    ctx->pc = 0x12CB00u;
    // 0x12cb00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12CB00u;
    {
        const bool branch_taken_0x12cb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB00u;
        // 0x12cb04: 0xae200120  sw          $zero, 0x120($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb00) {
            ctx->pc = 0x12CB1Cu;
            return;
        }
    }
    ctx->pc = 0x12CB08u;
}
