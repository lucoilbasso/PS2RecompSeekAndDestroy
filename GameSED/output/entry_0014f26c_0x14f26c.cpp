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

// Function: entry_0014f26c
// Address: 0x14f26c - 0x14f2a4
void entry_0014f26c_0x14f26c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f26c_0x14f26c");
#endif

    switch (ctx->pc) {
        case 0x14f284u: goto label_14f284;
        default: break;
    }

    ctx->pc = 0x14f26cu;

    // 0x14f26c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f270: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x14f270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x14f274: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14F274u;
    {
        const bool branch_taken_0x14f274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F274u;
        // 0x14f278: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f274) {
            ctx->pc = 0x14F2B8u;
            return;
        }
    }
    ctx->pc = 0x14F27Cu;
    // 0x14f27c: 0xc05929a  jal         func_164A68
    ctx->pc = 0x14F27Cu;
    SET_GPR_U32(ctx, 31, 0x14F284u);
    ctx->pc = 0x14F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F27Cu;
    // 0x14f280: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164A68u, 0x14F27Cu, 0x14F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F284u;
label_14f284:
    // 0x14f284: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x14f284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x14f288: 0x2442dfff  addiu       $v0, $v0, -0x2001
    ctx->pc = 0x14f288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959103));
    // 0x14f28c: 0x2c423fff  sltiu       $v0, $v0, 0x3FFF
    ctx->pc = 0x14f28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16383) ? 1 : 0);
    // 0x14f290: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F290u;
    {
        const bool branch_taken_0x14f290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f290) {
            ctx->pc = 0x14F294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F290u;
            // 0x14f294: 0x8e260310  lw          $a2, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F2A4u;
            return;
        }
    }
    ctx->pc = 0x14F298u;
    // 0x14f298: 0x721010c8  pmaxw       $v0, $s0, $s0
    ctx->pc = 0x14f298u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 16)));
    // 0x14f29c: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x14f29cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f2a0: 0x8e260310  lw          $a2, 0x310($s1)
    ctx->pc = 0x14f2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    ctx->pc = 0x14f2a4u;
}
