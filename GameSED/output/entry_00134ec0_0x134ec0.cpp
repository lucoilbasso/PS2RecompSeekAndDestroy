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

// Function: entry_00134ec0
// Address: 0x134ec0 - 0x134ee8
void entry_00134ec0_0x134ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134ec0_0x134ec0");
#endif

    ctx->pc = 0x134ec0u;

label_134ec0:
    // 0x134ec0: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x134ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_134ec4:
    // 0x134ec4: 0x504000ce  beql        $v0, $zero, . + 4 + (0xCE << 2)
label_134ec8:
    if (ctx->pc == 0x134EC8u) {
        ctx->pc = 0x134EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EC4u;
        // 0x134ec8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134ECCu;
        goto label_134ecc;
    }
    ctx->pc = 0x134EC4u;
    {
        const bool branch_taken_0x134ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ec4) {
            ctx->pc = 0x134EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134EC4u;
            // 0x134ec8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135200u;
            return;
        }
    }
    ctx->pc = 0x134ECCu;
label_134ecc:
    // 0x134ecc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x134eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_134ed0:
    // 0x134ed0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x134ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_134ed4:
    // 0x134ed4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x134ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_134ed8:
    // 0x134ed8: 0x8c636590  lw          $v1, 0x6590($v1)
    ctx->pc = 0x134ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26000)));
label_134edc:
    // 0x134edc: 0x600008  jr          $v1
label_134ee0:
    if (ctx->pc == 0x134EE0u) {
        ctx->pc = 0x134EE4u;
        goto label_134ee4;
    }
    ctx->pc = 0x134EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134EDCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x134EE4u;
label_134ee4:
    // 0x134ee4: 0x0  nop
    ctx->pc = 0x134ee4u;
    // NOP
    ctx->pc = 0x134ee8u;
}
