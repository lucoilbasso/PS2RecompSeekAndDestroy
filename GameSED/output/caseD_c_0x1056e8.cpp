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

// Function: caseD_c
// Address: 0x1056e8 - 0x105720
void caseD_c_0x1056e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x1056e8");
#endif

    switch (ctx->pc) {
        case 0x1056f0u: goto label_1056f0;
        default: break;
    }

    ctx->pc = 0x1056e8u;

    // 0x1056e8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1056E8u;
    SET_GPR_U32(ctx, 31, 0x1056F0u);
    ctx->pc = 0x1056ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056E8u;
    // 0x1056ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1056E8u, 0x1056F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056F0u;
label_1056f0:
    // 0x1056f0: 0x8f868d10  lw          $a2, -0x72F0($gp)
    ctx->pc = 0x1056f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1056f4: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x1056f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x1056f8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1056f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1056fc: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x1056fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x105700: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x105700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x105704: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x105704u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x105708: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x105708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10570c: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x10570cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x105710: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x105710u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x105714: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x105714u;
    {
        const bool branch_taken_0x105714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105714u;
        // 0x105718: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105714) {
            ctx->pc = 0x10579Cu;
            return;
        }
    }
    ctx->pc = 0x10571Cu;
    // 0x10571c: 0x0  nop
    ctx->pc = 0x10571cu;
    // NOP
    ctx->pc = 0x105720u;
}
