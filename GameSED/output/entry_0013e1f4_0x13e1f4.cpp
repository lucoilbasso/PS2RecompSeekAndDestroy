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

// Function: entry_0013e1f4
// Address: 0x13e1f4 - 0x13e2a0
void entry_0013e1f4_0x13e1f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e1f4_0x13e1f4");
#endif

    ctx->pc = 0x13e1f4u;

    // 0x13e1f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x13e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e1f8: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x13e1f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13e1fc: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x13e1fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x13e200: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x13e200u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x13e204: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x13e204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x13e208: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x13e208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x13e20c: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x13e20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13e210: 0x24890040  addiu       $t1, $a0, 0x40
    ctx->pc = 0x13e210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x13e214: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x13e214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x13e218: 0x1271823  subu        $v1, $t1, $a3
    ctx->pc = 0x13e218u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x13e21c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x13e21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x13e220: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x13e220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x13e224: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x13e224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x13e228: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x13e228u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x13e22c: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x13e22cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x13e230: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x13e230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13e234: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x13e234u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x13e238: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x13e238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13e23c: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x13e23cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x13e240: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13e240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13e244: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x13e244u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x13e248: 0x90c8c478  lbu         $t0, -0x3B88($a2)
    ctx->pc = 0x13e248u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x1FC478u));
    // 0x13e24c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13e24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13e250: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x13e250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x13e254: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x13e254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x13e258: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x13e258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x13e25c: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x13e25cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x13e260: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x13e260u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x13e264: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x13e264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x13e268: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x13e268u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x13e26c: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x13e26cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x13e270: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x13e270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x13e274: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x13e274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13e278: 0x3c01c0a0  lui         $at, 0xC0A0
    ctx->pc = 0x13e278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49312 << 16));
    // 0x13e27c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13e27cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13e280: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x13e280u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x13e284: 0x104000d4  beqz        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x13E284u;
    {
        const bool branch_taken_0x13e284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E284u;
        // 0x13e288: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e284) {
            ctx->pc = 0x13E5D8u;
            return;
        }
    }
    ctx->pc = 0x13E28Cu;
    // 0x13e28c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13e28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13e290: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x13e290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x13e294: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x13e294u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13e298: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x13e298u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13e29c: 0x0  nop
    ctx->pc = 0x13e29cu;
    // NOP
    ctx->pc = 0x13e2a0u;
}
