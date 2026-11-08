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

// Function: entry_0013b558
// Address: 0x13b558 - 0x13b5c0
void entry_0013b558_0x13b558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b558_0x13b558");
#endif

    switch (ctx->pc) {
        case 0x13b5bcu: goto label_13b5bc;
        default: break;
    }

    ctx->pc = 0x13b558u;

    // 0x13b558: 0x1220003c  beqz        $s1, . + 4 + (0x3C << 2)
    ctx->pc = 0x13B558u;
    {
        const bool branch_taken_0x13b558 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B558u;
        // 0x13b55c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b558) {
            ctx->pc = 0x13B64Cu;
            return;
        }
    }
    ctx->pc = 0x13B560u;
    // 0x13b560: 0x262201b0  addiu       $v0, $s1, 0x1B0
    ctx->pc = 0x13b560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x13b564: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x13b564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13b568: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13b568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13b56c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x13b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13b570: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x13b570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x13b574: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13b574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b578: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x13b578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13b57c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x13b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13b580: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13b580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13b584: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13b584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13b588: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x13b588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13b58c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13b590: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13b590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13b594: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x13b594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x13b598: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13b598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13b59c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13b59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13b5a0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B5A0u;
    {
        const bool branch_taken_0x13b5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b5a0) {
            ctx->pc = 0x13B5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B5A0u;
            // 0x13b5a4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B5C0u;
            return;
        }
    }
    ctx->pc = 0x13B5A8u;
    // 0x13b5a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b5ac: 0x262501c0  addiu       $a1, $s1, 0x1C0
    ctx->pc = 0x13b5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x13b5b0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x13b5b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b5b4: 0xc0516fe  jal         func_145BF8
    ctx->pc = 0x13B5B4u;
    SET_GPR_U32(ctx, 31, 0x13B5BCu);
    ctx->pc = 0x13B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B5B4u;
    // 0x13b5b8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x145BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145BF8u, 0x13B5B4u, 0x13B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B5BCu;
label_13b5bc:
    // 0x13b5bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x13b5c0u;
}
