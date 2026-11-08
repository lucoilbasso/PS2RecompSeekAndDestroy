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

// Function: entry_001bac14
// Address: 0x1bac14 - 0x1bac60
void entry_001bac14_0x1bac14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bac14_0x1bac14");
#endif

    ctx->pc = 0x1bac14u;

    // 0x1bac14: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1bac14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1bac18: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x1bac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1bac1c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1bac1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1bac20: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x1bac20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1bac24: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1bac24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1bac28: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1bac28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bac2c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1bac2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1bac30: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1bac30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1bac34: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1bac34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bac38: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1bac38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bac3c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1bac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1bac40: 0x10c20016  beq         $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BAC40u;
    {
        const bool branch_taken_0x1bac40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC40u;
        // 0x1bac44: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac40) {
            ctx->pc = 0x1BAC9Cu;
            return;
        }
    }
    ctx->pc = 0x1BAC48u;
    // 0x1bac48: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x1bac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1bac4c: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAC4Cu;
    {
        const bool branch_taken_0x1bac4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BAC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC4Cu;
        // 0x1bac50: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac4c) {
            ctx->pc = 0x1BAC60u;
            return;
        }
    }
    ctx->pc = 0x1BAC54u;
    // 0x1bac54: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bac54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1bac58: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1BAC58u;
    {
        const bool branch_taken_0x1bac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC58u;
        // 0x1bac5c: 0xac50c090  sw          $s0, -0x3F70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294951056), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac58) {
            ctx->pc = 0x1BAC9Cu;
            return;
        }
    }
    ctx->pc = 0x1BAC60u;
}
