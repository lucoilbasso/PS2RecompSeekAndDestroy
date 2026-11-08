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

// Function: entry_0015c7ec
// Address: 0x15c7ec - 0x15c830
void entry_0015c7ec_0x15c7ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c7ec_0x15c7ec");
#endif

    ctx->pc = 0x15c7ecu;

    // 0x15c7ec: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15C7ECu;
    {
        const bool branch_taken_0x15c7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7ECu;
        // 0x15c7f0: 0x263200a0  addiu       $s2, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7ec) {
            ctx->pc = 0x15C864u;
            return;
        }
    }
    ctx->pc = 0x15C7F4u;
    // 0x15c7f4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x15c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x15c7f8: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x15c7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x15c7fc: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x15C7FCu;
    {
        const bool branch_taken_0x15c7fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c7fc) {
            ctx->pc = 0x15C800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C7FCu;
            // 0x15c800: 0x8c420030  lw          $v0, 0x30($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C830u;
            return;
        }
    }
    ctx->pc = 0x15C804u;
    // 0x15c804: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x15c804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x15c808: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15c808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15c80c: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x15c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x15c810: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x15c810u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15c814: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x15c814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15c818: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x15c818u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x15c81c: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x15c81cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15c820: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x15c820u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c824: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15C824u;
    {
        const bool branch_taken_0x15c824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C824u;
        // 0x15c828: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c824) {
            ctx->pc = 0x15C84Cu;
            return;
        }
    }
    ctx->pc = 0x15C82Cu;
    // 0x15c82c: 0x0  nop
    ctx->pc = 0x15c82cu;
    // NOP
    ctx->pc = 0x15c830u;
}
