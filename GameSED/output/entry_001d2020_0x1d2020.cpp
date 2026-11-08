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

// Function: entry_001d2020
// Address: 0x1d2020 - 0x1d2048
void entry_001d2020_0x1d2020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2020_0x1d2020");
#endif

    ctx->pc = 0x1d2020u;

    // 0x1d2020: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1d2020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d2024: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d2024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d2028: 0x1a0001e0  blez        $s0, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x1D2028u;
    {
        const bool branch_taken_0x1d2028 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2028u;
        // 0x1d202c: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2028) {
            ctx->pc = 0x1D27ACu;
            return;
        }
    }
    ctx->pc = 0x1D2030u;
    // 0x1d2030: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d2030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d2034: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D2034u;
    {
        const bool branch_taken_0x1d2034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2034u;
        // 0x1d2038: 0x3c070026  lui         $a3, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2034) {
            ctx->pc = 0x1D20A8u;
            return;
        }
    }
    ctx->pc = 0x1D203Cu;
    // 0x1d203c: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x1d203cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d2040: 0x24f1c3d0  addiu       $s1, $a3, -0x3C30
    ctx->pc = 0x1d2040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d2044: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x1d2044u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    ctx->pc = 0x1d2048u;
}
