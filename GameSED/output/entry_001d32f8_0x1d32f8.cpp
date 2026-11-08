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

// Function: entry_001d32f8
// Address: 0x1d32f8 - 0x1d332c
void entry_001d32f8_0x1d32f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d32f8_0x1d32f8");
#endif

    switch (ctx->pc) {
        case 0x1d3320u: goto label_1d3320;
        default: break;
    }

    ctx->pc = 0x1d32f8u;

    // 0x1d32f8: 0x2fc20017  sltiu       $v0, $fp, 0x17
    ctx->pc = 0x1d32f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1d32fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D32FCu;
    {
        const bool branch_taken_0x1d32fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32FCu;
        // 0x1d3300: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d32fc) {
            ctx->pc = 0x1D332Cu;
            return;
        }
    }
    ctx->pc = 0x1D3304u;
    // 0x1d3304: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x1d3304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x1d3308: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d3308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d330c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1d330cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1d3310: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1d3310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d3314: 0xdca5c680  ld          $a1, -0x3980($a1)
    ctx->pc = 0x1d3314u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 4294952576)));
    // 0x1d3318: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D3318u;
    SET_GPR_U32(ctx, 31, 0x1D3320u);
    ctx->pc = 0x1D331Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3318u;
    // 0x1d331c: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D3318u, 0x1D3320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3320u;
label_1d3320:
    // 0x1d3320: 0x27c3ffff  addiu       $v1, $fp, -0x1
    ctx->pc = 0x1d3320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1d3324: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1d3324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d3328: 0x62f00b  movn        $fp, $v1, $v0
    ctx->pc = 0x1d3328u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
    ctx->pc = 0x1d332cu;
}
