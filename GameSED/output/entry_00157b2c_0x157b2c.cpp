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

// Function: entry_00157b2c
// Address: 0x157b2c - 0x157b98
void entry_00157b2c_0x157b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157b2c_0x157b2c");
#endif

    switch (ctx->pc) {
        case 0x157b34u: goto label_157b34;
        default: break;
    }

    ctx->pc = 0x157b2cu;

    // 0x157b2c: 0xc061422  jal         func_185088
    ctx->pc = 0x157B2Cu;
    SET_GPR_U32(ctx, 31, 0x157B34u);
    ctx->pc = 0x157B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B2Cu;
    // 0x157b30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x157B2Cu, 0x157B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B34u;
label_157b34:
    // 0x157b34: 0x262300e0  addiu       $v1, $s1, 0xE0
    ctx->pc = 0x157b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x157b38: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x157b38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157b3c: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x157b3cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x157b40: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x157b40u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x157b44: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x157b44u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x157b48: 0xfbc40000  sqc2        $vf4, 0x0($fp)
    ctx->pc = 0x157b48u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157b4c: 0xfbc50010  sqc2        $vf5, 0x10($fp)
    ctx->pc = 0x157b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 30), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x157b50: 0xfbc60020  sqc2        $vf6, 0x20($fp)
    ctx->pc = 0x157b50u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157b54: 0xfbc70030  sqc2        $vf7, 0x30($fp)
    ctx->pc = 0x157b54u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x157b58: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x157b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157b5c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x157b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x157b60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x157b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x157b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157b68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x157b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x157b6c: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x157b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x157b70: 0x2421a1d0  addiu       $at, $at, -0x5E30
    ctx->pc = 0x157b70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294943184));
    // 0x157b74: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x157b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x157b78: 0xafa20494  sw          $v0, 0x494($sp)
    ctx->pc = 0x157b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 2));
    // 0x157b7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x157b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x157b80: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x157B80u;
    {
        const bool branch_taken_0x157b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x157b80) {
            ctx->pc = 0x157B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157B80u;
            // 0x157b84: 0x2a0f02d  daddu       $fp, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157B98u;
            return;
        }
    }
    ctx->pc = 0x157B88u;
    // 0x157b88: 0x2e0f02d  daddu       $fp, $s7, $zero
    ctx->pc = 0x157b88u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157b8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x157B8Cu;
    {
        const bool branch_taken_0x157b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B8Cu;
        // 0x157b90: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b8c) {
            ctx->pc = 0x157BACu;
            return;
        }
    }
    ctx->pc = 0x157B94u;
    // 0x157b94: 0x0  nop
    ctx->pc = 0x157b94u;
    // NOP
    ctx->pc = 0x157b98u;
}
