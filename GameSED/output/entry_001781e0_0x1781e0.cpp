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

// Function: entry_001781e0
// Address: 0x1781e0 - 0x178214
void entry_001781e0_0x1781e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001781e0_0x1781e0");
#endif

    switch (ctx->pc) {
        case 0x178210u: goto label_178210;
        default: break;
    }

    ctx->pc = 0x1781e0u;

    // 0x1781e0: 0xae201040  sw          $zero, 0x1040($s1)
    ctx->pc = 0x1781e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4160), GPR_U32(ctx, 0));
    // 0x1781e4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1781e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1781e8: 0x8e421040  lw          $v0, 0x1040($s2)
    ctx->pc = 0x1781e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x1781ec: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1781ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781f0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1781f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1781f4: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1781F4u;
    {
        const bool branch_taken_0x1781f4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1781F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781F4u;
        // 0x1781f8: 0xae421040  sw          $v0, 0x1040($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781f4) {
            ctx->pc = 0x178214u;
            return;
        }
    }
    ctx->pc = 0x1781FCu;
    // 0x1781fc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1781fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x178200: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x178200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x178204: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x178204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x178208: 0xc05f358  jal         func_17CD60
    ctx->pc = 0x178208u;
    SET_GPR_U32(ctx, 31, 0x178210u);
    ctx->pc = 0x17820Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178208u;
    // 0x17820c: 0x52ac0  sll         $a1, $a1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CD60u, 0x178208u, 0x178210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178210u;
label_178210:
    // 0x178210: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x178210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->pc = 0x178214u;
}
