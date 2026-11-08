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

// Function: entry_00134310
// Address: 0x134310 - 0x134338
void entry_00134310_0x134310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134310_0x134310");
#endif

    switch (ctx->pc) {
        case 0x13432cu: goto label_13432c;
        default: break;
    }

    ctx->pc = 0x134310u;

    // 0x134310: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x134310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x134314: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x134314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134318: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x134318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13431c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x13431cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x134320: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x134320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134324: 0xc04dee8  jal         func_137BA0
    ctx->pc = 0x134324u;
    SET_GPR_U32(ctx, 31, 0x13432Cu);
    ctx->pc = 0x134328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134324u;
    // 0x134328: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137BA0u, 0x134324u, 0x13432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13432Cu;
label_13432c:
    // 0x13432c: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x13432Cu;
    {
        const bool branch_taken_0x13432c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13432Cu;
        // 0x134330: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13432c) {
            ctx->pc = 0x134680u;
            return;
        }
    }
    ctx->pc = 0x134334u;
    // 0x134334: 0x0  nop
    ctx->pc = 0x134334u;
    // NOP
    ctx->pc = 0x134338u;
}
