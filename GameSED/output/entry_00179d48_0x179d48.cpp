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

// Function: entry_00179d48
// Address: 0x179d48 - 0x179d80
void entry_00179d48_0x179d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179d48_0x179d48");
#endif

    switch (ctx->pc) {
        case 0x179d50u: goto label_179d50;
        case 0x179d6cu: goto label_179d6c;
        default: break;
    }

    ctx->pc = 0x179d48u;

label_179d48:
    // 0x179d48: 0xc071904  jal         func_1C6410
    ctx->pc = 0x179D48u;
    SET_GPR_U32(ctx, 31, 0x179D50u);
    ctx->pc = 0x179D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179D48u;
    // 0x179d4c: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6410u, 0x179D48u, 0x179D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179D50u;
label_179d50:
    // 0x179d50: 0x5440fffd  bnel        $v0, $zero, . + 4 + (-0x3 << 2)
    ctx->pc = 0x179D50u;
    {
        const bool branch_taken_0x179d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179d50) {
            ctx->pc = 0x179D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179D50u;
            // 0x179d54: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179d48;
        }
    }
    ctx->pc = 0x179D58u;
    // 0x179d58: 0x26104030  addiu       $s0, $s0, 0x4030
    ctx->pc = 0x179d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16432));
    // 0x179d5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x179d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d64: 0xc071606  jal         func_1C5818
    ctx->pc = 0x179D64u;
    SET_GPR_U32(ctx, 31, 0x179D6Cu);
    ctx->pc = 0x179D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179D64u;
    // 0x179d68: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x179D64u, 0x179D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179D6Cu;
label_179d6c:
    // 0x179d6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x179d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x179d70: 0x4630007  bgezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x179D70u;
    {
        const bool branch_taken_0x179d70 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x179d70) {
            ctx->pc = 0x179D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179D70u;
            // 0x179d74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179D90u;
            return;
        }
    }
    ctx->pc = 0x179D78u;
    // 0x179d78: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x179d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x179d7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179d80u;
}
