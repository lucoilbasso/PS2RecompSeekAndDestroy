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

// Function: entry_00131458
// Address: 0x131458 - 0x131480
void entry_00131458_0x131458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131458_0x131458");
#endif

    switch (ctx->pc) {
        case 0x131468u: goto label_131468;
        default: break;
    }

    ctx->pc = 0x131458u;

label_131458:
    // 0x131458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13145c: 0x8f868a10  lw          $a2, -0x75F0($gp)
    ctx->pc = 0x13145cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x131460: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x131460u;
    SET_GPR_U32(ctx, 31, 0x131468u);
    ctx->pc = 0x131464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131460u;
    // 0x131464: 0x8f878a14  lw          $a3, -0x75EC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x131460u, 0x131468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131468u;
label_131468:
    // 0x131468: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x131468u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13146c: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13146Cu;
    {
        const bool branch_taken_0x13146c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13146c) {
            ctx->pc = 0x131470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13146Cu;
            // 0x131470: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131458;
        }
    }
    ctx->pc = 0x131474u;
    // 0x131474: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x131474u;
    {
        const bool branch_taken_0x131474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131474u;
        // 0x131478: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131474) {
            ctx->pc = 0x13149Cu;
            return;
        }
    }
    ctx->pc = 0x13147Cu;
    // 0x13147c: 0x0  nop
    ctx->pc = 0x13147cu;
    // NOP
    ctx->pc = 0x131480u;
}
