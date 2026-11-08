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

// Function: caseD_f
// Address: 0x134618 - 0x13463c
void caseD_f_0x134618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x134618");
#endif

    switch (ctx->pc) {
        case 0x134638u: goto label_134638;
        default: break;
    }

    ctx->pc = 0x134618u;

    // 0x134618: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x134618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13461c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x13461cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x134620: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134624: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134628: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134628u;
    {
        const bool branch_taken_0x134628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x134628) {
            ctx->pc = 0x13462Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134628u;
            // 0x13462c: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13463Cu;
            return;
        }
    }
    ctx->pc = 0x134630u;
    // 0x134630: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134630u;
    SET_GPR_U32(ctx, 31, 0x134638u);
    ctx->pc = 0x134634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134630u;
    // 0x134634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134630u, 0x134638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134638u;
label_134638:
    // 0x134638: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x134638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->pc = 0x13463cu;
}
