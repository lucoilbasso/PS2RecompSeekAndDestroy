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

// Function: entry_001481ac
// Address: 0x1481ac - 0x148268
void entry_001481ac_0x1481ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001481ac_0x1481ac");
#endif

    ctx->pc = 0x1481acu;

    // 0x1481ac: 0xafb000a4  sw          $s0, 0xA4($sp)
    ctx->pc = 0x1481acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 16));
    // 0x1481b0: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x1481b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x1481b4: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x1481b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1481b8: 0x35080003  ori         $t0, $t0, 0x3
    ctx->pc = 0x1481b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)3);
    // 0x1481bc: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1481bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1481c0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1481c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1481c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1481c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1481c8: 0x3c0b0003  lui         $t3, 0x3
    ctx->pc = 0x1481c8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)3 << 16));
    // 0x1481cc: 0x356b000d  ori         $t3, $t3, 0xD
    ctx->pc = 0x1481ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)13);
    // 0x1481d0: 0x8fa700a4  lw          $a3, 0xA4($sp)
    ctx->pc = 0x1481d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1481d4: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x1481d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1481d8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1481d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1481dc: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x1481dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1481e0: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1481e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1481e4: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x1481e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1481e8: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x1481e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x1481ec: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1481ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1481f0: 0xfc480000  sd          $t0, 0x0($v0)
    ctx->pc = 0x1481f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 8));
    // 0x1481f4: 0x24080042  addiu       $t0, $zero, 0x42
    ctx->pc = 0x1481f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1481f8: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x1481f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x1481fc: 0x246b0050  addiu       $t3, $v1, 0x50
    ctx->pc = 0x1481fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x148200: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x148200u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x148204: 0x3c042022  lui         $a0, 0x2022
    ctx->pc = 0x148204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8226 << 16));
    // 0x148208: 0x24690030  addiu       $t1, $v1, 0x30
    ctx->pc = 0x148208u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x14820c: 0x246a0040  addiu       $t2, $v1, 0x40
    ctx->pc = 0x14820cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x148210: 0xdf828c90  ld          $v0, -0x7370($gp)
    ctx->pc = 0x148210u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x148214: 0x240c0048  addiu       $t4, $zero, 0x48
    ctx->pc = 0x148214u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x148218: 0xfd270008  sd          $a3, 0x8($t1)
    ctx->pc = 0x148218u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 7));
    // 0x14821c: 0x3c130fff  lui         $s3, 0xFFF
    ctx->pc = 0x14821cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4095 << 16));
    // 0x148220: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x148220u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x148224: 0x2489f640  addiu       $t1, $a0, -0x9C0
    ctx->pc = 0x148224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964800));
    // 0x148228: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x148228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x14822c: 0xad4c0000  sw          $t4, 0x0($t2)
    ctx->pc = 0x14822cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
    // 0x148230: 0x244242a0  addiu       $v0, $v0, 0x42A0
    ctx->pc = 0x148230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17056));
    // 0x148234: 0x3c01c400  lui         $at, 0xC400
    ctx->pc = 0x148234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50176 << 16));
    // 0x148238: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x148238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x14823c: 0xc79681a8  lwc1        $f22, -0x7E58($gp)
    ctx->pc = 0x14823cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x148240: 0x24b24340  addiu       $s2, $a1, 0x4340
    ctx->pc = 0x148240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 17216));
    // 0x148244: 0xc79581ac  lwc1        $f21, -0x7E54($gp)
    ctx->pc = 0x148244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x148248: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x148248u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14824c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14824cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x148250: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x148250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x148254: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x148254u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148258: 0xfd480008  sd          $t0, 0x8($t2)
    ctx->pc = 0x148258u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 8));
    // 0x14825c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14825cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148260: 0x3673ff70  ori         $s3, $s3, 0xFF70
    ctx->pc = 0x148260u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65392);
    // 0x148264: 0x24510008  addiu       $s1, $v0, 0x8
    ctx->pc = 0x148264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->pc = 0x148268u;
}
