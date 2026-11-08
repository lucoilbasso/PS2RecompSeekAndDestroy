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

// Function: entry_001c82f8
// Address: 0x1c82f8 - 0x1c8348
void entry_001c82f8_0x1c82f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c82f8_0x1c82f8");
#endif

    ctx->pc = 0x1c82f8u;

    // 0x1c82f8: 0x5403f  dsra32      $t0, $a1, 0
    ctx->pc = 0x1c82f8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1c82fc: 0x9583c  dsll32      $t3, $t1, 0
    ctx->pc = 0x1c82fcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1c8300: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1c8300u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x1c8304: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x1c8304u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1c8308: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x1c8308u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x1c830c: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x1c830cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1c8310: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x1c8310u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x1c8314: 0x150000e2  bnez        $t0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x1C8314u;
    {
        const bool branch_taken_0x1c8314 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8314u;
        // 0x1c8318: 0x148102b  sltu        $v0, $t2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8314) {
            ctx->pc = 0x1C86A0u;
            return;
        }
    }
    ctx->pc = 0x1C831Cu;
    // 0x1c831c: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x1c831cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c8320: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1C8320u;
    {
        const bool branch_taken_0x1c8320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8320u;
        // 0x1c8324: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8320) {
            ctx->pc = 0x1C8460u;
            return;
        }
    }
    ctx->pc = 0x1C8328u;
    // 0x1c8328: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1c8328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c832c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C832Cu;
    {
        const bool branch_taken_0x1c832c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C832Cu;
        // 0x1c8330: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c832c) {
            ctx->pc = 0x1C8348u;
            return;
        }
    }
    ctx->pc = 0x1C8334u;
    // 0x1c8334: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1c8334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c8338: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c8338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c833c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C833Cu;
    {
        const bool branch_taken_0x1c833c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C833Cu;
        // 0x1c8340: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c833c) {
            ctx->pc = 0x1C835Cu;
            return;
        }
    }
    ctx->pc = 0x1C8344u;
    // 0x1c8344: 0x0  nop
    ctx->pc = 0x1c8344u;
    // NOP
    ctx->pc = 0x1c8348u;
}
