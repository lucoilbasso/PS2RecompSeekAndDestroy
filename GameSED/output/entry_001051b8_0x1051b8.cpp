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

// Function: entry_001051b8
// Address: 0x1051b8 - 0x105268
void entry_001051b8_0x1051b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001051b8_0x1051b8");
#endif

    switch (ctx->pc) {
        case 0x10520cu: goto label_10520c;
        case 0x105264u: goto label_105264;
        default: break;
    }

    ctx->pc = 0x1051b8u;

    // 0x1051b8: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1051b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1051bc: 0x2442bf88  addiu       $v0, $v0, -0x4078
    ctx->pc = 0x1051bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950792));
    // 0x1051c0: 0x2407004d  addiu       $a3, $zero, 0x4D
    ctx->pc = 0x1051c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1051c4: 0x24088036  addiu       $t0, $zero, -0x7FCA
    ctx->pc = 0x1051c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934582));
    // 0x1051c8: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x1051c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1051cc: 0x240a0036  addiu       $t2, $zero, 0x36
    ctx->pc = 0x1051ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1051d0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1051d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1051d4: 0xa0470001  sb          $a3, 0x1($v0)
    ctx->pc = 0x1051d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x1051d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1051d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1051dc: 0xa4480002  sh          $t0, 0x2($v0)
    ctx->pc = 0x1051dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x1051e0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1051e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1051e4: 0xa4490004  sh          $t1, 0x4($v0)
    ctx->pc = 0x1051e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 9));
    // 0x1051e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1051e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1051ec: 0xa44a000a  sh          $t2, 0xA($v0)
    ctx->pc = 0x1051ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 10));
    // 0x1051f0: 0x3c11000d  lui         $s1, 0xD
    ctx->pc = 0x1051f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)13 << 16));
    // 0x1051f4: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x1051f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1051f8: 0x3631f800  ori         $s1, $s1, 0xF800
    ctx->pc = 0x1051f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)63488);
    // 0x1051fc: 0xa4400008  sh          $zero, 0x8($v0)
    ctx->pc = 0x1051fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x105200: 0x241301bf  addiu       $s3, $zero, 0x1BF
    ctx->pc = 0x105200u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 447));
    // 0x105204: 0xc06cc4a  jal         func_1B3128
    ctx->pc = 0x105204u;
    SET_GPR_U32(ctx, 31, 0x10520Cu);
    ctx->pc = 0x105208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105204u;
    // 0x105208: 0xa440000c  sh          $zero, 0xC($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3128u, 0x105204u, 0x10520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10520Cu;
label_10520c:
    // 0x10520c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x10520cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x105210: 0x2463bf98  addiu       $v1, $v1, -0x4068
    ctx->pc = 0x105210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950808));
    // 0x105214: 0x240a0028  addiu       $t2, $zero, 0x28
    ctx->pc = 0x105214u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x105218: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x105218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x10521c: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x10521cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x105220: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x105220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105224: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x105224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x105228: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x105228u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x1EBF98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EBF98u, _value); } while (0);
    // 0x10522c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x10522cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105230: 0xac690004  sw          $t1, 0x4($v1)
    ctx->pc = 0x105230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x1EBF9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EBF9Cu, _value); } while (0);
    // 0x105234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x105234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105238: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x105238u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1EBFA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EBFA0u, _value); } while (0);
    // 0x10523c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x10523cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x105240: 0xa467000c  sh          $a3, 0xC($v1)
    ctx->pc = 0x105240u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1EBFA4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1EBFA4u, _value); } while (0);
    // 0x105244: 0xa468000e  sh          $t0, 0xE($v1)
    ctx->pc = 0x105244u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1EBFA6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1EBFA6u, _value); } while (0);
    // 0x105248: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x105248u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EBFA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EBFA8u, _value); } while (0);
    // 0x10524c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x10524cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EBFACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EBFACu, _value); } while (0);
    // 0x105250: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x105250u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EBFB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EBFB0u, _value); } while (0);
    // 0x105254: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x105254u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EBFB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EBFB4u, _value); } while (0);
    // 0x105258: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x105258u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EBFB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EBFB8u, _value); } while (0);
    // 0x10525c: 0xc06cc4a  jal         func_1B3128
    ctx->pc = 0x10525Cu;
    SET_GPR_U32(ctx, 31, 0x105264u);
    ctx->pc = 0x105260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10525Cu;
    // 0x105260: 0xac600024  sw          $zero, 0x24($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3128u, 0x10525Cu, 0x105264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105264u;
label_105264:
    // 0x105264: 0x8f9088a8  lw          $s0, -0x7758($gp)
    ctx->pc = 0x105264u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
    ctx->pc = 0x105268u;
}
