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

// Function: entry_00195eec
// Address: 0x195eec - 0x195f30
void entry_00195eec_0x195eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195eec_0x195eec");
#endif

    ctx->pc = 0x195eecu;

    // 0x195eec: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x195eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    // 0x195ef0: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x195ef0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x195ef4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x195ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x195ef8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x195EF8u;
    {
        const bool branch_taken_0x195ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x195EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EF8u;
        // 0x195efc: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ef8) {
            ctx->pc = 0x195F30u;
            return;
        }
    }
    ctx->pc = 0x195F00u;
    // 0x195f00: 0x1077000b  beq         $v1, $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x195F00u;
    {
        const bool branch_taken_0x195f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x195F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F00u;
        // 0x195f04: 0x26a60030  addiu       $a2, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f00) {
            ctx->pc = 0x195F30u;
            return;
        }
    }
    ctx->pc = 0x195F08u;
    // 0x195f08: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x195f08u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x195f0c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x195f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195f10: 0x171140  sll         $v0, $s7, 5
    ctx->pc = 0x195f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x195f14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195f18: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x195f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x195f1c: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x195f1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x195f20: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x195f20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x195f24: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x195f24u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x195f28: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x195f28u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x195f2c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x195f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    ctx->pc = 0x195f30u;
}
