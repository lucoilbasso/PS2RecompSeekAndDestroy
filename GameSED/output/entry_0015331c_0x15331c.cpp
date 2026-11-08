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

// Function: entry_0015331c
// Address: 0x15331c - 0x15333c
void entry_0015331c_0x15331c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015331c_0x15331c");
#endif

    switch (ctx->pc) {
        case 0x153334u: goto label_153334;
        default: break;
    }

    ctx->pc = 0x15331cu;

    // 0x15331c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x15331cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x153320: 0xb20018  mult        $zero, $a1, $s2
    ctx->pc = 0x153320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x153324: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x153324u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x153328: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x153328u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x15332c: 0xc0585a2  jal         func_161688
    ctx->pc = 0x15332Cu;
    SET_GPR_U32(ctx, 31, 0x153334u);
    ctx->pc = 0x153330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15332Cu;
    // 0x153330: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161688u, 0x15332Cu, 0x153334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153334u;
label_153334:
    // 0x153334: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x153334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x153338: 0xae220818  sw          $v0, 0x818($s1)
    ctx->pc = 0x153338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
    ctx->pc = 0x15333cu;
}
