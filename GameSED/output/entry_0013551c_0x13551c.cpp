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

// Function: entry_0013551c
// Address: 0x13551c - 0x135534
void entry_0013551c_0x13551c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013551c_0x13551c");
#endif

    switch (ctx->pc) {
        case 0x135530u: goto label_135530;
        default: break;
    }

    ctx->pc = 0x13551cu;

    // 0x13551c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x13551cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x135520: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x135520u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x135524: 0x248410f0  addiu       $a0, $a0, 0x10F0
    ctx->pc = 0x135524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4336));
    // 0x135528: 0xc05087a  jal         func_1421E8
    ctx->pc = 0x135528u;
    SET_GPR_U32(ctx, 31, 0x135530u);
    ctx->pc = 0x13552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135528u;
    // 0x13552c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421E8u, 0x135528u, 0x135530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135530u;
label_135530:
    // 0x135530: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x135530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135534u;
}
