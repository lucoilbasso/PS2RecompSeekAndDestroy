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

// Function: entry_00134278
// Address: 0x134278 - 0x1342a8
void entry_00134278_0x134278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134278_0x134278");
#endif

    switch (ctx->pc) {
        case 0x134280u: goto label_134280;
        case 0x13428cu: goto label_13428c;
        default: break;
    }

    ctx->pc = 0x134278u;

    // 0x134278: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134278u;
    SET_GPR_U32(ctx, 31, 0x134280u);
    ctx->pc = 0x13427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134278u;
    // 0x13427c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134278u, 0x134280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134280u;
label_134280:
    // 0x134280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134284: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134284u;
    SET_GPR_U32(ctx, 31, 0x13428Cu);
    ctx->pc = 0x134288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134284u;
    // 0x134288: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134284u, 0x13428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13428Cu;
label_13428c:
    // 0x13428c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x13428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x134290: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x134290u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x134294: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x134294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134298: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x134298u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x13429c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13429cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1342a0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1342a0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1342a4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1342a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x1342a8u;
}
