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

// Function: entry_001310b0
// Address: 0x1310b0 - 0x131114
void entry_001310b0_0x1310b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001310b0_0x1310b0");
#endif

    switch (ctx->pc) {
        case 0x1310e8u: goto label_1310e8;
        case 0x1310f8u: goto label_1310f8;
        default: break;
    }

    ctx->pc = 0x1310b0u;

    // 0x1310b0: 0x24630160  addiu       $v1, $v1, 0x160
    ctx->pc = 0x1310b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x1310b4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1310b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1310b8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1310b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1310bc: 0x8e0902f8  lw          $t1, 0x2F8($s0)
    ctx->pc = 0x1310bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x1310c0: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1310c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1310c4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x1310c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1310c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1310c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310cc: 0xdd230170  ld          $v1, 0x170($t1)
    ctx->pc = 0x1310ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 368)));
    // 0x1310d0: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1310d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1310d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310d8: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x1310d8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x1310dc: 0xdd220178  ld          $v0, 0x178($t1)
    ctx->pc = 0x1310dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 376)));
    // 0x1310e0: 0xc04bfd4  jal         func_12FF50
    ctx->pc = 0x1310E0u;
    SET_GPR_U32(ctx, 31, 0x1310E8u);
    ctx->pc = 0x1310E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1310E0u;
    // 0x1310e4: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FF50u, 0x1310E0u, 0x1310E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310E8u;
label_1310e8:
    // 0x1310e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1310e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1310ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310f0: 0xc041682  jal         func_105A08
    ctx->pc = 0x1310F0u;
    SET_GPR_U32(ctx, 31, 0x1310F8u);
    ctx->pc = 0x1310F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1310F0u;
    // 0x1310f4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x1310F0u, 0x1310F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310F8u;
label_1310f8:
    // 0x1310f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1310f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310fc: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1310FCu;
    {
        const bool branch_taken_0x1310fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x131100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1310FCu;
        // 0x131100: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1310fc) {
            ctx->pc = 0x131114u;
            return;
        }
    }
    ctx->pc = 0x131104u;
    // 0x131104: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x131104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x131108: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13110c: 0xc04c17e  jal         func_1305F8
    ctx->pc = 0x13110Cu;
    SET_GPR_U32(ctx, 31, 0x131114u);
    ctx->pc = 0x131110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13110Cu;
    // 0x131110: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1305F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305F8u, 0x13110Cu, 0x131114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131114u;
}
