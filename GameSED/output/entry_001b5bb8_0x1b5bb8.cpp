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

// Function: entry_001b5bb8
// Address: 0x1b5bb8 - 0x1b5bdc
void entry_001b5bb8_0x1b5bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5bb8_0x1b5bb8");
#endif

    switch (ctx->pc) {
        case 0x1b5bccu: goto label_1b5bcc;
        default: break;
    }

    ctx->pc = 0x1b5bb8u;

    // 0x1b5bb8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1b5bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1b5bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5bc0: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x1b5bc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x1b5bc4: 0xc06c5a4  jal         func_1B1690
    ctx->pc = 0x1B5BC4u;
    SET_GPR_U32(ctx, 31, 0x1B5BCCu);
    ctx->pc = 0x1B5BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5BC4u;
    // 0x1b5bc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1690u, 0x1B5BC4u, 0x1B5BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5BCCu;
label_1b5bcc:
    // 0x1b5bcc: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5BCCu;
    {
        const bool branch_taken_0x1b5bcc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b5bcc) {
            ctx->pc = 0x1B5BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5BCCu;
            // 0x1b5bd0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5BDCu;
            return;
        }
    }
    ctx->pc = 0x1B5BD4u;
    // 0x1b5bd4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1B5BD4u;
    {
        const bool branch_taken_0x1b5bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BD4u;
        // 0x1b5bd8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5bd4) {
            ctx->pc = 0x1B5C78u;
            return;
        }
    }
    ctx->pc = 0x1B5BDCu;
}
