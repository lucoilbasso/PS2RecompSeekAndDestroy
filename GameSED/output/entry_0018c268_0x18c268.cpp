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

// Function: entry_0018c268
// Address: 0x18c268 - 0x18c2a8
void entry_0018c268_0x18c268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c268_0x18c268");
#endif

    ctx->pc = 0x18c268u;

    // 0x18c268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c26c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18c26cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18c270: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x18c270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x18c274: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x18c274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x18c278: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x18c278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x18c27c: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x18c27cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x18c280: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x18c280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x18c284: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x18c284u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x18c288: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x18c288u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x18c28c: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x18c28cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x18c290: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x18c290u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x18c294: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x18c294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18c298: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C298u;
    {
        const bool branch_taken_0x18c298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C298u;
        // 0x18c29c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c298) {
            ctx->pc = 0x18C2A8u;
            return;
        }
    }
    ctx->pc = 0x18C2A0u;
    // 0x18c2a0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x18C2A0u;
    SET_GPR_U32(ctx, 31, 0x18C2A8u);
    ctx->pc = 0x18C2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C2A0u;
    // 0x18c2a4: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x18C2A0u, 0x18C2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C2A8u;
}
