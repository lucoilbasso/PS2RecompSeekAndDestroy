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

// Function: entry_0017f250
// Address: 0x17f250 - 0x17f2e8
void entry_0017f250_0x17f250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f250_0x17f250");
#endif

    ctx->pc = 0x17f250u;

    // 0x17f250: 0x26b2018  mult        $a0, $s3, $t3
    ctx->pc = 0x17f250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x17f254: 0xa1420004  sb          $v0, 0x4($t2)
    ctx->pc = 0x17f254u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x17f258: 0xa14b0005  sb          $t3, 0x5($t2)
    ctx->pc = 0x17f258u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 5), (uint8_t)GPR_U32(ctx, 11));
    // 0x17f25c: 0x1711825  or          $v1, $t3, $s1
    ctx->pc = 0x17f25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | GPR_U64(ctx, 17));
    // 0x17f260: 0x2173c  dsll32      $v0, $v0, 28
    ctx->pc = 0x17f260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 28));
    // 0x17f264: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x17f264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x17f268: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17f268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17f26c: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x17f26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x17f270: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17f270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17f274: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x17f274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x17f278: 0xa544000a  sh          $a0, 0xA($t2)
    ctx->pc = 0x17f278u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x17f27c: 0x6f1825  or          $v1, $v1, $t7
    ctx->pc = 0x17f27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 15));
    // 0x17f280: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x17f280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f284: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x17f284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f288: 0x95040002  lhu         $a0, 0x2($t0)
    ctx->pc = 0x17f288u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x17f28c: 0x25090010  addiu       $t1, $t0, 0x10
    ctx->pc = 0x17f28cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x17f290: 0xa1530006  sb          $s3, 0x6($t2)
    ctx->pc = 0x17f290u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 6), (uint8_t)GPR_U32(ctx, 19));
    // 0x17f294: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x17f294u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f298: 0xa5440008  sh          $a0, 0x8($t2)
    ctx->pc = 0x17f298u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x17f29c: 0x9542000a  lhu         $v0, 0xA($t2)
    ctx->pc = 0x17f29cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 10)));
    // 0x17f2a0: 0x91040006  lbu         $a0, 0x6($t0)
    ctx->pc = 0x17f2a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x17f2a4: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x17f2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x17f2a8: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x17f2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x17f2ac: 0xa1440007  sb          $a0, 0x7($t2)
    ctx->pc = 0x17f2acu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x17f2b0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x17f2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x17f2b4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x17f2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x17f2b8: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x17f2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x17f2bc: 0xfced0008  sd          $t5, 0x8($a3)
    ctx->pc = 0x17f2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 13));
    // 0x17f2c0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x17f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x17f2c4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x17f2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x17f2c8: 0x1160003b  beqz        $t3, . + 4 + (0x3B << 2)
    ctx->pc = 0x17F2C8u;
    {
        const bool branch_taken_0x17f2c8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2C8u;
        // 0x17f2cc: 0xad42000c  sw          $v0, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2c8) {
            ctx->pc = 0x17F3B8u;
            return;
        }
    }
    ctx->pc = 0x17F2D0u;
    // 0x17f2d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17f2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17f2d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17f2d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17f2d8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x17f2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17f2dc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17f2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17f2e0: 0x2a660004  slti        $a2, $s3, 0x4
    ctx->pc = 0x17f2e0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17f2e4: 0x0  nop
    ctx->pc = 0x17f2e4u;
    // NOP
    ctx->pc = 0x17f2e8u;
}
