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

// Function: entry_0012694c
// Address: 0x12694c - 0x126a20
void entry_0012694c_0x12694c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012694c_0x12694c");
#endif

    ctx->pc = 0x12694cu;

    // 0x12694c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x12694cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126950: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x126950u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x126954: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x126954u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x126958: 0x354a8006  ori         $t2, $t2, 0x8006
    ctx->pc = 0x126958u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32774);
    // 0x12695c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x12695cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x126960: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x126960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x126964: 0x3c0c0007  lui         $t4, 0x7
    ctx->pc = 0x126964u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)7 << 16));
    // 0x126968: 0x358c000d  ori         $t4, $t4, 0xD
    ctx->pc = 0x126968u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)13);
    // 0x12696c: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x12696cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x126970: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x126970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x126974: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x126974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x126978: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x126978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x12697c: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x12697cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x126980: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x126980u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x126984: 0x24680030  addiu       $t0, $v1, 0x30
    ctx->pc = 0x126984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x126988: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x126988u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x12698c: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x12698cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x126990: 0xfc4a0000  sd          $t2, 0x0($v0)
    ctx->pc = 0x126990u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 10));
    // 0x126994: 0x246a0060  addiu       $t2, $v1, 0x60
    ctx->pc = 0x126994u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x126998: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x126998u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x12699c: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x12699cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1269a0: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x1269a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x1269a4: 0x240c0060  addiu       $t4, $zero, 0x60
    ctx->pc = 0x1269a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1269a8: 0x240b004e  addiu       $t3, $zero, 0x4E
    ctx->pc = 0x1269a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1269ac: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x1269acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1269b0: 0xdf828c90  ld          $v0, -0x7370($gp)
    ctx->pc = 0x1269b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x1269b4: 0x24690050  addiu       $t1, $v1, 0x50
    ctx->pc = 0x1269b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1269b8: 0xfd0b0008  sd          $t3, 0x8($t0)
    ctx->pc = 0x1269b8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 11));
    // 0x1269bc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1269bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1269c0: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x1269c0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x1269c4: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x1269c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1269c8: 0x8ee20030  lw          $v0, 0x30($s7)
    ctx->pc = 0x1269c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x1269cc: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1269ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1269d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1269d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1269d4: 0xac8d0004  sw          $t5, 0x4($a0)
    ctx->pc = 0x1269d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 13));
    // 0x1269d8: 0xfd250008  sd          $a1, 0x8($t1)
    ctx->pc = 0x1269d8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 5));
    // 0x1269dc: 0xfd2c0000  sd          $t4, 0x0($t1)
    ctx->pc = 0x1269dcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 12));
    // 0x1269e0: 0x8ee200d0  lw          $v0, 0xD0($s7)
    ctx->pc = 0x1269e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 208)));
    // 0x1269e4: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x1269e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1269e8: 0x94450030  lhu         $a1, 0x30($v0)
    ctx->pc = 0x1269e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1269ec: 0xdc440038  ld          $a0, 0x38($v0)
    ctx->pc = 0x1269ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1269f0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1269f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1269f4: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x1269f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1269f8: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x1269f8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x1269fc: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1269fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x126a00: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x126a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x126a04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x126a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126a08: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x126a08u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x126a0c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x126a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x126a10: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x126a10u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x126a14: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x126a14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x126a18: 0xe4d40004  swc1        $f20, 0x4($a2)
    ctx->pc = 0x126a18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x126a1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x126a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x126a20u;
}
