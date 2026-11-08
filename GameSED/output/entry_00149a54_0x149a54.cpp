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

// Function: entry_00149a54
// Address: 0x149a54 - 0x149aa8
void entry_00149a54_0x149a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149a54_0x149a54");
#endif

    switch (ctx->pc) {
        case 0x149a64u: goto label_149a64;
        default: break;
    }

    ctx->pc = 0x149a54u;

    // 0x149a54: 0xf8a00000  sqc2        $vf0, 0x0($a1)
    ctx->pc = 0x149a54u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x149a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a5c: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x149A5Cu;
    SET_GPR_U32(ctx, 31, 0x149A64u);
    ctx->pc = 0x149A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A5Cu;
    // 0x149a60: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x149A5Cu, 0x149A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A64u;
label_149a64:
    // 0x149a64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149a68: 0x26090020  addiu       $t1, $s0, 0x20
    ctx->pc = 0x149a68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x149a6c: 0x260b0010  addiu       $t3, $s0, 0x10
    ctx->pc = 0x149a6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x149a70: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x149a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x149a74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x149a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x149a78: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x149a78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a7c: 0x8d650008  lw          $a1, 0x8($t3)
    ctx->pc = 0x149a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x149a80: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x149a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x149a84: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x149a84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x149a88: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x149A88u;
    {
        const bool branch_taken_0x149a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A88u;
        // 0x149a8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a88) {
            ctx->pc = 0x149B14u;
            return;
        }
    }
    ctx->pc = 0x149A90u;
    // 0x149a90: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x149a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x149a94: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x149a94u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x149a98: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x149a98u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a9c: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x149a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
    // 0x149aa0: 0x25087820  addiu       $t0, $t0, 0x7820
    ctx->pc = 0x149aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30752));
    // 0x149aa4: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x149aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    ctx->pc = 0x149aa8u;
}
