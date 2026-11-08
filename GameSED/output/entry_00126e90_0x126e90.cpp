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

// Function: entry_00126e90
// Address: 0x126e90 - 0x126f70
void entry_00126e90_0x126e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126e90_0x126e90");
#endif

    ctx->pc = 0x126e90u;

    // 0x126e90: 0xafb000f4  sw          $s0, 0xF4($sp)
    ctx->pc = 0x126e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 16));
    // 0x126e94: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x126e94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x126e98: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x126e98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x126e9c: 0x35298005  ori         $t1, $t1, 0x8005
    ctx->pc = 0x126e9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32773);
    // 0x126ea0: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x126ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x126ea4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x126ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x126ea8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x126ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x126eac: 0x3c0b0007  lui         $t3, 0x7
    ctx->pc = 0x126eacu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)7 << 16));
    // 0x126eb0: 0x356b000d  ori         $t3, $t3, 0xD
    ctx->pc = 0x126eb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)13);
    // 0x126eb4: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x126eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x126eb8: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x126eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x126ebc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x126ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x126ec0: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x126ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x126ec4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x126ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x126ec8: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x126ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x126ecc: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x126eccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x126ed0: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x126ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x126ed4: 0xfc490000  sd          $t1, 0x0($v0)
    ctx->pc = 0x126ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 9));
    // 0x126ed8: 0x24690060  addiu       $t1, $v1, 0x60
    ctx->pc = 0x126ed8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x126edc: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x126edcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x126ee0: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x126ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x126ee4: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x126ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x126ee8: 0x240b0060  addiu       $t3, $zero, 0x60
    ctx->pc = 0x126ee8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x126eec: 0x24680030  addiu       $t0, $v1, 0x30
    ctx->pc = 0x126eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x126ef0: 0x240a004e  addiu       $t2, $zero, 0x4E
    ctx->pc = 0x126ef0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x126ef4: 0xdf848c90  ld          $a0, -0x7370($gp)
    ctx->pc = 0x126ef4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x126ef8: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x126ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x126efc: 0xfd0a0008  sd          $t2, 0x8($t0)
    ctx->pc = 0x126efcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 10));
    // 0x126f00: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x126f00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x126f04: 0xfd040000  sd          $a0, 0x0($t0)
    ctx->pc = 0x126f04u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 4));
    // 0x126f08: 0x244f0e00  addiu       $t7, $v0, 0xE00
    ctx->pc = 0x126f08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 3584));
    // 0x126f0c: 0x246c0050  addiu       $t4, $v1, 0x50
    ctx->pc = 0x126f0cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x126f10: 0x240d0080  addiu       $t5, $zero, 0x80
    ctx->pc = 0x126f10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x126f14: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x126f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x126f18: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x126f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x126f1c: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x126f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x126f20: 0x240e0006  addiu       $t6, $zero, 0x6
    ctx->pc = 0x126f20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x126f24: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x126f24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x126f28: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x126f28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f2c: 0xacad0004  sw          $t5, 0x4($a1)
    ctx->pc = 0x126f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 13));
    // 0x126f30: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x126f30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x126f34: 0xfd870008  sd          $a3, 0x8($t4)
    ctx->pc = 0x126f34u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 7));
    // 0x126f38: 0x27b500a0  addiu       $s5, $sp, 0xA0
    ctx->pc = 0x126f38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x126f3c: 0xfd8b0000  sd          $t3, 0x0($t4)
    ctx->pc = 0x126f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 11));
    // 0x126f40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x126f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x126f44: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x126f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x126f48: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x126f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x126f4c: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x126f4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x126f50: 0x94450030  lhu         $a1, 0x30($v0)
    ctx->pc = 0x126f50u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x126f54: 0xdc440038  ld          $a0, 0x38($v0)
    ctx->pc = 0x126f54u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x126f58: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x126f58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x126f5c: 0xfd2e0008  sd          $t6, 0x8($t1)
    ctx->pc = 0x126f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 14));
    // 0x126f60: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x126f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x126f64: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x126f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x126f68: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x126f68u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x126f6c: 0x0  nop
    ctx->pc = 0x126f6cu;
    // NOP
    ctx->pc = 0x126f70u;
}
