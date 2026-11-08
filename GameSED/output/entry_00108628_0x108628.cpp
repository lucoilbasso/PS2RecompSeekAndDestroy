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

// Function: entry_00108628
// Address: 0x108628 - 0x108658
void entry_00108628_0x108628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108628_0x108628");
#endif

    switch (ctx->pc) {
        case 0x10864cu: goto label_10864c;
        default: break;
    }

    ctx->pc = 0x108628u;

    // 0x108628: 0x94840008  lhu         $a0, 0x8($a0)
    ctx->pc = 0x108628u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10862c: 0x38820010  xori        $v0, $a0, 0x10
    ctx->pc = 0x10862cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)16);
    // 0x108630: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x108630u;
    {
        const bool branch_taken_0x108630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108630) {
            ctx->pc = 0x108634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108630u;
            // 0x108634: 0x38820011  xori        $v0, $a0, 0x11 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)17);
            ctx->in_delay_slot = false;
            ctx->pc = 0x108658u;
            return;
        }
    }
    ctx->pc = 0x108638u;
    // 0x108638: 0xfa200000  sqc2        $vf0, 0x0($s1)
    ctx->pc = 0x108638u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10863c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x10863cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108640: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x108640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108644: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x108644u;
    SET_GPR_U32(ctx, 31, 0x10864Cu);
    ctx->pc = 0x108648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108644u;
    // 0x108648: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x108644u, 0x10864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10864Cu;
label_10864c:
    // 0x10864c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x10864Cu;
    {
        const bool branch_taken_0x10864c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10864Cu;
        // 0x108650: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10864c) {
            ctx->pc = 0x1086C4u;
            return;
        }
    }
    ctx->pc = 0x108654u;
    // 0x108654: 0x0  nop
    ctx->pc = 0x108654u;
    // NOP
    ctx->pc = 0x108658u;
}
