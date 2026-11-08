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

// Function: entry_001d31a0
// Address: 0x1d31a0 - 0x1d31e0
void entry_001d31a0_0x1d31a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d31a0_0x1d31a0");
#endif

    ctx->pc = 0x1d31a0u;

    // 0x1d31a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1d31a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d31a4: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x1d31a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d31a8: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1d31a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d31ac: 0x24930432  addiu       $s3, $a0, 0x432
    ctx->pc = 0x1d31acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1074));
    // 0x1d31b0: 0x2a620021  slti        $v0, $s3, 0x21
    ctx->pc = 0x1d31b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1d31b4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D31B4u;
    {
        const bool branch_taken_0x1d31b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D31B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31B4u;
        // 0x1d31b8: 0x131023  negu        $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d31b4) {
            ctx->pc = 0x1D31E0u;
            return;
        }
    }
    ctx->pc = 0x1D31BCu;
    // 0x1d31bc: 0x24840412  addiu       $a0, $a0, 0x412
    ctx->pc = 0x1d31bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1042));
    // 0x1d31c0: 0x131823  negu        $v1, $s3
    ctx->pc = 0x1d31c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x1d31c4: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1d31c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1d31c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d31c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d31cc: 0x701804  sllv        $v1, $s0, $v1
    ctx->pc = 0x1d31ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x1d31d0: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x1d31d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1d31d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D31D4u;
    {
        const bool branch_taken_0x1d31d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D31D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31D4u;
        // 0x1d31d8: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d31d4) {
            ctx->pc = 0x1D31ECu;
            return;
        }
    }
    ctx->pc = 0x1D31DCu;
    // 0x1d31dc: 0x0  nop
    ctx->pc = 0x1d31dcu;
    // NOP
    ctx->pc = 0x1d31e0u;
}
