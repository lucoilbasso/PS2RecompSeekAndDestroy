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

// Function: entry_00193958
// Address: 0x193958 - 0x193a10
void entry_00193958_0x193958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193958_0x193958");
#endif

    switch (ctx->pc) {
        case 0x193964u: goto label_193964;
        default: break;
    }

    ctx->pc = 0x193958u;

    // 0x193958: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x193958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19395c: 0xc061258  jal         func_184960
    ctx->pc = 0x19395Cu;
    SET_GPR_U32(ctx, 31, 0x193964u);
    ctx->pc = 0x193960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19395Cu;
    // 0x193960: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x19395Cu, 0x193964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193964u;
label_193964:
    // 0x193964: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x193968: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x193968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x19396c: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x19396cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x193970: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x193970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x193974: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x193974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x193978: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x193978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x19397c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x19397cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x193980: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x193980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x193984: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x193984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x193988: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x193988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x19398c: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x19398cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x193990: 0x9083ef28  lbu         $v1, -0x10D8($a0)
    ctx->pc = 0x193990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x21EF28u));
    // 0x193994: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x193994u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x193998: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x193998u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19399c: 0x8ca2d630  lw          $v0, -0x29D0($a1)
    ctx->pc = 0x19399cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x1939a0: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x1939a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x1939a4: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1939a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1939a8: 0x26030160  addiu       $v1, $s0, 0x160
    ctx->pc = 0x1939a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x1939ac: 0xdc45d610  ld          $a1, -0x29F0($v0)
    ctx->pc = 0x1939acu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25D610u));
    // 0x1939b0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1939b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1939b4: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1939b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x1939b8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1939b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1939bc: 0xfe050180  sd          $a1, 0x180($s0)
    ctx->pc = 0x1939bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 5));
    // 0x1939c0: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x1939c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x1939c4: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x1939c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x1939c8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1939c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x1939cc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1939ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1939d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1939d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1939d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1939d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1939d8: 0x26020174  addiu       $v0, $s0, 0x174
    ctx->pc = 0x1939d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 372));
    // 0x1939dc: 0x26030178  addiu       $v1, $s0, 0x178
    ctx->pc = 0x1939dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 376));
    // 0x1939e0: 0x2605017c  addiu       $a1, $s0, 0x17C
    ctx->pc = 0x1939e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 380));
    // 0x1939e4: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1939e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1939e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1939e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939ec: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x1939ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1939f0: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x1939f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x1939f4: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x1939f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1939f8: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x1939f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1939fc: 0xe6000190  swc1        $f0, 0x190($s0)
    ctx->pc = 0x1939fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
    // 0x193a00: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x193a00u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x193a04: 0xa4a00002  sh          $zero, 0x2($a1)
    ctx->pc = 0x193a04u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x193a08: 0xae000194  sw          $zero, 0x194($s0)
    ctx->pc = 0x193a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 0));
    // 0x193a0c: 0xae0001a4  sw          $zero, 0x1A4($s0)
    ctx->pc = 0x193a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 0));
    ctx->pc = 0x193a10u;
}
