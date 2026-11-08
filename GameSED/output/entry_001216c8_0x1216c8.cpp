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

// Function: entry_001216c8
// Address: 0x1216c8 - 0x12175c
void entry_001216c8_0x1216c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001216c8_0x1216c8");
#endif

    ctx->pc = 0x1216c8u;

    // 0x1216c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1216c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1216cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1216ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1216d0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1216d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1216d4: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1216d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1216d8: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x1216d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x1216dc: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x1216dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x1216e0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1216e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1216e4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1216e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1216e8: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1216e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1216ec: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x1216ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x1216f0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1216f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1216f4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1216f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1216f8: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x1216f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x1216fc: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x1216fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x121700: 0xe4540038  swc1        $f20, 0x38($v0)
    ctx->pc = 0x121700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x121704: 0xe454003c  swc1        $f20, 0x3C($v0)
    ctx->pc = 0x121704u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x121708: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x121708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x12170c: 0xa0400043  sb          $zero, 0x43($v0)
    ctx->pc = 0x12170cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 67), (uint8_t)GPR_U32(ctx, 0));
    // 0x121710: 0xa0400042  sb          $zero, 0x42($v0)
    ctx->pc = 0x121710u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x121714: 0xa0400041  sb          $zero, 0x41($v0)
    ctx->pc = 0x121714u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 65), (uint8_t)GPR_U32(ctx, 0));
    // 0x121718: 0xa0400040  sb          $zero, 0x40($v0)
    ctx->pc = 0x121718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x12171c: 0xa0400047  sb          $zero, 0x47($v0)
    ctx->pc = 0x12171cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x121720: 0xa0400046  sb          $zero, 0x46($v0)
    ctx->pc = 0x121720u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x121724: 0xa0400045  sb          $zero, 0x45($v0)
    ctx->pc = 0x121724u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x121728: 0xa0400044  sb          $zero, 0x44($v0)
    ctx->pc = 0x121728u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x12172c: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x12172cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x121730: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x121730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x121734: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x121734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x121738: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x121738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12173c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x12173cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x121740: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x121740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x121744: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x121744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x121748: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x121748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x12174c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12174cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x121750: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x121750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x121754: 0xc048424  jal         func_121090
    ctx->pc = 0x121754u;
    SET_GPR_U32(ctx, 31, 0x12175Cu);
    ctx->pc = 0x121758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121754u;
    // 0x121758: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x121090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121090u, 0x121754u, 0x12175Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12175Cu;
}
