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

// Function: entry_001a00e8
// Address: 0x1a00e8 - 0x1a0108
void entry_001a00e8_0x1a00e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a00e8_0x1a00e8");
#endif

    switch (ctx->pc) {
        case 0x1a00fcu: goto label_1a00fc;
        default: break;
    }

    ctx->pc = 0x1a00e8u;

label_1a00e8:
    // 0x1a00e8: 0x26648780  addiu       $a0, $s3, -0x7880
    ctx->pc = 0x1a00e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936448));
    // 0x1a00ec: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1a00ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a00f0: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x1a00f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    // 0x1a00f4: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A00F4u;
    SET_GPR_U32(ctx, 31, 0x1A00FCu);
    ctx->pc = 0x1A00F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A00F4u;
    // 0x1a00f8: 0x2063023  subu        $a2, $s0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A00F4u, 0x1A00FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A00FCu;
label_1a00fc:
    // 0x1a00fc: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x1a00fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a0100: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A0100u;
    {
        const bool branch_taken_0x1a0100 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0100) {
            ctx->pc = 0x1A0104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0100u;
            // 0x1a0104: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A00E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a00e8;
        }
    }
    ctx->pc = 0x1A0108u;
}
