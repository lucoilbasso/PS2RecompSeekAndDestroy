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

// Function: entry_001a35a8
// Address: 0x1a35a8 - 0x1a35c8
void entry_001a35a8_0x1a35a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a35a8_0x1a35a8");
#endif

    switch (ctx->pc) {
        case 0x1a35b8u: goto label_1a35b8;
        default: break;
    }

    ctx->pc = 0x1a35a8u;

    // 0x1a35a8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a35a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a35ac: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x1a35acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
    // 0x1a35b0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A35B0u;
    SET_GPR_U32(ctx, 31, 0x1A35B8u);
    ctx->pc = 0x1A35B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A35B0u;
    // 0x1a35b4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A35B0u, 0x1A35B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A35B8u;
label_1a35b8:
    // 0x1a35b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a35b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a35bc: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1A35BCu;
    {
        const bool branch_taken_0x1a35bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A35C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35BCu;
        // 0x1a35c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35bc) {
            ctx->pc = 0x1A3818u;
            return;
        }
    }
    ctx->pc = 0x1A35C4u;
    // 0x1a35c4: 0x0  nop
    ctx->pc = 0x1a35c4u;
    // NOP
    ctx->pc = 0x1a35c8u;
}
