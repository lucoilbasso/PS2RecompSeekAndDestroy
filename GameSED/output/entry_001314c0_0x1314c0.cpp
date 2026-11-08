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

// Function: entry_001314c0
// Address: 0x1314c0 - 0x131508
void entry_001314c0_0x1314c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001314c0_0x1314c0");
#endif

    ctx->pc = 0x1314c0u;

    // 0x1314c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1314c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1314c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1314c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1314c8: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1314c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x1314cc: 0x8ca40154  lw          $a0, 0x154($a1)
    ctx->pc = 0x1314ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
    // 0x1314d0: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x1314d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1314d4: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x1314d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1314d8: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x1314d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1314dc: 0x8c6402f8  lw          $a0, 0x2F8($v1)
    ctx->pc = 0x1314dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 760)));
    // 0x1314e0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1314E0u;
    {
        const bool branch_taken_0x1314e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1314E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314E0u;
        // 0x1314e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1314e0) {
            ctx->pc = 0x131528u;
            return;
        }
    }
    ctx->pc = 0x1314E8u;
    // 0x1314e8: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1314E8u;
    {
        const bool branch_taken_0x1314e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1314ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314E8u;
        // 0x1314ec: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1314e8) {
            ctx->pc = 0x13152Cu;
            return;
        }
    }
    ctx->pc = 0x1314F0u;
    // 0x1314f0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1314f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1314f4: 0x8c900150  lw          $s0, 0x150($a0)
    ctx->pc = 0x1314f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1314f8: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1314F8u;
    {
        const bool branch_taken_0x1314f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1314FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314F8u;
        // 0x1314fc: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1314f8) {
            ctx->pc = 0x131524u;
            return;
        }
    }
    ctx->pc = 0x131500u;
    // 0x131500: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x131500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x131504: 0x0  nop
    ctx->pc = 0x131504u;
    // NOP
    ctx->pc = 0x131508u;
}
