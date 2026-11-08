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

// Function: entry_0012da5c
// Address: 0x12da5c - 0x12dad0
void entry_0012da5c_0x12da5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012da5c_0x12da5c");
#endif

    ctx->pc = 0x12da5cu;

    // 0x12da5c: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x12da5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da60: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x12da60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12da64: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x12da64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12da68: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x12da68u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x12da6c: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x12da6cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x12da70: 0x356b8003  ori         $t3, $t3, 0x8003
    ctx->pc = 0x12da70u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32771);
    // 0x12da74: 0x3c0c0007  lui         $t4, 0x7
    ctx->pc = 0x12da74u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)7 << 16));
    // 0x12da78: 0x358c000d  ori         $t4, $t4, 0xD
    ctx->pc = 0x12da78u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)13);
    // 0x12da7c: 0x240a0047  addiu       $t2, $zero, 0x47
    ctx->pc = 0x12da7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12da80: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x12da80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12da84: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x12da84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x12da88: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x12da88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x12da8c: 0x24710050  addiu       $s1, $v1, 0x50
    ctx->pc = 0x12da8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x12da90: 0xafc30008  sw          $v1, 0x8($fp)
    ctx->pc = 0x12da90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
    // 0x12da94: 0x24670030  addiu       $a3, $v1, 0x30
    ctx->pc = 0x12da94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12da98: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x12da98u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x12da9c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x12da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12daa0: 0xfc4b0000  sd          $t3, 0x0($v0)
    ctx->pc = 0x12daa0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 11));
    // 0x12daa4: 0x24680040  addiu       $t0, $v1, 0x40
    ctx->pc = 0x12daa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x12daa8: 0xfcaa0008  sd          $t2, 0x8($a1)
    ctx->pc = 0x12daa8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 10));
    // 0x12daac: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x12daacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x12dab0: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x12dab0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x12dab4: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x12dab4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12dab8: 0xdf828c90  ld          $v0, -0x7370($gp)
    ctx->pc = 0x12dab8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x12dabc: 0xfce60008  sd          $a2, 0x8($a3)
    ctx->pc = 0x12dabcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 6));
    // 0x12dac0: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x12dac0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x12dac4: 0xfd040008  sd          $a0, 0x8($t0)
    ctx->pc = 0x12dac4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 4));
    // 0x12dac8: 0xfd090000  sd          $t1, 0x0($t0)
    ctx->pc = 0x12dac8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 9));
    // 0x12dacc: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x12daccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    ctx->pc = 0x12dad0u;
}
