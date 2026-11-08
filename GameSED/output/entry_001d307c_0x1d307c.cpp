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

// Function: entry_001d307c
// Address: 0x1d307c - 0x1d30b8
void entry_001d307c_0x1d307c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d307c_0x1d307c");
#endif

    ctx->pc = 0x1d307cu;

    // 0x1d307c: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x1d307cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d3080: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1d3080u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1d3084: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x1d3084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x1d3088: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x1d3088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1d308c: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D308Cu;
    {
        const bool branch_taken_0x1d308c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D308Cu;
        // 0x1d3090: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d308c) {
            ctx->pc = 0x1D30E8u;
            return;
        }
    }
    ctx->pc = 0x1D3094u;
    // 0x1d3094: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d3094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3098: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x1d3098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x1d309c: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x1d309cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1d30a0: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x1d30a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x1d30a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D30A4u;
    {
        const bool branch_taken_0x1d30a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30A4u;
        // 0x1d30a8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30a4) {
            ctx->pc = 0x1D30B8u;
            return;
        }
    }
    ctx->pc = 0x1D30ACu;
    // 0x1d30ac: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d30acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d30b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D30B0u;
    {
        const bool branch_taken_0x1d30b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D30B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30B0u;
        // 0x1d30b4: 0x2455c5d0  addiu       $s5, $v0, -0x3A30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30b0) {
            ctx->pc = 0x1D30C0u;
            return;
        }
    }
    ctx->pc = 0x1D30B8u;
}
