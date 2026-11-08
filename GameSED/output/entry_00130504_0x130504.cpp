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

// Function: entry_00130504
// Address: 0x130504 - 0x130558
void entry_00130504_0x130504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130504_0x130504");
#endif

    switch (ctx->pc) {
        case 0x13050cu: goto label_13050c;
        case 0x13053cu: goto label_13053c;
        default: break;
    }

    ctx->pc = 0x130504u;

    // 0x130504: 0xc061422  jal         func_185088
    ctx->pc = 0x130504u;
    SET_GPR_U32(ctx, 31, 0x13050Cu);
    ctx->pc = 0x130508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130504u;
    // 0x130508: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x130504u, 0x13050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13050Cu;
label_13050c:
    // 0x13050c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x13050cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x130510: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x130510u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130514: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x130514u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x130518: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x130518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x13051c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x13051cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x130520: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x130520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x130524: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x130524u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130528: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x130528u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x13052c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x13052cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x130530: 0x7cc00000  sq          $zero, 0x0($a2)
    ctx->pc = 0x130530u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 0));
    // 0x130534: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x130534u;
    SET_GPR_U32(ctx, 31, 0x13053Cu);
    ctx->pc = 0x130538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130534u;
    // 0x130538: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x130534u, 0x13053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13053Cu;
label_13053c:
    // 0x13053c: 0xa60000c6  sh          $zero, 0xC6($s0)
    ctx->pc = 0x13053cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 198), (uint16_t)GPR_U32(ctx, 0));
    // 0x130540: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x130540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x130544: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x130544u;
    {
        const bool branch_taken_0x130544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130544) {
            ctx->pc = 0x130548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130544u;
            // 0x130548: 0x8e030068  lw          $v1, 0x68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13055Cu;
            return;
        }
    }
    ctx->pc = 0x13054Cu;
    // 0x13054c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x13054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x130550: 0x50530001  beql        $v0, $s3, . + 4 + (0x1 << 2)
    ctx->pc = 0x130550u;
    {
        const bool branch_taken_0x130550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x130550) {
            ctx->pc = 0x130554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130550u;
            // 0x130554: 0xa6020118  sh          $v0, 0x118($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130558u;
            return;
        }
    }
    ctx->pc = 0x130558u;
}
