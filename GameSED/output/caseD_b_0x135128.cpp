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

// Function: caseD_b
// Address: 0x135128 - 0x135150
void caseD_b_0x135128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x135128");
#endif

    switch (ctx->pc) {
        case 0x135148u: goto label_135148;
        default: break;
    }

    ctx->pc = 0x135128u;

    // 0x135128: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x135128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13512c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x13512cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x135130: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x135130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x135134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135138: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x135138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13513c: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x13513cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x135140: 0xc053f58  jal         func_14FD60
    ctx->pc = 0x135140u;
    SET_GPR_U32(ctx, 31, 0x135148u);
    ctx->pc = 0x135144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135140u;
    // 0x135144: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD60u, 0x135140u, 0x135148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135148u;
label_135148:
    // 0x135148: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x135148u;
    {
        const bool branch_taken_0x135148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135148u;
        // 0x13514c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135148) {
            ctx->pc = 0x135200u;
            return;
        }
    }
    ctx->pc = 0x135150u;
}
