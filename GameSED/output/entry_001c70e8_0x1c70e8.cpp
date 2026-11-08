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

// Function: entry_001c70e8
// Address: 0x1c70e8 - 0x1c711c
void entry_001c70e8_0x1c70e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c70e8_0x1c70e8");
#endif

    switch (ctx->pc) {
        case 0x1c7100u: goto label_1c7100;
        case 0x1c7110u: goto label_1c7110;
        default: break;
    }

    ctx->pc = 0x1c70e8u;

label_1c70e8:
    // 0x1c70e8: 0xde640000  ld          $a0, 0x0($s3)
    ctx->pc = 0x1c70e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c70ec: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1c70ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1c70f0: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x1c70f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c70f4: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x1c70f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x1c70f8: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C70F8u;
    SET_GPR_U32(ctx, 31, 0x1C7100u);
    ctx->pc = 0x1C70FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70F8u;
    // 0x1c70fc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C70F8u, 0x1C7100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7100u;
label_1c7100:
    // 0x1c7100: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7104: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7108: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7108u;
    SET_GPR_U32(ctx, 31, 0x1C7110u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7108u, 0x1C7110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7110u;
label_1c7110:
    // 0x1c7110: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c7110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7114: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C7114u;
    {
        const bool branch_taken_0x1c7114 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7114) {
            ctx->pc = 0x1C70E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c70e8;
        }
    }
    ctx->pc = 0x1C711Cu;
}
