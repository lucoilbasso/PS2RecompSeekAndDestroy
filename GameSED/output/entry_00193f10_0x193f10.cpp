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

// Function: entry_00193f10
// Address: 0x193f10 - 0x193f7c
void entry_00193f10_0x193f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193f10_0x193f10");
#endif

    ctx->pc = 0x193f10u;

    // 0x193f10: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x193f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x193f14: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x193f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x193f18: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x193f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x193f1c: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x193f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x193f20: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x193f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x193f24: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x193f24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x193f28: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x193f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x193f2c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x193f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x193f30: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x193f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x193f34: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x193f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x193f38: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193f3c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x193f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x193f40: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x193f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x193f44: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x193f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x193f48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x193f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193f4c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x193f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x193f50: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x193f50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x193f54: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x193f54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x193f58: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x193f58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x193f5c: 0xa0a60001  sb          $a2, 0x1($a1)
    ctx->pc = 0x193f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x193f60: 0xa0a70002  sb          $a3, 0x2($a1)
    ctx->pc = 0x193f60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x193f64: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x193f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x193f68: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x193f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x193f6c: 0x103001b  divu        $zero, $t0, $v1
    ctx->pc = 0x193f6cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x193f70: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x193f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x193f74: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x193F74u;
    {
        const bool branch_taken_0x193f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x193f74) {
            ctx->pc = 0x193F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193F74u;
            // 0x193f78: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x193F7Cu;
            return;
        }
    }
    ctx->pc = 0x193F7Cu;
}
