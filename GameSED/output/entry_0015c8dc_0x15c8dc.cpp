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

// Function: entry_0015c8dc
// Address: 0x15c8dc - 0x15c920
void entry_0015c8dc_0x15c8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c8dc_0x15c8dc");
#endif

    ctx->pc = 0x15c8dcu;

    // 0x15c8dc: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x15c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x15c8e0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15C8E0u;
    {
        const bool branch_taken_0x15c8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8E0u;
        // 0x15c8e4: 0x26310120  addiu       $s1, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c8e0) {
            ctx->pc = 0x15C954u;
            return;
        }
    }
    ctx->pc = 0x15C8E8u;
    // 0x15c8e8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x15c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x15c8ec: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x15c8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x15c8f0: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x15C8F0u;
    {
        const bool branch_taken_0x15c8f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c8f0) {
            ctx->pc = 0x15C8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C8F0u;
            // 0x15c8f4: 0x8c420030  lw          $v0, 0x30($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C920u;
            return;
        }
    }
    ctx->pc = 0x15C8F8u;
    // 0x15c8f8: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x15c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x15c8fc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15c8fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15c900: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x15c900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x15c904: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x15c904u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15c908: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x15c908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15c90c: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x15c90cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x15c910: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x15c910u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15c914: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x15c914u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c918: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15C918u;
    {
        const bool branch_taken_0x15c918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C918u;
        // 0x15c91c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c918) {
            ctx->pc = 0x15C93Cu;
            return;
        }
    }
    ctx->pc = 0x15C920u;
}
