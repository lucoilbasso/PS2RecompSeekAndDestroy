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

// Function: entry_00128e24
// Address: 0x128e24 - 0x128f18
void entry_00128e24_0x128e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128e24_0x128e24");
#endif

    ctx->pc = 0x128e24u;

    // 0x128e24: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x128e24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e28: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x128e28u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x128e2c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x128e2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x128e30: 0x35298005  ori         $t1, $t1, 0x8005
    ctx->pc = 0x128e30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32773);
    // 0x128e34: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x128e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x128e38: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x128e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x128e3c: 0x3c0b0007  lui         $t3, 0x7
    ctx->pc = 0x128e3cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)7 << 16));
    // 0x128e40: 0x356b000d  ori         $t3, $t3, 0xD
    ctx->pc = 0x128e40u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)13);
    // 0x128e44: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x128e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x128e48: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x128e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x128e4c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x128e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x128e50: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x128e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x128e54: 0x24500070  addiu       $s0, $v0, 0x70
    ctx->pc = 0x128e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x128e58: 0xaec20008  sw          $v0, 0x8($s6)
    ctx->pc = 0x128e58u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
    // 0x128e5c: 0x24480030  addiu       $t0, $v0, 0x30
    ctx->pc = 0x128e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x128e60: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x128e60u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x128e64: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x128e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x128e68: 0xfc690000  sd          $t1, 0x0($v1)
    ctx->pc = 0x128e68u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 9));
    // 0x128e6c: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x128e6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x128e70: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x128e70u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x128e74: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x128e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x128e78: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x128e78u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x128e7c: 0x244b0060  addiu       $t3, $v0, 0x60
    ctx->pc = 0x128e7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x128e80: 0x240a004e  addiu       $t2, $zero, 0x4E
    ctx->pc = 0x128e80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x128e84: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x128e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x128e88: 0xdf838c90  ld          $v1, -0x7370($gp)
    ctx->pc = 0x128e88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x128e8c: 0x244c0050  addiu       $t4, $v0, 0x50
    ctx->pc = 0x128e8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x128e90: 0xfd0a0008  sd          $t2, 0x8($t0)
    ctx->pc = 0x128e90u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 10));
    // 0x128e94: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x128e94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x128e98: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x128e98u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x128e9c: 0x240d0006  addiu       $t5, $zero, 0x6
    ctx->pc = 0x128e9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x128ea0: 0x3c0e0007  lui         $t6, 0x7
    ctx->pc = 0x128ea0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)7 << 16));
    // 0x128ea4: 0xc7988108  lwc1        $f24, -0x7EF8($gp)
    ctx->pc = 0x128ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x128ea8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x128ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x128eac: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x128eacu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128eb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x128eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x128eb4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x128eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x128eb8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x128eb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ebc: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x128ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x128ec0: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x128ec0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ec4: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x128ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x128ec8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x128ec8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ecc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x128eccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x128ed0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x128ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x128ed4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x128ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x128ed8: 0x35cef000  ori         $t6, $t6, 0xF000
    ctx->pc = 0x128ed8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)61440);
    // 0x128edc: 0xfd890000  sd          $t1, 0x0($t4)
    ctx->pc = 0x128edcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 9));
    // 0x128ee0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x128ee0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ee4: 0xfd870008  sd          $a3, 0x8($t4)
    ctx->pc = 0x128ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 7));
    // 0x128ee8: 0x8c4400d0  lw          $a0, 0xD0($v0)
    ctx->pc = 0x128ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x128eec: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x128eecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x128ef0: 0x94850030  lhu         $a1, 0x30($a0)
    ctx->pc = 0x128ef0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x128ef4: 0xdc830038  ld          $v1, 0x38($a0)
    ctx->pc = 0x128ef4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x128ef8: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x128ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x128efc: 0xfd6d0008  sd          $t5, 0x8($t3)
    ctx->pc = 0x128efcu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 13));
    // 0x128f00: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x128f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x128f04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x128f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x128f08: 0xfd630000  sd          $v1, 0x0($t3)
    ctx->pc = 0x128f08u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
    // 0x128f0c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x128f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x128f10: 0xa3a40083  sb          $a0, 0x83($sp)
    ctx->pc = 0x128f10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 4));
    // 0x128f14: 0xc6b4001c  lwc1        $f20, 0x1C($s5)
    ctx->pc = 0x128f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x128f18u;
}
