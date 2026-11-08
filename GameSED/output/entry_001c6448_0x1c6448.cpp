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

// Function: entry_001c6448
// Address: 0x1c6448 - 0x1c6464
void entry_001c6448_0x1c6448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6448_0x1c6448");
#endif

    switch (ctx->pc) {
        case 0x1c6454u: goto label_1c6454;
        default: break;
    }

    ctx->pc = 0x1c6448u;

    // 0x1c6448: 0x3c130025  lui         $s3, 0x25
    ctx->pc = 0x1c6448u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)37 << 16));
    // 0x1c644c: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1C644Cu;
    SET_GPR_U32(ctx, 31, 0x1C6454u);
    ctx->pc = 0x1C6450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C644Cu;
    // 0x1c6450: 0x8e64ddfc  lw          $a0, -0x2204($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1C644Cu, 0x1C6454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6454u;
label_1c6454:
    // 0x1c6454: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6454u;
    {
        const bool branch_taken_0x1c6454 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C6458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6454u;
        // 0x1c6458: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6454) {
            ctx->pc = 0x1C6464u;
            return;
        }
    }
    ctx->pc = 0x1C645Cu;
    // 0x1c645c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1C645Cu;
    {
        const bool branch_taken_0x1c645c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C645Cu;
        // 0x1c6460: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c645c) {
            ctx->pc = 0x1C64C0u;
            return;
        }
    }
    ctx->pc = 0x1C6464u;
}
