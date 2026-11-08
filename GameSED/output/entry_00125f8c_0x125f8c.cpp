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

// Function: entry_00125f8c
// Address: 0x125f8c - 0x125ff8
void entry_00125f8c_0x125f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125f8c_0x125f8c");
#endif

    ctx->pc = 0x125f8cu;

    // 0x125f8c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x125f8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f90: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x125f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x125f94: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x125f94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x125f98: 0x34c68002  ori         $a2, $a2, 0x8002
    ctx->pc = 0x125f98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32770);
    // 0x125f9c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x125f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x125fa0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x125fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x125fa4: 0xae13001c  sw          $s3, 0x1C($s0)
    ctx->pc = 0x125fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
    // 0x125fa8: 0x24080048  addiu       $t0, $zero, 0x48
    ctx->pc = 0x125fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x125fac: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x125facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x125fb0: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x125fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x125fb4: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x125fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x125fb8: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x125fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x125fbc: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x125fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x125fc0: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x125fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x125fc4: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x125fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x125fc8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x125fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x125fcc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x125fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x125fd0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x125fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125fd4: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x125fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x125fd8: 0x24730050  addiu       $s3, $v1, 0x50
    ctx->pc = 0x125fd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x125fdc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x125fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x125fe0: 0x24770040  addiu       $s7, $v1, 0x40
    ctx->pc = 0x125fe0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x125fe4: 0xe4950004  swc1        $f21, 0x4($a0)
    ctx->pc = 0x125fe4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x125fe8: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x125fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x125fec: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x125fecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x125ff0: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x125ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x125ff4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x125ff4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x125ff8u;
}
