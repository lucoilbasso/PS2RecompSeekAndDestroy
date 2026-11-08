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

// Function: _decode_motion_vector
// Address: 0x1c1768 - 0x1c17f0
void _decode_motion_vector_0x1c1768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decode_motion_vector_0x1c1768");
#endif

    ctx->pc = 0x1c1768u;

    // 0x1c1768: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1c1768u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c176c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1c176cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c1770: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x1c1770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1c1774: 0xa24804  sllv        $t1, $v0, $a1
    ctx->pc = 0x1c1774u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1c1778: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x1c1778u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1c177c: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1C177Cu;
    {
        const bool branch_taken_0x1c177c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1C1780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C177Cu;
        // 0x1c1780: 0x68200b  movn        $a0, $v1, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c177c) {
            ctx->pc = 0x1C17B0u;
            goto label_1c17b0;
        }
    }
    ctx->pc = 0x1C1784u;
    // 0x1c1784: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x1c1784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1c1788: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c1788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c178c: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x1c178cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1c1790: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1c1790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1c1794: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1c1794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c1798: 0x89182a  slt         $v1, $a0, $t1
    ctx->pc = 0x1c1798u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1c179c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C179Cu;
    {
        const bool branch_taken_0x1c179c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C179Cu;
        // 0x1c17a0: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c179c) {
            ctx->pc = 0x1C17E4u;
            goto label_1c17e4;
        }
    }
    ctx->pc = 0x1C17A4u;
    // 0x1c17a4: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x1c17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1c17a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C17A8u;
    {
        const bool branch_taken_0x1c17a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C17ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17A8u;
        // 0x1c17ac: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17a8) {
            ctx->pc = 0x1C17E0u;
            goto label_1c17e0;
        }
    }
    ctx->pc = 0x1C17B0u;
label_1c17b0:
    // 0x1c17b0: 0x4c1000c  bgez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1C17B0u;
    {
        const bool branch_taken_0x1c17b0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1C17B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17B0u;
        // 0x1c17b4: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17b0) {
            ctx->pc = 0x1C17E4u;
            goto label_1c17e4;
        }
    }
    ctx->pc = 0x1C17B8u;
    // 0x1c17b8: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x1c17b8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x1c17bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1c17bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1c17c0: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x1c17c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1c17c4: 0x91823  negu        $v1, $t1
    ctx->pc = 0x1c17c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x1c17c8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1c17c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1c17cc: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1c17ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c17d0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1c17d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c17d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C17D4u;
    {
        const bool branch_taken_0x1c17d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C17D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17D4u;
        // 0x1c17d8: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17d4) {
            ctx->pc = 0x1C17E0u;
            goto label_1c17e0;
        }
    }
    ctx->pc = 0x1C17DCu;
    // 0x1c17dc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1c17dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1c17e0:
    // 0x1c17e0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1c17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1c17e4:
    // 0x1c17e4: 0x88100a  movz        $v0, $a0, $t0
    ctx->pc = 0x1c17e4u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1c17e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C17E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17E8u;
        // 0x1c17ec: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C17E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C17F0u;
}
