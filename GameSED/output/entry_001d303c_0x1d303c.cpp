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

// Function: entry_001d303c
// Address: 0x1d303c - 0x1d307c
void entry_001d303c_0x1d303c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d303c_0x1d303c");
#endif

    ctx->pc = 0x1d303cu;

    // 0x1d303c: 0x14103e  dsrl32      $v0, $s4, 0
    ctx->pc = 0x1d303cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x1d3040: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1d3040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d3044: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d3044u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d3048: 0x483000c  bgezl       $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D3048u;
    {
        const bool branch_taken_0x1d3048 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1d3048) {
            ctx->pc = 0x1D304Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3048u;
            // 0x1d304c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D307Cu;
            return;
        }
    }
    ctx->pc = 0x1D3050u;
    // 0x1d3050: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1d3050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1d3054: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d3054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1d3058: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d3058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d305c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d305cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d3060: 0x283a024  and         $s4, $s4, $v1
    ctx->pc = 0x1d3060u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
    // 0x1d3064: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d3064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d3068: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d3068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d306c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d306cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d3070: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d3070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d3074: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x1d3074u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1d3078: 0x14103e  dsrl32      $v0, $s4, 0
    ctx->pc = 0x1d3078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
    ctx->pc = 0x1d307cu;
}
