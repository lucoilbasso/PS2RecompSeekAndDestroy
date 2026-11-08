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

// Function: entry_00122d44
// Address: 0x122d44 - 0x122db8
void entry_00122d44_0x122d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122d44_0x122d44");
#endif

    ctx->pc = 0x122d44u;

    // 0x122d44: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x122d44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d48: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x122d48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x122d4c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x122d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x122d50: 0x34a58003  ori         $a1, $a1, 0x8003
    ctx->pc = 0x122d50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32771);
    // 0x122d54: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x122d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x122d58: 0x240a004e  addiu       $t2, $zero, 0x4E
    ctx->pc = 0x122d58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x122d5c: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x122d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x122d60: 0x3c0b0007  lui         $t3, 0x7
    ctx->pc = 0x122d60u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)7 << 16));
    // 0x122d64: 0x356b000d  ori         $t3, $t3, 0xD
    ctx->pc = 0x122d64u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)13);
    // 0x122d68: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x122d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x122d6c: 0xafc30008  sw          $v1, 0x8($fp)
    ctx->pc = 0x122d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
    // 0x122d70: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x122d70u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x122d74: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x122d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x122d78: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x122d78u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x122d7c: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x122d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x122d80: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x122d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x122d84: 0x24660040  addiu       $a2, $v1, 0x40
    ctx->pc = 0x122d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x122d88: 0xdf828c90  ld          $v0, -0x7370($gp)
    ctx->pc = 0x122d88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x122d8c: 0x24080047  addiu       $t0, $zero, 0x47
    ctx->pc = 0x122d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x122d90: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x122d90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x122d94: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x122d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x122d98: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x122d98u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x122d9c: 0x24710050  addiu       $s1, $v1, 0x50
    ctx->pc = 0x122d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x122da0: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x122da0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x122da4: 0xfca80008  sd          $t0, 0x8($a1)
    ctx->pc = 0x122da4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 8));
    // 0x122da8: 0xfcab0000  sd          $t3, 0x0($a1)
    ctx->pc = 0x122da8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 11));
    // 0x122dac: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x122dacu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
    // 0x122db0: 0xfcc90000  sd          $t1, 0x0($a2)
    ctx->pc = 0x122db0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 9));
    // 0x122db4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x122db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x122db8u;
}
