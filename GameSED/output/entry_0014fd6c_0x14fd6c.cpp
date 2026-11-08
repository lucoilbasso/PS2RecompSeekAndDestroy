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

// Function: entry_0014fd6c
// Address: 0x14fd6c - 0x14fdb8
void entry_0014fd6c_0x14fd6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fd6c_0x14fd6c");
#endif

    switch (ctx->pc) {
        case 0x14fd7cu: goto label_14fd7c;
        default: break;
    }

    ctx->pc = 0x14fd6cu;

    // 0x14fd6c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x14FD6Cu;
    {
        const bool branch_taken_0x14fd6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD6Cu;
        // 0x14fd70: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd6c) {
            ctx->pc = 0x14FDB8u;
            return;
        }
    }
    ctx->pc = 0x14FD74u;
    // 0x14fd74: 0xc066810  jal         func_19A040
    ctx->pc = 0x14FD74u;
    SET_GPR_U32(ctx, 31, 0x14FD7Cu);
    ctx->pc = 0x19A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A040u, 0x14FD74u, 0x14FD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD7Cu;
label_14fd7c:
    // 0x14fd7c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x14fd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x14fd80: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x14fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x14fd84: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x14fd84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x14fd88: 0x3c04ffbf  lui         $a0, 0xFFBF
    ctx->pc = 0x14fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65471 << 16));
    // 0x14fd8c: 0x3c05fff7  lui         $a1, 0xFFF7
    ctx->pc = 0x14fd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65527 << 16));
    // 0x14fd90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14fd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14fd94: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x14fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x14fd98: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x14fd98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x14fd9c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x14fd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x14fda0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x14fda0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x14fda4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x14fda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x14fda8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x14fda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x14fdac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14fdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x14fdb0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14FDB0u;
    {
        const bool branch_taken_0x14fdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDB0u;
        // 0x14fdb4: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fdb0) {
            ctx->pc = 0x14FDE8u;
            return;
        }
    }
    ctx->pc = 0x14FDB8u;
}
